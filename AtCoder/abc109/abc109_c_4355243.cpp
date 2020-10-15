/*
問題文の引用元：https://atcoder.jp/contests/abc109/tasks/abc109_c
C - SkipEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 数直線上に N 個の都市があり、i 番目の都市は座標 x_i
にあります。あなたの目的は、これら全ての都市を 1
度以上訪れることです。あなたは、はじめに正整数 D
を設定します。その後、あなたは座標 X から出発し、以下の移動 1、移動 2
を好きなだけ行います。移動 1: 座標 y から座標 y + D に移動する移動 2: 座標 y
から座標 y - D に移動する全ての都市を 1 度以上訪れることのできる D
の最大値を求めてください。ここで、都市を訪れるとは、その都市のある座標に移動することです。
制約入力はすべて整数である1 \leq N \leq 10^51 \leq X \leq 10^91 \leq x_i \leq
10^9x_i はすべて異なるx_1, x_2, ..., x_N \neq
X入力入力は以下の形式で標準入力から与えられる。N Xx_1 x_2 ...
x_N出力全ての都市を 1 度以上訪れることのできる D の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc109/submissions/4355243
// 提出ID : 4355243
// 問題ID : abc109_c
// コンテストID : abc109
// ユーザID : xryuseix
// コード長 : 924
// 実行時間 : 18



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

int gcd(int x, int y) {
  int t;
  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}
int ngcd(int n, int a[]) {
  int i, d;
  d = a[0];
  for (i = 1; i < n && d != 1; i++)
    d = gcd(a[i], d);
  return d;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, x, i;
  cin >> n >> x;
  int a[n + 1], b[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  a[n] = x;
  sort(a, a + n + 1);
  for (i = 0; i < n; i++)
    b[i] = a[i + 1] - a[i];
  cout << ngcd(n, b) << endl;

  return 0;
}
