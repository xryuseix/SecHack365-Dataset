/*
問題文の引用元：https://atcoder.jp/contests/agc025/tasks/agc025_a
A - Digits SumEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は 2 つの正の整数 A と B を持っています。それらの和が N
であると分かっているとき、A の各位の和と B
の各位の和の合計として考えられる最小の値を求めてください。
制約2 ≦ N ≦ 10^5N は整数入力入力は以下の形式で標準入力から与えられる。N出力A
の各位の和と B の各位の和の合計として考えられる最小の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc025/submissions/5562075
// 提出ID : 5562075
// 問題ID : agc025_a
// コンテストID : agc025
// ユーザID : xryuseix
// コード長 : 1364
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
  /*
  int n,i,a,b;
  cin>>n;
  vector<int> a(n,0),b(n,0);
  rep(i,n)cin>>a[i]>>b[i];
  */

  string s;
  int i;
  cin >> s;
  int ans = 0;
  rep(i, s.length()) { ans += s[i] - '0'; }
  if (ans == 1)
    ans = 10;
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
