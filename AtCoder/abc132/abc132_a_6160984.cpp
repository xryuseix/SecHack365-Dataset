/*
問題文の引用元：https://atcoder.jp/contests/abc132/tasks/abc132_a
A - Fifty-FiftyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 長さ 4 の英大文字からなる文字列 S が与えられます。S がちょうど 2
種類の文字からなり、かつ現れる各文字はちょうど 2
回ずつ現れているかどうかを判定してください。
制約S の長さは 4 であるS
は英大文字からなる入力入力は以下の形式で標準入力から与えられる。S出力S
がちょうど 2 種類の文字からなり、かつ現れる各文字はちょうど 2
回ずつ現れているなら Yes を、そうでないなら No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc132/submissions/6160984
// 提出ID : 6160984
// 問題ID : abc132_a
// コンテストID : abc132
// ユーザID : xryuseix
// コード長 : 1504
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
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
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
  sort(s.begin(), s.end());
  if (s[0] == s[1] && s[2] == s[3] && s[1] != s[2])
    cout << "Yes" << endl;
  else
    fin("No");
  //////////////////////////////////////////////////////
  return 0;
}
