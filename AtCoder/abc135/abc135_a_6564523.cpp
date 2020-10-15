/*
問題文の引用元：https://atcoder.jp/contests/abc135/tasks/abc135_a
A - HarmonyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 相違なる整数 A, B があります。|A - K| = |B - K| となるような整数 K
を出力してください。そのような整数が存在しなければ、代わりに IMPOSSIBLE
を出力してください。
制約入力は全て整数である。0 \leq A,\ B \leq 10^9A と B
は相違なる。入力入力は以下の形式で標準入力から与えられる。A
B出力条件を満たす整数 K を出力せよ。そのような整数が存在しなければ、代わりに
IMPOSSIBLE を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc135/submissions/6564523
// 提出ID : 6564523
// 問題ID : abc135_a
// コンテストID : abc135
// ユーザID : xryuseix
// コード長 : 1660
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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll a, b;
  cin >> a >> b;
  if ((a + b) % 2 == 1)
    fin("IMPOSSIBLE");
  else
    cout << (a + b) / 2 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
