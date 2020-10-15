/*
問題文の引用元：https://atcoder.jp/contests/abc043/tasks/abc043_a
A - Children and Candies (ABC Edit)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
競プロ幼稚園にはN人の子供がいます。えび先生は、子供たちを一列に並べ、一人目にはキャンディーを1個,二人目には2個,...,N人目にはN個あげることにしました。必要なキャンディーの個数の合計は何個でしょう?
制約1≦N≦100入力入力は以下の形式で標準入力から与えられる。N出力必要なキャンディーの個数の合計を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc043/submissions/4194476
// 提出ID : 4194476
// 問題ID : abc043_a
// コンテストID : abc043
// ユーザID : xryuseix
// コード長 : 282
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

  int n;
  cin >> n;

  cout << n *(n + 1) / 2 << endl;

  return 0;
}