/*
問題文の引用元：https://atcoder.jp/contests/abc051/tasks/abc051_a
A - HaikuEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : イルカは、新年に長さ 19 の文字列 s を受け取りました。文字列 s の形式は
[英小文字 5 文字],[英小文字 7 文字],[英小文字 5 文字]
で表されます。イルカは、カンマで区切られた文字列 s
を、スペースで区切られた文字列に変換したいと思っています。イルカの代わりに、この処理を行うプログラムを作ってください。
制約s の長さは 19 である。s の 6 文字目と 14 文字目は , である。  それら以外の s
の文字は英小文字である。
入力入力は以下の形式で標準入力から与えられる。s出力処理した後の文字列を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc051/submissions/4198646
// 提出ID : 4198646
// 問題ID : abc051_a
// コンテストID : abc051
// ユーザID : xryuseix
// コード長 : 294
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  s[5] = ' ';
  s[13] = ' ';
  cout << s << endl;

  return 0;
}
