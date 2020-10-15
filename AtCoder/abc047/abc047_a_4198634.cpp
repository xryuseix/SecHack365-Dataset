/*
問題文の引用元：https://atcoder.jp/contests/abc047/tasks/abc047_a
A - Fighting over CandiesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 競プロ幼稚園に通う 2 人の子供がキャンディーの取り合いをしています。3
個のキャンディーパックがあり、それぞれのパックにはキャンディーが a, b, c
個入っています。えび先生はこの 3
個のパックを、キャンディーの個数が等しくなるように 2
人に分けようとしています。そのような分け方が可能かどうかを判定してください。ただし、キャンディーをパックから取り出すことはできず、それぞれのパックをそのままどちらかの子供にあげる必要があります。
制約1 ≦ a, b, c ≦ 100入力入力は以下の形式で標準入力から与えられる。a b
c出力キャンディーを同じ個数に分けられるなら Yes を、そうでなければ No
を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc047/submissions/4198634
// 提出ID : 4198634
// 問題ID : abc047_a
// コンテストID : abc047
// ユーザID : xryuseix
// コード長 : 347
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  if (a[0] + a[1] == a[2])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
