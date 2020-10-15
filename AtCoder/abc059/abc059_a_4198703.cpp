/*
問題文の引用元：https://atcoder.jp/contests/abc059/tasks/abc059_a
A - Three-letter acronymEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 英小文字からなる 3 つの単語 s_1, s_2, s_3
が空白区切りで与えられるので、単語の先頭の文字をつなげ、大文字にした略語を出力してください。
制約s_1, s_2, s_3 は英小文字からなる。1 ≦|s_i|≦ 10
(1≦i≦3)入力入力は以下の形式で標準入力から与えられる。s_1 s_2
s_3出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc059/submissions/4198703
// 提出ID : 4198703
// 問題ID : abc059_a
// コンテストID : abc059
// ユーザID : xryuseix
// コード長 : 360
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
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a, b, c;
  cin >> a >> b >> c;
  cout << (char)toupper(a[0]) << (char)toupper(b[0]) << (char)toupper(c[0])
       << endl;

  return 0;
}