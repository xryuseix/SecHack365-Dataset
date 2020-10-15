/*
問題文の引用元：https://atcoder.jp/contests/abc118/tasks/abc118_a
A - B +/- AEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 正整数 A, B が与えられます。A が B の約数なら A + B を、そうでなければ
B - A を出力してください。
制約入力は全て整数である。1 \leq A \leq B \leq
20入力入力は以下の形式で標準入力から与えられる。A B出力A が B の約数なら A + B
を、そうでなければ B - A を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc118/submissions/4278963
// 提出ID : 4278963
// 問題ID : abc118_a
// コンテストID : abc118
// ユーザID : xryuseix
// コード長 : 634
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

  int a, b;
  cin >> a >> b;
  if (b % a == 0)
    cout << a + b << endl;
  else
    cout << b - a << endl;

  return 0;
}
