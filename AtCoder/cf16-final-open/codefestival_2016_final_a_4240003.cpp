/*
問題文の引用元：https://atcoder.jp/contests/cf16-final-open/tasks/codefestival_2016_final_a
A - Where's Snuke?Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 縦 H 行、横 W 列のマス目があります。上から i 行目、左から j
列目には長さ 5 の文字列 S_{i,j} が書かれています。行には上から順に 1~H
の番号が、列には左から順に A~Z の番号がついています。この中から snuke
という文字列を探し、列と行の番号を順に続けて出力してください。例えば 6 行目の 8
列目にあった場合は、H6 のように出力してください。
制約1≦H, W≦26S_{i,j} は小文字アルファベット（a-z）のみからなる長さ 5
の文字列である。与えられる文字列のうち、ちょうど 1 つだけが snuke
である。入力入力は以下の形式で標準入力から与えられる。H WS_{1,1} S_{1,2} ...
S_{1,W}S_{2,1} S_{2,2} ... S_{2,W}:S_{H,1} S_{H,2} ... S_{H,W}出力snuke
という文字列が書かれているマスの列と行の番号を続けて出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/cf16-final-open/submissions/4240003
// 提出ID : 4240003
// 問題ID : codefestival_2016_final_a
// コンテストID : cf16-final-open
// ユーザID : xryuseix
// コード長 : 778
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

  string s;
  int j, i, h, w;
  cin >> h >> w;
  string snuke[h][w];
  for (i = 0; i < h; i++)
    for (j = 0; j < w; j++)
      cin >> snuke[i][j];
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      if (snuke[i][j] == "snuke") {
        cout << (char)('A' + j) << i + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}
