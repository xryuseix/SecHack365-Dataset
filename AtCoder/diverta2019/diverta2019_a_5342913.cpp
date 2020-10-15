/*
問題文の引用元：https://atcoder.jp/contests/diverta2019/tasks/diverta2019_a
A - Consecutive IntegersEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : すぬけ君は 1,2,\ldots,N の N
個の整数を持っています。すぬけ君はこれらの整数から K
個の整数を選んで高橋君にあげようと考えています。連続する K
個の整数を選ぶ方法は何通りありますか？
制約入力は全て整数1 \leq K \leq N \leq
50入力入力は以下の形式で標準入力から与えられる。N K出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/diverta2019/submissions/5342913
// 提出ID : 5342913
// 問題ID : diverta2019_a
// コンテストID : diverta2019
// ユーザID : xryuseix
// コード長 : 1096
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

  int a, b;
  cin >> a >> b;
  cout << a - (b - 1) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
