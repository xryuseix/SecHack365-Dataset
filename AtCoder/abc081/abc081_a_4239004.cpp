/*
問題文の引用元：https://atcoder.jp/contests/abc081/tasks/abc081_a
A - Placing MarblesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すぬけ君は 1,2,3 の番号がついた 3
つのマスからなるマス目を持っています。各マスには 0 か 1 が書かれており、マス i
には s_i が書かれています。すぬけ君は 1
が書かれたマスにビー玉を置きます。ビー玉が置かれるマスがいくつあるか求めてください。
制約s_1, s_2, s_3 は 1 あるいは
0入力入力は以下の形式で標準入力から与えられる。s_{1}s_{2}s_{3}出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc081/submissions/4239004
// 提出ID : 4239004
// 問題ID : abc081_a
// コンテストID : abc081
// ユーザID : xryuseix
// コード長 : 562
// 実行時間 : 3



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

  char n, a, b;
  int nd, ad, bd;
  scanf("%c %c %c", &n, &a, &b);
  ad = a - '0';
  bd = b - '0';
  nd = n - '0';
  cout << nd + ad + bd << endl;

  return 0;
}
