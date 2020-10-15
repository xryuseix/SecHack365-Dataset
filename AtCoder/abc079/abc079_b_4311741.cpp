/*
問題文の引用元：https://atcoder.jp/contests/abc079/tasks/abc079_b
B - Lucas NumberEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 今、日本は 11 月 18 日ですが、11 と 18 は隣り合うリュカ数です。整数 N
が与えられるので、N 番目のリュカ数を求めてください。ただし、リュカ数は i
番目のリュカ数を L_i とすると、L_0=2L_1=1L_i=L_{i-1}+L_{i-2}
(i≧2)と定義される数とします。
制約1≦N≦86答えは 10^{18}
より小さいことが保証される入力は整数からなる入力入力は以下の形式で標準入力から与えられる。N出力N
番目のリュカ数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc079/submissions/4311741
// 提出ID : 4311741
// 問題ID : abc079_b
// コンテストID : abc079
// ユーザID : xryuseix
// コード長 : 673
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll dp[87];
  int n, i;
  cin >> n;
  dp[0] = 2;
  dp[1] = 1;
  for (i = 2; i < 87; i++)
    dp[i] = dp[i - 1] + dp[i - 2];
  cout << dp[n] << endl;

  return 0;
}
