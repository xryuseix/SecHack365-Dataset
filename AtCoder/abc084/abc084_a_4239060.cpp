/*
問題文の引用元：https://atcoder.jp/contests/abc084/tasks/abc084_a
A - New YearEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 12 月 30 日の M 時から次の年になるまでは何時間か、求めてください。
制約1≦M≦23入力は全て整数入力入力は以下の形式で標準入力から与えられる。M出力12 月
30 日の M 時から次の年になるまでが x 時間のとき、x を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc084/submissions/4239060
// 提出ID : 4239060
// 問題ID : abc084_a
// コンテストID : abc084
// ユーザID : xryuseix
// コード長 : 490
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

  int m;
  cin >> m;
  cout << 24 + 24 - m << endl;

  return 0;
}
