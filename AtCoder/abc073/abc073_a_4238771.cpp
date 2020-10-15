/*
問題文の引用元：https://atcoder.jp/contests/abc073/tasks/abc073_a
A - September 9Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 今、日本は 9 月 9 日です。二桁の整数 N が与えられるので、十進法で N に
9 が含まれるか答えてください。
制約10≦N≦99 入力入力は以下の形式で標準入力から与えられる。N出力9 が含まれるとき
Yes 、含まれないとき No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc073/submissions/4238771
// 提出ID : 4238771
// 問題ID : abc073_a
// コンテストID : abc073
// ユーザID : xryuseix
// コード長 : 536
// 実行時間 : 2



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

  int n;
  cin >> n;
  if (n % 10 == 9 || n - n % 10 == 90)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
