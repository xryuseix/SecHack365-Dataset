/*
問題文の引用元：https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_a
A - 一問目Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 :   文字列 S が与えられます。S の頭文字を出力してください。
制約     1 \leq |S| \leq 100   S は半角英数字からなる文字列
入力  文字列 S が 1 行に与えられます。   S                出力
Sの頭文字を出力してください。最後に改行を入れてください。
// ソースコードの引用元 :
https://atcoder.jp/contests/iroha2019-day1/submissions/5202235
// 提出ID : 5202235
// 問題ID : iroha2019_day1_a
// コンテストID : iroha2019-day1
// ユーザID : xryuseix
// コード長 : 1062
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
  cin >> s;
  cout << s[0] << endl;

  //////////////////////////////////////////////////////
  return 0;
}
