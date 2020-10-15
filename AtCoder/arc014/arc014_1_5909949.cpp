/*
問題文の引用元：https://atcoder.jp/contests/arc014/tasks/arc014_1
A - 君が望むなら世界中全てのたこ焼きを赤と青に染め上げようEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
高橋君は無駄な能力を数多く所持している。そのうちのひとつの能力として彼は一列に並べたたこ焼きを、高速に赤と青の交互に染め上げることができる。ちなみに味はつかない。先頭1番目のたこ焼きを赤色としたとき、N
番目のたこ焼きは何色か答えよ。入力入力は以下の形式で標準入力から与えられる。N1
行目にはたこ焼きの番号を表す整数 N(1≦N≦1000) が与えられる。出力N
番目のたこ焼きが赤ければ Red、青ければBlue と 1
行で出力すること。また、出力の最後には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc014/submissions/5909949
// 提出ID : 5909949
// 問題ID : arc014_1
// コンテストID : arc014
// ユーザID : xryuseix
// コード長 : 1342
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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << "Blue" << endl;
  else
    cout << "Red" << endl;
  //////////////////////////////////////////////////////
  return 0;
}
