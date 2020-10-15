/*
問題文の引用元：https://atcoder.jp/contests/abc102/tasks/abc102_a
A - Multiple of 2 and NEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 正整数 N が与えられます。2 と N
のどちらでも割り切れる最小の正整数を求めてください。
制約1 \leq N \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。N出力2
と N のどちらでも割り切れる最小の正整数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc102/submissions/4239749
// 提出ID : 4239749
// 問題ID : abc102_a
// コンテストID : abc102
// ユーザID : xryuseix
// コード長 : 518
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

  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << n << endl;
  else
    cout << n * 2 << endl;

  return 0;
}
