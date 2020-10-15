/*
問題文の引用元：https://atcoder.jp/contests/abc108/tasks/abc108_a
A - PairEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 1 以上 K
以下の正の整数から、偶数と奇数ひとつずつの組を選ぶ方法の個数を求めてください。なお、選ぶ順番は考慮しません。
制約2\leq K\leq 100K
は整数である入力入力は以下の形式で標準入力から与えられる。K出力1 以上 K
以下の正の整数から、偶数と奇数ひとつずつの組を選ぶ方法の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc108/submissions/4239796
// 提出ID : 4239796
// 問題ID : abc108_a
// コンテストID : abc108
// ユーザID : xryuseix
// コード長 : 520
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

  int a;
  cin >> a;
  if (a % 2 == 0)
    cout << a *a / 4 << endl;
  else
    cout << a / 2 * (a / 2 + 1) << endl;

  return 0;
}
