/*
問題文の引用元：https://atcoder.jp/contests/abc074/tasks/abc074_a
A - Bichrome CellsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点: 100 点
問題文 : N \times N
のマス目があります。このマス目の各マスを白色または黒色に塗ることにしました
(すべてのマスをどちらか片方の色に塗ります)。ちょうど A
マスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。
制約1≦N≦1000 ≦ A ≦
N^2入力入力は以下の形式で標準入力から与えられる。NA出力黒色に塗ることになるマスの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc074/submissions/4238784
// 提出ID : 4238784
// 問題ID : abc074_a
// コンテストID : abc074
// ユーザID : xryuseix
// コード長 : 493
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

  int n, a;
  cin >> n >> a;
  cout << n *n - a << endl;

  return 0;
}