/*
問題文の引用元：https://atcoder.jp/contests/abc055/tasks/abc055_a
A - RestaurantEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
すぬけくんはレストランに通うのが好きです。すぬけくん行きつけのレストランは何を食べても
1 食 800 円で、15 食食べる毎にその場で 200
円もらえます。すぬけくんは今までで合計 N 食食べました。今までに払った金額を x
円、レストランからもらった金額を y 円として、x-y を求めなさい。
制約1 ≦ N ≦
100入力入力は以下の形式で標準入力から与えられる。N出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc055/submissions/4887398
// 提出ID : 4887398
// 問題ID : abc055_a
// コンテストID : abc055
// ユーザID : xryuseix
// コード長 : 261
// 実行時間 : 2



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
  cout << s1 * 800 - s1 / 15 * 200 << endl;

  return 0;
}
