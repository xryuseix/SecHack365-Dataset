/*
問題文の引用元：https://atcoder.jp/contests/abc072/tasks/abc072_a
A - Sandglass2Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : X 秒を測れる砂時計があります。はじめ上のパーツに砂が X [g] あり、1
秒間に 1 [g]
砂が落ちます。なお、上のパーツにもう砂が残っていない場合は砂は落ちません。t
秒後に上のパーツに残っている砂は何gでしょう。
制約1≤X≤10^91≤t≤10^9X,t は整数入力入力は以下の形式で標準入力から与えられる。X
t出力t 秒後に上のパーツに残っている砂は何gかを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc072/submissions/4226940
// 提出ID : 4226940
// 問題ID : abc072_a
// コンテストID : abc072
// ユーザID : xryuseix
// コード長 : 323
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
  if (a - b >= 0)
    cout << a - b << endl;
  else
    cout << 0 << endl;

  return 0;
}
