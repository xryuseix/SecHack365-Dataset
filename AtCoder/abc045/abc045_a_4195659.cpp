/*
問題文の引用元：https://atcoder.jp/contests/abc045/tasks/abc045_a
A - TrapezoidsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 上底の長さが a、下底の長さが b、高さが h
の台形があります。台形の例この台形の面積を求めてください。
制約1 \leq a \leq 1001 \leq b \leq 1001 \leq h \leq
100入力で与えられる値はすべて整数h
は偶数入力入力は以下の形式で標準入力から与えられる。abh出力台形の面積を整数で出力せよ。面積が整数になることは保障されている。
// ソースコードの引用元 : https://atcoder.jp/contests/abc045/submissions/4195659
// 提出ID : 4195659
// 問題ID : abc045_a
// コンテストID : abc045
// ユーザID : xryuseix
// コード長 : 269
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

  int a, b, c;
  cin >> a >> b >> c;
  cout << (a + b) * c / 2 << endl;

  return 0;
}
