/*
問題文の引用元：https://atcoder.jp/contests/abc115/tasks/abc115_a
A - Christmas Eve Eve EveEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : とある世界では、今日は 12 月 D 日です。D = 25 なら Christmas, D = 24
なら Christmas Eve, D = 23 なら Christmas Eve Eve, D = 22 なら Christmas Eve Eve
Eve と出力するプログラムを作ってください。
制約22 \leq D \leq 25D
は整数である。入力入力は以下の形式で標準入力から与えられる。D出力指定された文字列を出力せよ
(大文字と小文字は区別される)。
// ソースコードの引用元 : https://atcoder.jp/contests/abc115/submissions/4151088
// 提出ID : 4151088
// 問題ID : abc115_a
// コンテストID : abc115
// ユーザID : xryuseix
// コード長 : 405
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int d;
  cin >> d;
  if (d == 25)
    cout << "Christmas" << endl;
  else if (d == 24)
    cout << "Christmas Eve" << endl;
  else if (d == 23)
    cout << "Christmas Eve Eve" << endl;
  else
    cout << "Christmas Eve Eve Eve" << endl;
  return 0;
}
