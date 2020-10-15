/*
問題文の引用元：https://atcoder.jp/contests/abc112/tasks/abc112_c
C - PyramidEditorial
Time Limit : 3 sec / Memory Limit : 1024 MB﻿
配点: 300 点
問題文 : 古代すぬけ国では, AtCoder 社長「高橋君」の権威を高めるために,
ピラミッドが建てられていた.ピラミッドには 中心座標 (C_X, C_Y) と 高さ H
が定まっており, 座標 (X, Y) の高度は max(H - |X - C_X| - |Y - C_Y|, 0) であった.
探検家の青木君は, このピラミッドの中心座標と高さを求めるために調査を行った.
その結果, 次のような情報が得られた.  C_X, C_Y は 0 以上 100 以下の整数で, H は 1
以上の整数であった.上記と別に N 個の情報が得られた. そのうち i 個目の情報は,
「座標 (x_i, y_i) の高度は h_i である」この情報は,
ピラミッドの中心座標と高さを特定するのに十分であった. 情報を手掛かりに,
これらの値を求めなさい.
制約N は 1 以上 100 以下の整数x_i, y_i は 0 以上 100 以下の整数h_i は 0 以上
10^9 以下の整数N 個の座標 (x_1, y_1), (x_2, y_2), (x_3, y_3), ..., (x_N, y_N)
はすべて異なるピラミッドの中心座標と高さをちょうど 1
つに特定することができる入力入力は以下の形式で標準入力から与えられる.  Nx_1 y_1
h_1x_2 y_2 h_2x_3 y_3 h_3:x_N y_N h_N出力特定した中心座標と高さを表す整数 C_X,
C_Y, H を空白区切りで, 1 行に出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc112/submissions/5550908
// 提出ID : 5550908
// 問題ID : abc112_c
// コンテストID : abc112
// ユーザID : xryuseix
// コード長 : 1712
// 実行時間 : 4



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
#include <bitset>
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
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

  int n, i, j, x, y, h = 0, k, yn, hn;
  cin >> n;
  int a[n + 1][3];
  rep(i, n) { cin >> a[i + 1][0] >> a[i + 1][1] >> a[i + 1][2]; }

  for (i = 0; i <= 100; i++) { // y
    for (j = 0; j <= 100; j++) { // x

      int hmax = (1 << 30) + (1 << 29);
      int hmin = -1;
      for (k = 1; k <= n; k++) {
        int hn = abs(a[k][0] - j) + abs(a[k][1] - i);
        if (a[k][2] == 0) {
          hmax = min(hmax, hn);
        } else {
          hmin = max(hmin, a[k][2] + hn);
          hmax = min(hmax, a[k][2] + hn);
        }
        //				cout<<hn<<" "<<hmin<<" "<<hmax<<endl;
      }

      if (hmax == hmin) {
        cout << j << " " << i << " " << hmin << endl;
        return 0;
      }
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
