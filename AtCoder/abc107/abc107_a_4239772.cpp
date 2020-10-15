/*
問題文の引用元：https://atcoder.jp/contests/abc107/tasks/abc107_a
A - TrainEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : N 両編成の列車があります。この列車の前から i
両目は、後ろから何両目でしょうか？
制約1 \leq N \leq 1001 \leq i \leq
N入力入力は以下の形式で標準入力から与えられる。N i出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc107/submissions/4239772
// 提出ID : 4239772
// 問題ID : abc107_a
// コンテストID : abc107
// ユーザID : xryuseix
// コード長 : 487
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

  int a, b;
  cin >> a >> b;
  cout << a - b + 1 << endl;

  return 0;
}
