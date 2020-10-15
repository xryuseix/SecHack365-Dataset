/*
問題文の引用元：https://atcoder.jp/contests/abc119/tasks/abc119_b
B - Digital GiftsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋くんは N 人の親戚からお年玉をもらいました。N 個の値 x_1, x_2, ...,
x_N と N 個の文字列 u_1, u_2, ..., u_N が入力されます。各文字列 u_i は JPY
または BTC であり、x_i と u_i が i
人目の親戚からのお年玉の内容を表します。例えば、x_1 = 10000, u_1 = JPY であれば
1 人目の親戚からのお年玉は 10000 円であり、x_2 = 0.10000000, u_2 = BTC であれば
2 人目の親戚からのお年玉は 0.1 ビットコインです。ビットコインを 1.0 BTC あたり
380000.0
円として換算すると、高橋くんがもらったお年玉は合計で何円に相当するでしょうか？
制約2 \leq N \leq 10u_i = JPY または BTCu_i = JPY のとき x_i は整数であり、1
\leq x_i \leq 10^8u_i = BTC のとき x_i は小数点以下の桁を 8
桁持つ小数であり、0.00000001 \leq x_i \leq
100.00000000入力入力は以下の形式で標準入力から与えられる。Nx_1 u_1x_2 u_2:x_N
u_N出力高橋くんが受け取ったお年玉が合計で Y 円に相当するとき、値 Y
(整数とは限らない)
を出力せよ。出力は、ジャッジの出力との絶対誤差または相対誤差が 10^{-5}
以下のとき正解と判定される。
// ソースコードの引用元 : https://atcoder.jp/contests/abc119/submissions/4370297
// 提出ID : 4370297
// 問題ID : abc119_b
// コンテストID : abc119
// ユーザID : xryuseix
// コード長 : 736
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

  double a, n, i, ans = 0;
  string s;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a >> s;
    if (s == "JPY")
      ans += a;
    else {
      ans += a * 380000;
    }
  }
  printf("%.6f\n", ans);

  return 0;
}
