/*
問題文の引用元：https://atcoder.jp/contests/abc088/tasks/abc088_b
B - Card Game for TwoEditorial
Time Limit : 2 sec / Memory Limit : 256 MB﻿
配点：200 点
問題文 : N 枚のカードがあります. i 枚目のカードには, a_i
という数が書かれています.Alice と Bob は,
これらのカードを使ってゲームを行います. ゲームでは, Alice と Bob が交互に 1
枚ずつカードを取っていきます. Alice が先にカードを取ります.2
人がすべてのカードを取ったときゲームは終了し,
取ったカードの数の合計がその人の得点になります. 2
人とも自分の得点を最大化するように最適な戦略を取った時, Alice は Bob
より何点多く取るか求めてください.
制約N は 1 以上 100 以下の整数a_i \ (1 \leq i \leq N) は 1 以上 100
以下の整数入力入力は以下の形式で標準入力から与えられる.  Na_1 a_2 a_3 ...
a_N出力両者が最適な戦略を取った時, Alice は Bob
より何点多く取るかを出力してください.
// ソースコードの引用元 : https://atcoder.jp/contests/abc088/submissions/4313433
// 提出ID : 4313433
// 問題ID : abc088_b
// コンテストID : abc088
// ユーザID : xryuseix
// コード長 : 764
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, a = 0, b = 0, n;
  cin >> n;
  int s[n];
  for (i = 0; i < n; i++)
    cin >> s[i];
  sort(s, s + n);
  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      a += s[n - i - 1];
    } else
      b += s[n - i - 1];
  }
  cout << a - b << endl;

  return 0;
}
