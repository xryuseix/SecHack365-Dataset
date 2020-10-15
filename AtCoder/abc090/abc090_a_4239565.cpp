/*
問題文の引用元：https://atcoder.jp/contests/abc090/tasks/abc090_a
A - Diagonal StringEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 3 行 3
列の正方形状のマス目があり、各マスには英小文字が書かれています。上から i
行目、左から j 列目のマスに書かれた文字は、c_{ij}
です。マス目の左上と右下を結ぶような対角線上のマス目に書かれた文字を、左上から順に読んでできる
3 文字の文字列を出力してください。
制約入力は英小文字からなる入力入力は以下の形式で標準入力から与えられる。c_{11}c_{12}c_{13}c_{21}c_{22}c_{23}c_{31}c_{32}c_{33}出力マス目の左上と右下を結ぶような対角線上のマス目に書かれた文字を、左上から順に読んでできる
3 文字の文字列を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc090/submissions/4239565
// 提出ID : 4239565
// 問題ID : abc090_a
// コンテストID : abc090
// ユーザID : xryuseix
// コード長 : 512
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

  string a, b, c;

  cin >> a >> b >> c;
  cout << a[0] << b[1] << c[2] << endl;

  return 0;
}
