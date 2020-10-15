/*
問題文の引用元：https://atcoder.jp/contests/abc023/tasks/abc023_a
A - 加算王Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 今回は 23 回目の AtCoder Beginner Contest です。今回のコンテストは 5
月に開かれています。高橋君は 23
という整数を見て、十の位と一の位に分割して足し合わせることによって、2 + 3 = 5
と現在の月と等しい数となることに気が付きました。このことに興味を持った高橋君は、手元にあった
2 桁の正整数 X の各位の和を計算することにしました。あなたの課題は、正整数 X
の各位の和を求めることです。入力入力は以下の形式で標準入力から与えられる。X1
行目には、2 桁の正整数 X (10 ≦ X ≦ 99) が与えられる。出力正整数 X の各位の和を 1
行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc023/submissions/4887375
// 提出ID : 4887375
// 問題ID : abc023_a
// コンテストID : abc023
// ユーザID : xryuseix
// コード長 : 262
// 実行時間 : 1



*/
#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>

using namespace std;
int main(void) {
  // Your code here!

  int s1, s2, s3, e1, e2, e3;
  cin >> s1;
  cout << s1 / 10 + s1 % 10 << endl;

  return 0;
}
