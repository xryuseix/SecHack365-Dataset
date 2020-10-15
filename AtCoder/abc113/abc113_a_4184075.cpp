/*
問題文の引用元：https://atcoder.jp/contests/abc113/tasks/abc113_a
A - Discount FareEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : A 駅と B 駅を結ぶ鉄道があり、運賃は X 円です。また、B 駅と C
駅を結ぶバスがあり、運賃は Y 円です。joisinoお姉ちゃんは、A 駅から B
駅まで鉄道で移動し、B 駅から C
駅までバスで移動すると、バスの運賃が半額になる特別券を手に入れました。この特別券を用いたとき、A
駅から C 駅まで移動するのにいくらかかるか求めてください。
制約1 \leq X,Y \leq 100Y
は偶数入力は全て整数入力入力は以下の形式で標準入力から与えられる。X Y出力A
駅から C 駅まで移動するのに x 円かかるとき、x を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc113/submissions/4184075
// 提出ID : 4184075
// 問題ID : abc113_a
// コンテストID : abc113
// ユーザID : xryuseix
// コード長 : 267
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

  int a, b;
  cin >> a >> b;
  cout << int(a + b / 2) << endl;

  return 0;
}
