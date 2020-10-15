/*
問題文の引用元：https://atcoder.jp/contests/diverta2019-2/tasks/diverta2019_2_a
A - Ball DistributionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君は N 個のボールを K
人に配ろうとしています。それぞれの人がボールを 1
個以上受け取るような配り方の中で、ボールが最も多い人と最も少ない人のボールの個数の差が最大で何個になるか求めてください。
制約1 \leq K \leq N \leq
100入力は全て整数である入力入力は以下の形式で標準入力から与えられる。N
K出力ボールの個数の差としてあり得る最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/diverta2019-2/submissions/5919636
// 提出ID : 5919636
// 問題ID : diverta2019_2_a
// コンテストID : diverta2019-2
// ユーザID : xryuseix
// コード長 : 1348
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
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, k;
  cin >> n >> k;
  if (k != 1)
    cout << n - k << endl;
  else
    cout << 0 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
