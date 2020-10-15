/*
問題文の引用元：https://atcoder.jp/contests/abc138/tasks/abc138_b
B - Resistors in ParallelEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : N 個の整数の列 A_1, \ldots, A_N
が与えられます。これらの逆数の総和の逆数 \frac{1}{\frac{1}{A_1} + \ldots +
\frac{1}{A_N}} を求めてください。
制約1 \leq N \leq 1001 \leq A_i \leq
1000入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 \ldots
A_N出力\frac{1}{\frac{1}{A_1} + \ldots + \frac{1}{A_N}} の値を表す小数
(または整数) を出力せよ。出力は、ジャッジの出力との絶対誤差または相対誤差が
10^{-5} 以下のとき正解と判定される。
// ソースコードの引用元 : https://atcoder.jp/contests/abc138/submissions/6985532
// 提出ID : 6985532
// 問題ID : abc138_b
// コンテストID : abc138
// ユーザID : xryuseix
// コード長 : 1767
// 実行時間 : 1



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
#include <climits>
#include <string>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vector<double> v(n);
  rep(i, n) cin >> v[i];
  double ans = 0;
  double sum = 1;
  for (int i = 0; i < n; i++)
    sum *= v[i];
  for (int i = 0; i < n; i++) {
    ans += sum / v[i];
  }
  ans = sum / ans;
  printf("%7f\n", ans);

  //////////////////////////////////////////////////////
  return 0;
}
