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
// ソースコードの引用元 : https://atcoder.jp/contests/abc055/submissions/4219160
// 提出ID : 4219160
// 問題ID : abc055_a
// コンテストID : abc055
// ユーザID : xryuseix
// コード長 : 306
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

  int n;
  cin >> n;
  cout << n * 800 - n / 15 * 200 << endl;

  return 0;
}