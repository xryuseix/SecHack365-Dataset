/*
問題文の引用元：https://atcoder.jp/contests/joi2018yo/tasks/joi2018_yo_a
A - 鉛筆 (Pencils)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : JOI 君は鉛筆を N
本買うために近くの文房具店に行くことにした．文房具店では鉛筆が一定の本数ずつのセットで売られている．セット
X は A 本で B 円，セット Y は C 本で D 円である．JOI 君はセット X かセット Y
の一方を選び，選んだセットをいくつか購入する．両方のセットを購入することはできない．N
本以上の鉛筆を得るために必要な金額の最小値を求めよ．
制約1 ≦ N ≦ 10001 ≦ A ≦ 10001 ≦ B ≦ 10001 ≦ C ≦ 10001 ≦ D ≦
1000入力入力は以下の形式で標準入力から与えられる．N A B C D出力JOI 君が N
本以上の鉛筆を手に入れるのに必要な金額の最小値を出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/joi2018yo/submissions/4753524
// 提出ID : 4753524
// 問題ID : joi2018_yo_a
// コンテストID : joi2018yo
// ユーザID : xryuseix
// コード長 : 626
// 実行時間 : 1



*/
#include <stdio.h>
int main(void) {

  int n, a, b, c, d;
  scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
  if (n % a == 0 && n % c == 0) {
    if ((n / a) * b > (n / c) * d) {
      printf("%d\n", (n / c) * d);
    } else
      printf("%d\n", (n / a) * b);
  }

  else if (n % a != 0 && n % c == 0) {
    if ((n / a + 1) * b > (n / c) * d) {
      printf("%d\n", (n / c) * d);
    } else
      printf("%d\n", (n / a + 1) * b);
  } else if (n % a == 0 && n % c != 0) {
    if ((n / a) * b > (n / c + 1) * d) {
      printf("%d\n", (n / c + 1) * d);
    } else
      printf("%d\n", (n / a) * b);
  }

  else if (n % a != 0 && n % c != 0) {
    if ((n / a + 1) * b > (n / c + 1) * d) {
      printf("%d\n", (n / c + 1) * d);
    } else
      printf("%d\n", (n / a + 1) * b);
  }
  return 0;
}
