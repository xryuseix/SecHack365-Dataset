/*
問題文の引用元：https://atcoder.jp/contests/abc011/tasks/abc011_1
A - 来月は何月？Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は、来月遊びに行く約束をしました。ですが、高橋君は頭が悪いので、来月が何月であるかが解りません。今月が何月かが与えられるので、来月が何月であるかを出力するプログラムを作ってあげてください。入力入力は以下の形式で標準入力から与えられる。N1
行目には、今月の月を表す整数 N (1 ≦ N ≦ 12)
が与えられる。出力来月が何月であるかを、 1
行で出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc011/submissions/4320485
// 提出ID : 4320485
// 問題ID : abc011_1
// コンテストID : abc011
// ユーザID : xryuseix
// コード長 : 651
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
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
const long long INF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a;
  cin >> a;
  if (a == 12)
    cout << 1 << endl;
  else
    cout << a + 1 << endl;

  return 0;
}
