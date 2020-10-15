/*
問題文の引用元：https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_c
C - When I hit my pocket...Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : すぬけ君は最初、ビスケットを 1
枚持っており、日本円は持っていません。すぬけ君は、以下の操作を好きな順に合計ちょうど
K 回行います。持っているビスケットを叩き、1 枚増やすビスケット A 枚を 1
円に交換する1 円をビスケット B 枚に交換するK
回の操作の後、すぬけ君が持っているビスケットの枚数の最大値を求めてください。
制約1 \leq K,A,B \leq 10^9K,A,B
は整数である入力入力は以下の形式で標準入力から与えられる。K A B出力K
回の操作の後、すぬけ君が持っているビスケットの枚数の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/4211984
// 提出ID : 4211984
// 問題ID : yahoo_procon2019_qual_c
// コンテストID : yahoo-procon2019-qual
// ユーザID : xryuseix
// コード長 : 553
// 実行時間 : 1221



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

  int i, k, a, b;
  cin >> k >> a >> b;
  if (a >= b - 2) {
    cout << k + 1 << endl;
    return 0;
  }
  long long int bis = 1, money = 0;
  for (i = 0; i < k; i++) {
    if (money > 0) {
      money--;
      bis += b;
    } else if (i == k - 1)
      bis++;
    else if (bis >= a) {
      bis -= a;
      money++;
    } else
      bis++;
  }
  cout << bis << endl;

  return 0;
}
