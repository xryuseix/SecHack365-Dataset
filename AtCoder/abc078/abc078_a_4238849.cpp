/*
問題文の引用元：https://atcoder.jp/contests/abc078/tasks/abc078_a
A - HEXEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : プログラミングでは 16 進数がよく使われます。16 進数では 0, 1, ..., 9
の数字の他に A, B, C, D, E, F の 6 つのアルファベットを使い，それぞれ 10, 11,
12, 13, 14, 15 を表します。この問題では 2 つのアルファベット X, Y
が与えられます。X と Y はどちらも A, B, C, D, E, F のうちどれかです。X と Y を
16 進数として見たとき，どちらのほうが大きいかを判定してください。
制約X, Y は A, B, C, D, E, F
のうちどれかである。入力入力は以下の形式で標準入力から与えられる。X Y出力X
のほうが小さいならば <，Y のほうが小さいならば >，等しいならば =
と出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc078/submissions/4238849
// 提出ID : 4238849
// 問題ID : abc078_a
// コンテストID : abc078
// ユーザID : xryuseix
// コード長 : 552
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

  char a, b;
  cin >> a >> b;
  if (a > b)
    cout << ">" << endl;
  else if (a == b)
    cout << "=" << endl;
  else
    cout << "<" << endl;

  return 0;
}
