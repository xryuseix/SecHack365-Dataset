/*
問題文の引用元：https://atcoder.jp/contests/abc128/tasks/abc128_a
A - Apple PieEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 林檎が A 個、林檎の欠片が P 個あります。林檎 1
個は、砕くことで林檎の欠片 3 個になります。また、林檎の欠片 2
個を鍋で煮込むことで、アップルパイが 1
個作れます。今ある材料で作れるアップルパイの最大数を求めてください。
制約入力は全て整数である。0 \leq A, P \leq
100入力入力は以下の形式で標準入力から与えられる。A
P出力今ある材料で作れるアップルパイの最大数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc128/submissions/5638881
// 提出ID : 5638881
// 問題ID : abc128_a
// コンテストID : abc128
// ユーザID : xryuseix
// コード長 : 1197
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

  int a, p;
  cin >> a >> p;
  cout << (a * 3 + p) / 2 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
