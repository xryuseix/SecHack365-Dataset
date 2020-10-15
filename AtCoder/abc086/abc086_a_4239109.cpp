/*
問題文の引用元：https://atcoder.jp/contests/abc086/tasks/abc086_a
A - ProductEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : シカのAtCoDeerくんは二つの正整数 a,b を見つけました。a と b
の積が偶数か奇数か判定してください。
制約1 ≤ a,b ≤ 10000a,b は整数入力入力は以下の形式で標準入力から与えられる。a
b出力積が奇数なら Odd と、 偶数なら Even と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc086/submissions/4239109
// 提出ID : 4239109
// 問題ID : abc086_a
// コンテストID : abc086
// ユーザID : xryuseix
// コード長 : 532
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

  int a, b;
  cin >> a >> b;
  if (a * b % 2 == 0)
    cout << "Even" << endl;
  else
    cout << "Odd" << endl;

  return 0;
}
