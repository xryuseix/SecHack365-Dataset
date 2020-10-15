/*
問題文の引用元：https://atcoder.jp/contests/abc122/tasks/abc122_a
A - Double HelixEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : AtCoder 星には四種類の塩基 A, C, G, T が存在し、A と T、C と G
がそれぞれ対になります。文字 b が入力されます。これは A, C, G, T
のいずれかです。塩基 b
と対になる塩基を表す文字を出力するプログラムを書いてください。
制約b は文字 A, C, G, T
のいずれかである。入力入力は以下の形式で標準入力から与えられる。b出力塩基 b
と対になる塩基を表す文字を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc122/submissions/4718125
// 提出ID : 4718125
// 問題ID : abc122_a
// コンテストID : abc122
// ユーザID : xryuseix
// コード長 : 1034
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
#define INF INT_MAX;
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  char c;
  cin >> c;
  if (c == 'A')
    cout << 'T' << endl;
  else if (c == 'T')
    cout << 'A' << endl;
  else if (c == 'G')
    cout << 'C' << endl;
  else if (c == 'C')
    cout << 'G' << endl;

  //////////////////////////////////////////////////////
  return 0;
}
