/*
問題文の引用元：https://atcoder.jp/contests/abc140/tasks/abc140_c
C - Maximal ValueEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 長さ N の値の分からない整数列 A があります。長さ N-1 の整数列 B
が与えられます。このとき、 B_i \geq \max(A_i, A_{i+1})
が成立することが分かっています。A
の要素の総和として考えられる値の最大値を求めてください。
制約入力は全て整数2 ≤ N ≤ 1000 \leq B_i \leq
10^5入力入力は以下の形式で標準入力から与えられる。NB_1 B_2 ... B_{N-1}出力A
の要素の総和として考えられる値の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc140/submissions/7387815
// 提出ID : 7387815
// 問題ID : abc140_c
// コンテストID : abc140
// ユーザID : xryuseix
// コード長 : 1745
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
#include <cfloat>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
  vll b(n - 1);
  ll ans = 0;
  rep(i, n - 1) cin >> b[i];
  for (int i = 0; i < n - 2; i++)
    ans += min(b[i], b[i + 1]);
  ans += b[0];
  ans += b[n - 2];
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
