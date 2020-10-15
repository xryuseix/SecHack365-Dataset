/*
問題文の引用元：https://atcoder.jp/contests/ddcc2019-qual/tasks/ddcc2018_qual_c
C - チップ・ストーリー　～白銀編～
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点: 400 点
問題文 : 高橋君の飼い犬の BISCO は, ディスコ株式会社で働いている. ある日, BISCO
は 10 年間の功績を認められ, 社長の WISCO からプレゼントとして正方形のチップを
100 枚渡された.  BISCO は, これらのチップを以下のように 10 行 10 列に並べた.
ここで, 上から a 番目, 左から b 番目にあるチップを「チップ (a, b)」と表す.
さて, BISCO はこれらのチップに以下のようにして整数を書き込むことにした.  まず,
数列 P = (P_1, P_2, P_3, ..., P_{10}) と Q = (Q_1, Q_2, Q_3, ..., Q_{10})
を決める. これらの項の値はすべて正の整数でなければならない.次に, 各チップ (i, j)
に整数 P_i \times Q_j を書き込む.このとき, チップに書き込む整数はすべて 1 以上 N
以下でなければならない. この条件が満たされたときのみ, 書き込みが成功する.BISCO
は, 書き込みが成功するような数列 P, Q
の決め方が何通り存在するかに興味を持った.彼のために, 書き込みが成功するような
(P_1, P_2, P_3, ..., P_{10}, Q_1, Q_2, Q_3, ..., Q_{10})
の組合せとして考えられるものの個数を 1 \ 000 \ 000 \ 007
で割った余りを求めなさい.
制約N は 1 以上 100 \ 000 以下の整数入力入力は,
以下の形式で標準入力から与えられる.  N出力書き込みが成功するような (P_1, P_2,
P_3, ..., P_{10}, Q_1, Q_2, Q_3, ..., Q_{10}) の組合せの個数を 1 \ 000 \ 000 \
007 で割った余りを出力しなさい.



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <random>
#include <iomanip>
#include <unordered_set>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<ll, ll>> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define fi first
#define se second
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

// xのn乗%modを計算
ll mod_pow(ll x, ll n, ll mod = MOD) {
  ll res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}

int main() {

  vll l, r;
  int n;
  cin >> n;
  set<pair<ll, ll>> se;
  for (ll i = 1; i <= n; i++) {
    for (ll j = n / i; j >= 1; j--) {
      ll a = i, b = j;
      if (a > b)
        swap(a, b);
      if (se.count(mp(a, b)))
        break;
      se.insert(mp(a, b));
      l.pb(a);
      r.pb(b);
    }
  }
  // dump(l);
  // dump(r);
  vll t(n + 1), s(n + 1);
  rep(i, n + 1) {
    t[i] = mod_pow(i, 10);
    if (i) {
      s[i] = t[i] - t[i - 1];
      s[i] += MOD;
      s[i] %= MOD;
    }
  }
  // dump(s);
  // dump(t);
  ll ans = 0;
  rep(i, l.size()) {
    int bai = 1;
    if (l[i] != r[i]) {
      bai = 2;
    }
    ans += (s[l[i]] * s[r[i]]) * bai;
    ans %= MOD;
  }
  fin(ans);
}
