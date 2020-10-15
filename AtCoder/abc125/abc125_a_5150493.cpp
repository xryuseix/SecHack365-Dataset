/*
問題文の引用元：https://atcoder.jp/contests/abc125/tasks/abc125_a
A - Biscuit GeneratorEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : ビスケット生産装置を起動すると、起動してから A 秒後、2A 秒後、3A
秒後、... (A の倍数秒後) に B
枚ずつビスケットを生産します。ビスケット生産装置を起動してから T + 0.5
秒後までに生産されるビスケットの合計枚数を求めてください。
制約入力は全て整数である。1 \leq A, B, T \leq
20入力入力は以下の形式で標準入力から与えられる。A B
T出力ビスケット生産装置を起動してから T + 0.5
秒後までに生産されるビスケットの合計枚数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc125/submissions/5150493
// 提出ID : 5150493
// 問題ID : abc125_a
// コンテストID : abc125
// ユーザID : xryuseix
// コード長 : 1058
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

  int a, b, c;
  cin >> a >> b >> c;
  cout << c / a *b << endl;

  //////////////////////////////////////////////////////
  return 0;
}
