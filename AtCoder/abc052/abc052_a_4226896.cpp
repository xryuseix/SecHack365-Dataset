/*
問題文の引用元：https://atcoder.jp/contests/abc052/tasks/abc052_a
A - Two RectanglesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 二つの長方形があります。一つ目の長方形は、縦の辺の長さが
A、横の辺の長さが B です。二つ目の長方形は、縦の辺の長さが C、横の辺の長さが D
です。この二つの長方形のうち、面積の大きい方の面積を出力してください。なお、二つの長方形の面積が等しい時は、その面積を出力してください。
制約入力は全て整数である1≦A≦10^41≦B≦10^41≦C≦10^41≦D≦10^4入力入力は以下の形式で標準入力から与えられる。A
B C
D出力大きい方の長方形の面積を出力せよ。二つの長方形の面積が等しいなら、その面積を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc052/submissions/4226896
// 提出ID : 4226896
// 問題ID : abc052_a
// コンテストID : abc052
// ユーザID : xryuseix
// コード長 : 339
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

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a * b > c * d)
    cout << a *b << endl;
  else
    cout << c *d << endl;

  return 0;
}
