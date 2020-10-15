/*
問題文の引用元：https://atcoder.jp/contests/abc125/tasks/abc125_d
D - Flipping SignsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 個の整数が並んでおり、順に A_1, A_2, ..., A_N
です。あなたはこの整数列に対して次の操作を好きなだけ行うことができます。操作: 1
\leq i \leq N-1 を満たす整数 i を選ぶ。A_i と A_{i+1} に -1
を乗算する。操作終了後の整数列を B_1, B_2, ..., B_N とします。B_1 + B_2 + ... +
B_N の最大値を求めてください。
制約入力は全て整数である。2 \leq N \leq 10^5-10^9 \leq A_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ... A_N出力B_1 + B_2
+ ... + B_N の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc125/submissions/5150192
// 提出ID : 5150192
// 問題ID : abc125_d
// コンテストID : abc125
// ユーザID : xryuseix
// コード長 : 1297
// 実行時間 : 12



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

  ll i, n;
  ll m = LLINF;
  ll sum = 0;
  cin >> n;
  vector<ll> v(n, 0);
  int minus = 0;
  rep(i, n) {
    cin >> v[i];
    if (v[i] < 0)
      minus++;
    if (m > abs(v[i]))
      m = abs(v[i]);
    sum += abs(v[i]);
  }
  if (minus % 2 == 0) {
    cout << sum << endl;
  } else
    cout << sum - 2 * m << endl;

  //	cout<<sum<<" "<<m<<endl;

  //////////////////////////////////////////////////////
  return 0;
}
