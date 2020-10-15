/*
問題文の引用元：https://atcoder.jp/contests/abc129/tasks/abc129_b
B - BalanceEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 1 から N の番号がついた N 個の重りがあり、番号 i の重りの重さは W_i
です。ある整数 1 \leq T < N に対してこれらの重りを、番号が T 以下の重り と
番号が T より大きい重りの 2
グループに分けることを考え、それぞれのグループの重さの和を S_1, S_2
とします。このような分け方全てを考えた時、S_1 と S_2
の差の絶対値の最小値を求めてください。
制約2 \leq N \leq 1001 \leq W_i \leq
100入力は全て整数である入力入力は以下の形式で標準入力から与えられる。NW_1 W_2
... W_{N-1} W_N出力S_1 と S_2 の差の絶対値の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc129/submissions/5838319
// 提出ID : 5838319
// 問題ID : abc129_b
// コンテストID : abc129
// ユーザID : xryuseix
// コード長 : 1477
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
  int n, i;
  cin >> n;
  vector<int> w(n, 0);
  rep(i, n) cin >> w[i];
  int ans = INF;
  for (i = 0; i < n; i++) {
    int s1 = 0, s2 = 0;
    int j;
    rep(j, i + 1) s1 += w[j];
    for (j = i + 1; j < n; j++)
      s2 += w[j];
    ans = min(ans, abs(s1 - s2));
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
