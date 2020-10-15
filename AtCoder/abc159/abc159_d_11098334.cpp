/*
問題文の引用元：https://atcoder.jp/contests/abc159/tasks/abc159_d
D - Banned KEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : ボールが N 個あり、 i 番目のボールには整数 A_i
が書かれています。k=1,2,...,N
に対して以下の問題を解いて、答えをそれぞれ出力してください。  k
番目のボールを除いた N-1 個のボールから、書かれている整数が等しいような異なる 2
つのボールを選び出す方法の数を求めてください。選ぶ順序は考慮しません。
制約3 \leq N \leq 2 \times 10^51 \leq A_i \leq
N入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。  NA_1
A_2 ... A_N出力k=1,2,...,N に対する答えを順番に一行ずつ出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc159/submissions/11098334
// 提出ID : 11098334
// 問題ID : abc159_d
// コンテストID : abc159
// ユーザID : xryuseix
// コード長 : 2430
// 実行時間 : 207



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
#define endl '\n';
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {

  ll n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  ll all = 0;
  map<ll, ll> m;
  rep(i, n) m[v[i]]++;
  irep(i, m) {
    ll t = i->second;
    all += t * (t - 1) / 2;
  }
  rep(i, n) {
    ll ans = all;
    ll t = m[v[i]];
    ans -= t * (t - 1) / 2;
    t--;
    ans += t * (t - 1) / 2;
    fin(ans);
  }
}
