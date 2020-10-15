/*
問題文の引用元：https://atcoder.jp/contests/abc062/tasks/abc062_b
B - Picture FrameEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 縦 H ピクセル、横 W
ピクセルの画像があります。各ピクセルは英小文字で表されます。上から i
番目、左から j 番目のピクセルは a_{ij} です。この画像の周囲 1 ピクセルを #
で囲んだものを出力してください。
制約1 ≤ H, W ≤ 100a_{ij}
は英小文字である。入力入力は以下の形式で標準入力から与えられる。H Wa_{11} ...
a_{1W}:a_{H1} ... a_{HW}出力画像の周囲 1 ピクセルを # で囲んだものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc062/submissions/4276588
// 提出ID : 4276588
// 問題ID : abc062_b
// コンテストID : abc062
// ユーザID : xryuseix
// コード長 : 816
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

  int m, n;
  string s;
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    cin >> s;
    if (i == 0) {
      for (int j = 0; j < s.length() + 2; j++)
        cout << '#';
      cout << endl;
    }
    cout << '#' << s << '#' << endl;
    if (i == m - 1) {
      for (int j = 0; j < s.length() + 2; j++)
        cout << '#';
      cout << endl;
    }
  }

  return 0;
}