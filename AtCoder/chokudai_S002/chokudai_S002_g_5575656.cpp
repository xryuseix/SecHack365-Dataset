/*
問題文の引用元：https://atcoder.jp/contests/chokudai_S002/tasks/chokudai_S002_g
G - GCD αEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 個の以下の問題を解いてください。整数 A_i と整数 B_i
の最大公約数を求めよ。
制約入力は以下の条件を満たす。1 \leq N \leq 2 \times 10^51 \leq A_i,B_i \leq
10^9入力される値は全て整数入力入力は以下の形式で標準入力から与えられる。NA_1
B_1A_2 B_2:A_N B_N出力i\ (1 \leq i \leq N) 行目に A_i と B_i
の最大公約数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/chokudai_S002/submissions/5575656
// 提出ID : 5575656
// 問題ID : chokudai_S002_g
// コンテストID : chokudai_S002
// ユーザID : xryuseix
// コード長 : 1350
// 実行時間 : 349



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

int gcd(ll x, ll y) {
  ll t;
  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, i;
  cin >> n;
  vector<ll> a(n, 0), b(n, 0);
  rep(i, n) cin >> a[i] >> b[i];

  rep(i, n) { cout << gcd(a[i], b[i]) << endl; }

  //////////////////////////////////////////////////////
  return 0;
}
