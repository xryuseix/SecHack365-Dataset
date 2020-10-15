/*
問題文の引用元：https://atcoder.jp/contests/gigacode-2019/tasks/gigacode_2019_a
A - 教室Editorial
Time Limit : 1 sec / Memory Limit : 1024 MB﻿
配点: 100 点
問題文 : ギガ高校には A 個の教室があり，すべての教室は一辺が B
メートルの正方形の形をしています．  この高校の教室の合計面積を求めてください．
制約1 \leq A \leq 1001 \leq B \leq
100入力はすべて整数部分点この問題には部分点は存在せず，すべてのテストケースに正解すると
100 点が与えられます．  入力入力は以下の形式で標準入力から与えられます．  A
B出力ギガ高校の教室面積の合計が何平方メートルか，整数で出力してください．
// ソースコードの引用元 :
https://atcoder.jp/contests/gigacode-2019/submissions/8595313
// 提出ID : 8595313
// 問題ID : gigacode_2019_a
// コンテストID : gigacode-2019
// ユーザID : xryuseix
// コード長 : 108
// 実行時間 : 1



*/
#include <iostream>
using namespace std;
int main(void) {
  int a, b;
  cin >> a >> b;
  cout << a *b *b << endl;
}
