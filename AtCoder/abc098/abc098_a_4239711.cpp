/*
問題文の引用元：https://atcoder.jp/contests/abc098/tasks/abc098_a
A - Add Sub MulEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 2 つの整数 A, B が与えられます。A+B, A-B, A \times B
の中で最大の値を求めてください。
制約-1000 \leq A,B \leq
1000入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A
B出力A+B, A-B, A \times B の中で最大の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc098/submissions/4239711
// 提出ID : 4239711
// 問題ID : abc098_a
// コンテストID : abc098
// ユーザID : xryuseix
// コード長 : 509
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
  cout << max(a + b, max(a - b, a * b)) << endl;

  return 0;
}
