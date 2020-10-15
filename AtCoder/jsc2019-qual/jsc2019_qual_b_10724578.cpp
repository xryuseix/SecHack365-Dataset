/*
問題文の引用元：https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_b
B - Kleene InversionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 長さ N の整数列 A~=~A_0,~A_1,~...,~A_{N - 1} があります。A を K
回繰り返した長さ K \times N の整数列を B とします。たとえば A~=~1,~3,~2、K~=~2
のとき、B~=~1,~3,~2,~1,~3,~2 です。B の転倒数を 10^9 + 7
で割った余りを求めてください。ここで B の転倒数は、整数の順序対 (i,~j)~(0 \leq i
< j \leq K \times N - 1) であって B_i > B_j
を満たすものの個数として定義されます。
制約入力は全て整数である。1 \leq N \leq 20001 \leq K \leq 10^91 \leq A_i \leq
2000入力入力は以下の形式で標準入力から与えられる。N KA_0 A_1 ... A_{N - 1}出力B
の転倒数を 10^9 + 7 で割った余りを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/jsc2019-qual/submissions/10724578
// 提出ID : 10724578
// 問題ID : jsc2019_qual_b
// コンテストID : jsc2019-qual
// ユーザID : xryuseix
// コード長 : 2218
// 実行時間 : 14



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
#include <unordered_set>
#pragma GCC optimize("Ofast")
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
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
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
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {

  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  vi v(n);
  rep(i, n) cin >> v[i];
  rep(i, n) {
    ll l = 0, r = 0;
    for (int j = i; j < n; j++) {
      if (v[i] > v[j])
        l++;
    }
    for (int j = 0; j < n; j++) {
      if (v[i] > v[j])
        r++;
    }
    ans += l * k;
    ans %= MOD;
    ans += r * ((k * k % MOD - k * (k + 1) / 2 % MOD + MOD) % MOD) % MOD;
    ans %= MOD;
  }
  fin(ans);
}
