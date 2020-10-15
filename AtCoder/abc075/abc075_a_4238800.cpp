/*
問題文の引用元：https://atcoder.jp/contests/abc075/tasks/abc075_a
A - One out of ThreeEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 3 つの整数 A,B,C が与えられます。 A,B,C のうち 2 つは
同じ整数であり、残りの 1 つだけ異なる整数です。 例えば、A=5,B=7,C=5 の場合、A,C
の 2 つは同じ整数であり、B は 1 つだけ異なる整数です。 3 つの整数のうち、1
つだけ異なる整数を求めてください。
制約-100≦A,B,C≦100  A,B,C は整数入力は
問題文 : の条件を満たす入力入力は以下の形式で標準入力から与えられる。  A B
C出力A,B,C のうち、1 つだけ異なる整数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc075/submissions/4238800
// 提出ID : 4238800
// 問題ID : abc075_a
// コンテストID : abc075
// ユーザID : xryuseix
// コード長 : 554
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

  int a, b, c;
  cin >> a >> b >> c;
  if (a == b)
    cout << c << endl;
  else if (a == c)
    cout << b << endl;
  else
    cout << a << endl;

  return 0;
}
