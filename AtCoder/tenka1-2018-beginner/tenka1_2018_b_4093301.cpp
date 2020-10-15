/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2018-beginner/tasks/tenka1_2018_b
B - ExchangeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は最初 A 枚、青木君は最初 B
枚のクッキーを持っています。二人は、高橋君からはじめて交互に、以下の操作を繰り返します。自分が持っているクッキーの枚数が奇数なら、自分が持っているクッキーを
1
枚食べ、偶数なら何もしない。その後、自分が持っているクッキーの半分を相手に渡す。合計
K
回の操作を行った後の、高橋君と青木君が持っているクッキーの枚数をそれぞれ求めてください。
制約1 \leq A,B \leq 10^91 \leq K \leq 100A,B,K
は整数である入力入力は以下の形式で標準入力から与えられる。A B K出力合計 K
回の操作を行った後の、高橋君と青木君が持っているクッキーの枚数を順に出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2018-beginner/submissions/4093301
// 提出ID : 4093301
// 問題ID : tenka1_2018_b
// コンテストID : tenka1-2018-beginner
// ユーザID : xryuseix
// コード長 : 346
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main(void) {

  int a, b, k, i;
  cin >> a >> b >> k;
  for (i = 0; i < k; i++) {
    if (i % 2 == 0) {
      if (a % 2 == 1)
        a--;
      b += a / 2;
      a /= 2;
    } else {
      if (b % 2 == 1)
        b--;
      a += b / 2;
      b /= 2;
    }
  }
  cout << a << " " << b;

  return 0;
}
