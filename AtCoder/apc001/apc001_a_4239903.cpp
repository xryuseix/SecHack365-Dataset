/*
問題文の引用元：https://atcoder.jp/contests/apc001/tasks/apc001_a
A - Two IntegersEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 正整数 X と Y が与えられます。X の倍数であって Y の倍数でない 10^{18}
以下の正整数が存在すれば一つ選んで出力してください。存在しない場合は -1
を出力してください。
制約1 ≤ X,Y ≤ 10^9X,Y は整数入力入力は以下の形式で標準入力から与えられる。X
Y出力X の倍数であって Y の倍数でない 10^{18}
以下の正整数を一つ出力せよ。存在しない場合は -1 を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/apc001/submissions/4239903
// 提出ID : 4239903
// 問題ID : apc001_a
// コンテストID : apc001
// ユーザID : xryuseix
// コード長 : 522
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

  long long int a, b;
  cin >> a >> b;
  if (a % b == 0)
    cout << -1 << endl;
  else
    cout << a << endl;

  return 0;
}