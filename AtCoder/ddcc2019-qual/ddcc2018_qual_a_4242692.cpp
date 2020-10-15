/*
問題文の引用元：https://atcoder.jp/contests/ddcc2019-qual/tasks/ddcc2018_qual_a
A - チップ・ストーリー　～無色編～Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点: 100 点
問題文 : DIVCO 君は, 正方形のチップを 1 枚持っている. 彼は,
このチップを切って小さなチップに分割し, 重ねてタワーにしようと考えた.
具体的には, DIVCO 君は次の処理を N 回繰り返すことによりチップを分割する.
現在持っているチップをそれぞれ 4 等分し, 4 枚のより小さなチップを得る.さて, N
回の処理を終えたとき, DIVCO 君は何枚のチップを持っているか？
制約N は 1 以上 5 以下の整数入力入力は, 以下の形式で標準入力から与えられる.
N出力N 回の処理を終えたときのチップの枚数を出力せよ.
// ソースコードの引用元 :
https://atcoder.jp/contests/ddcc2019-qual/submissions/4242692
// 提出ID : 4242692
// 問題ID : ddcc2018_qual_a
// コンテストID : ddcc2019-qual
// ユーザID : xryuseix
// コード長 : 574
// 実行時間 : 4



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, l, i;
  cin >> n;
  cout << pow(4, n) << endl;

  return 0;
}
