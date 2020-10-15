/*
問題文の引用元：https://atcoder.jp/contests/arc015/tasks/arc015_1
A - Celsius と FahrenheitEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 摂氏での温度 n 度を華氏にで表すと ( 9 ÷ 5 × n ) + 32
度となります。摂氏での温度が与えられるので華氏での温度に変換するプログラムを書いてください。入力入力は以下の形式で標準入力から与えられる。n1
行目は、華氏に変換すべき、摂氏の温度 n\ (-273≦n≦1,000)
が整数で与えられる。出力摂氏での温度 n を華氏に変換し、その値を 1
行で出力せよ。なお、出力の最後には改行をいれること。出力は絶対誤差あるいは相対誤差の少なくとも片方が
10^{-6} 以下であれば許容される。
// ソースコードの引用元 : https://atcoder.jp/contests/arc015/submissions/6114785
// 提出ID : 6114785
// 問題ID : arc015_1
// コンテストID : arc015
// ユーザID : xryuseix
// コード長 : 1323
// 実行時間 : 3



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  cout << (9.0 / 5.0 * n) + 32 << endl;
  //////////////////////////////////////////////////////
  return 0;
}