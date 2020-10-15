/*
問題文の引用元：https://atcoder.jp/contests/abc118/tasks/abc118_c
C - Monsters Battle RoyaleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 体のモンスターが居て、それぞれ 1, 2, ..., N
と番号付けられています。はじめ、モンスター i の体力は A_i です。以降、体力が 1
以上のモンスターを生きているモンスターと呼びます。生きているモンスターが 1
体になるまで以下を繰り返します。ランダムに 1
体の生きているモンスターがランダムに別の生きているモンスターに攻撃します。その結果、攻撃されたモンスターの体力を攻撃したモンスターの体力と同じ値だけ減らします。最後に生き残ったモンスターの最終的な体力の最小値を求めてください。
制約入力は全て整数である。2 \leq N \leq 10^51 \leq A_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力最後に生き残ったモンスターの最終的な体力の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc118/submissions/4283127
// 提出ID : 4283127
// 問題ID : abc118_c
// コンテストID : abc118
// ユーザID : xryuseix
// コード長 : 846
// 実行時間 : 12



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

  int n, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];

  printf("%d\n", ngcd(n, a));

  return 0;
}
