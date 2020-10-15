/*
問題文の引用元：https://atcoder.jp/contests/abc082/tasks/abc082_a
A - Round Up the MeanEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 2 つの正整数 a, b が与えられます。a, b の平均値を x とします。x
の小数点以下を切り上げて得られる整数を出力してください。
制約a, b は整数である。1 \leq a, b \leq
100入力入力は以下の形式で標準入力から与えられる。a b出力x
の小数点以下を切り上げて得られる整数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc082/submissions/4239031
// 提出ID : 4239031
// 問題ID : abc082_a
// コンテストID : abc082
// ユーザID : xryuseix
// コード長 : 498
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

  double a, b;
  cin >> a >> b;
  cout << ceil((a + b) / 2) << endl;

  return 0;
}
