/*
問題文の引用元：https://atcoder.jp/contests/abc085/tasks/abc085_a
A - Already 2018Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 2018 年 1
月某日、高木さんは書類を書いています。書類には、その日の日付を yyyy/mm/dd
という形式で書き込む欄があります。例えば、2018 年 1 月 23 日は 2018/01/23
となります。書類を書き終えたあと、高木さんは日付欄の先頭に誤って 2017
と書いてしまっていたことに気がつきました。高木さんが日付欄に書いた文字列 S
を入力すると、S の先頭の 4 文字を 2018
に修正して出力するプログラムを書いてください。
制約S は長さ 10 の文字列である。S の先頭の 8 文字は 2017/01/ である。S の末尾の
2 文字は数字であり、1 以上 31
以下の整数を表す。入力入力は以下の形式で標準入力から与えられる。S出力S の先頭の
4 文字を 2018 に置き換えて出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc085/submissions/4239088
// 提出ID : 4239088
// 問題ID : abc085_a
// コンテストID : abc085
// ユーザID : xryuseix
// コード長 : 499
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

  string s;
  cin >> s;
  s[3] = '8';
  cout << s << endl;

  return 0;
}
