/*
問題文の引用元：https://atcoder.jp/contests/abc034/tasks/abc034_b
B - ペアEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 10^9 人の人がいます。人には 1 から 10^9 までの番号がついています。1
番と 2 番の人、3 番と 4 番の人、5 番と 6 番の人、…　がペアになりました。n
番の人とペアになった人の番号を求めてください。入力入力は以下の形式で標準入力から与えられる。n1
≤ n ≤ 10^9 をみたす。出力n
番の人とペアになった人の番号を出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc034/submissions/4323204
// 提出ID : 4323204
// 問題ID : abc034_b
// コンテストID : abc034
// ユーザID : xryuseix
// コード長 : 673
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << n - 1 << endl;
  else
    cout << n + 1 << endl;

  return 0;
}
