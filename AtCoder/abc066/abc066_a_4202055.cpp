/*
問題文の引用元：https://atcoder.jp/contests/abc066/tasks/abc066_a
A - ringringEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : snuke 君は自転車を買いに来ました。 snuke
君はすでに買う自転車を決めたのですが、その自転車にはベルが付いていないため、
自転車とは別にベルも買う必要があります。snuke
君は安全意識が高いので、ベルをどちらの手でも鳴らせるよう、両方のハンドルに 1
つずつ付けることにしました。お店にあるベルは 3 種類で、それぞれ a円、 b円、
c円です。この 3 つのうち、異なる 2
つのベルを選んで買うときの、値段の合計の最小値を求めて下さい。
制約1 \leq a,b,c \leq 10000a,b,c
は整数入力入力は以下の形式で標準入力から与えられる。a b c出力2
つのベルを買うときの最安値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc066/submissions/4202055
// 提出ID : 4202055
// 問題ID : abc066_a
// コンテストID : abc066
// ユーザID : xryuseix
// コード長 : 328
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

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  cout << a[0] + a[1] << endl;

  return 0;
}
