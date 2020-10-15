/*
問題文の引用元：https://atcoder.jp/contests/abc105/tasks/abc105_b
B - Cakes and DonutsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点: 200 点
問題文 : ABC 洋菓子店では, 1 個 4 ドルのケーキと 1 個 7
ドルのドーナツが売られている.このとき, 合計金額が N ドルとなる買い方はあるか,
判定せよ. ただし, 同じ商品を二個以上買っても良く,
買わない商品があっても良いものとする.
制約N は 1 以上 100 以下の整数入力入力は以下の形式で標準入力から与えられる.
N出力合計が N ドルとなる買い方がある場合 Yes, そうでない場合 No と出力せよ.
// ソースコードの引用元 : https://atcoder.jp/contests/abc105/submissions/4316774
// 提出ID : 4316774
// 問題ID : abc105_b
// コンテストID : abc105
// ユーザID : xryuseix
// コード長 : 744
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

  int i, j, n, a, b;
  cin >> n;
  for (i = 0; i < 15; i++) {
    for (j = 0; j * 4 < 26; j++) {
      if (i * 7 + j * 4 == n) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}