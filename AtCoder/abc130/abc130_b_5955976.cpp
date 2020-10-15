/*
問題文の引用元：https://atcoder.jp/contests/abc130/tasks/abc130_b
B - BoundingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 数直線上を N + 1 回跳ねるボールがあり、1 回目は 座標 D_1 = 0,  i 回目は
座標 D_i = D_{i-1} + L_{i-1} (2 \leq i \leq N+1) で跳ねます。数直線の座標が X
以下の領域でボールが跳ねる回数は何回でしょうか。
制約1 \leq N \leq 1001 \leq L_i \leq 1001 \leq X \leq
10000入力は全て整数である入力入力は以下の形式で標準入力から与えられる。N XL_1
L_2 ... L_{N-1} L_N出力数直線の座標が X
以下の領域でボールが跳ねる回数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc130/submissions/5955976
// 提出ID : 5955976
// 問題ID : abc130_b
// コンテストID : abc130
// ユーザID : xryuseix
// コード長 : 1433
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
  int n, x, i;
  cin >> n >> x;
  int l[n];
  rep(i, n) cin >> l[i];
  int ans = 1, place = 0;
  rep(i, n) {
    place += l[i];
    if (x >= place)
      ans++;
  }
  fin(ans);
  //////////////////////////////////////////////////////
  return 0;
}
