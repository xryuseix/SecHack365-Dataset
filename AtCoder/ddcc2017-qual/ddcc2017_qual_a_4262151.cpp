/*
問題文の引用元：https://atcoder.jp/contests/ddcc2017-qual/tasks/ddcc2017_qual_a
A - DDCC型文字列Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 長さ 4 の文字列がDDCC型文字列であるのは、文字列の 1 文字目と 2
文字目が等しく、 2 文字目と 3 文字目が異なり、 3 文字目と 4
文字目が等しいときです。4 文字の文字列 S が与えられるので、DDCC型文字列ならば
Yes 、そうでなければ No を出力してください。
制約|S|＝4入力は英大文字からなる入力入力は以下の形式で標準入力から与えられる。S出力S
がDDCC型文字列ならば Yes 、そうでなければ No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/ddcc2017-qual/submissions/4262151
// 提出ID : 4262151
// 問題ID : ddcc2017_qual_a
// コンテストID : ddcc2017-qual
// ユーザID : xryuseix
// コード長 : 641
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string i, a, b, c;
  cin >> a;
  if (a[0] == a[1] && a[1] != a[2] && a[2] == a[3])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
