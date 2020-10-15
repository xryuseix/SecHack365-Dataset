/*
問題文の引用元：https://atcoder.jp/contests/abc069/tasks/abc069_a
A - K-CityEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : K 市には、東西方向に n 本の通りがあり、南北方向に m
本の通りがあります。東西方向のそれぞれの通りは、南北方向のそれぞれの通りと交わっています。東西南北を通りに囲まれた最小の領域を「街区」と呼びます。K
市にある街区の個数を求めてください。
制約2 ≤ n, m ≤ 100入力入力は以下の形式で標準入力から与えられる。n m出力K
市にある街区の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc069/submissions/4202090
// 提出ID : 4202090
// 問題ID : abc069_a
// コンテストID : abc069
// ユーザID : xryuseix
// コード長 : 302
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
  cin >> a >> b;
  cout << (a - 1) * (b - 1) << endl;

  return 0;
}