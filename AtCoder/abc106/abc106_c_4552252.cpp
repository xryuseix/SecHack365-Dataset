/*
問題文の引用元：https://atcoder.jp/contests/abc106/tasks/abc106_c
C - To InfinityEditorial
Time Limit : 2 sec / Memory Limit : 976 MB﻿
配点: 300 点
問題文 : Mr. Infinity は, 1 から 9 までの数字からなる文字列 S を持っている.
この文字列は, 日付が変わるたびに次のように変化する.文字列 S に含まれるそれぞれの
2 が 22, 3 が 333, 4 が 4444, 5 が 55555, 6 が 666666, 7 が 7777777, 8 が
88888888, 9 が 999999999 に置き換わる. 1 は 1 のまま残る.例えば, S が 1324
の場合, 翌日には 1333224444 になり, 翌々日には 133333333322224444444444444444
になる.あなたは 5000 兆日後に文字列がどのようになっているか知りたい. 5000
兆日後の文字列の左から K 文字目は何か？
制約S は 1 文字以上 100 文字以下の文字列.K は 1 以上 10^{18} 以下の整数.5000
兆日後の文字列の長さは K
文字以上である.入力入力は以下の形式で標準入力から与えられる.  SK出力5000
兆日後に Mr. Infinity が持っている文字列の K 文字目の数字を出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc106/submissions/4552252
// 提出ID : 4552252
// 問題ID : abc106_c
// コンテストID : abc106
// ユーザID : xryuseix
// コード長 : 986
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  string s;
  ll i, k;
  cin >> s >> k;
  for (i = 0; i < min((ll)s.size(), k); i++) {
    if (s[i] >= '2') {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << 1 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
