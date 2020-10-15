/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_c
C - StonesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N
個の石が一列に並んでおり、すべての石は白か黒で塗られています。石の状態は長さ N
の文字列 S で表され、S の i 文字目が  . のとき左から i 個目の石が白であり、#
のとき左から i 個目の石が黒であることを表します。高橋君は、0
個以上の石の色を黒または白に変更し、黒い石のすぐ右に白い石があるような箇所がないようにしたいです。色を変更する必要のある石の個数の最小値を求めてください。
制約1 \leq N \leq 2\times 10^5S は ., # のみからなる長さ N
の文字列である入力入力は以下の形式で標準入力から与えられる。NS出力色を変更する必要のある石の個数の最小値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5044188
// 提出ID : 5044188
// 問題ID : tenka1_2019_c
// コンテストID : tenka1-2019-beginner
// ユーザID : xryuseix
// コード長 : 1312
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
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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

  int i, ans = INF, n;
  string s;
  cin >> n >> s;
  int w = 0, b = 0;
  int le[2] = {0}, ri[2] = {0};
  rep(i, n) {
    if (s[i] == '.')
      w++;
    else
      b++;
  }
  ans = min(w, b);
  rep(i, n - 1) {
    if (s[i] == '.') {
      le[0]++;
    } else {
      le[1]++;
    }
    ri[0] = w - le[0];
    ri[1] = b - le[1];
    ans = min(ans, le[1] + ri[0]);
  }
  fin(ans);
  //////////////////////////////////////////////////////
  return 0;
}
