/*
問題文の引用元：https://atcoder.jp/contests/abc050/tasks/abc050_a
A - Addition and Subtraction EasyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : joisinoお姉ちゃんは、A op B
という式の値を計算したいと思っています。ここで、A,B は整数で、op は、+ または -
の記号です。あなたの仕事は、joisinoお姉ちゃんの代わりにこれを求めるプログラムを作ることです。
制約1≦A,B≦10^9op は、+ または -
の記号である。入力入力は以下の形式で標準入力から与えられる。A op
B出力式の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc050/submissions/4226871
// 提出ID : 4226871
// 問題ID : abc050_a
// コンテストID : abc050
// ユーザID : xryuseix
// コード長 : 350
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

  int a, b;
  char op;
  cin >> a >> op >> b;
  if (op == '+')
    cout << a + b << endl;
  else
    cout << a - b << endl;

  return 0;
}
