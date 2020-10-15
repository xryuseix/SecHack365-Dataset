/*
問題文の引用元：https://atcoder.jp/contests/arc049/tasks/arc049_a
A - "強調"Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 文字列 S と、非負整数 A, B, C, D が与えられます。S の、A, B, C, D
文字目の後ろにダブルクオーテーション"を挿入した文字列を出力してください。ただし、0
文字目の後ろというのは、文字列の先頭を指すこととします。入力入力は以下の形式で標準入力から与えられる。SA
B C D1 行目には文字列 S(3 ≦ |S| ≦ 100) が与えられる。2 行目には、非負整数 A, B,
C, D(0 ≦ A < B < C < D ≦ |S|) が空白区切りで与えられる。|S| とは、S
の長さである。S
はすべて英字とアンダーバー(_)からなる。出力ダブルクオーテーション"を挿入した文字列を出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/arc049/submissions/6115074
// 提出ID : 6115074
// 問題ID : arc049_a
// コンテストID : arc049
// ユーザID : xryuseix
// コード長 : 1459
// 実行時間 : 1



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

  string s;
  cin >> s;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  s.insert(a, "\"");
  s.insert(b + 1, "\"");
  s.insert(c + 2, "\"");
  s.insert(d + 3, "\"");
  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
