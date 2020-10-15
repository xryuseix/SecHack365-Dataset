/*
問題文の引用元：https://atcoder.jp/contests/abc106/tasks/abc106_b
B - 105Editorial
Time Limit : 2 sec / Memory Limit : 976 MB﻿
配点: 200 点
問題文 : 105 という数は, 非常に特殊な性質を持つ - 奇数なのに, 約数が 8
個もある.さて, 1 以上 N 以下の奇数のうち, 正の約数を ちょうど 8
個持つようなものの個数を求めよ.
制約N は 1 以上 200 以下の整数入力入力は以下の形式で標準入力から与えられる.
N出力条件を満たす数の個数を出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc106/submissions/4317007
// 提出ID : 4317007
// 問題ID : abc106_b
// コンテストID : abc106
// ユーザID : xryuseix
// コード長 : 757
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
  if (n < 105)
    cout << 0 << endl;
  else if (n < 135)
    cout << 1 << endl;
  else if (n < 165)
    cout << 2 << endl;
  else if (n < 189)
    cout << 3 << endl;
  else if (n < 195)
    cout << 4 << endl;
  else
    cout << 5 << endl;

  return 0;
}