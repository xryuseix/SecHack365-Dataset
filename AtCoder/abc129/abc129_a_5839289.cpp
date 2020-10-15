/*
問題文の引用元：https://atcoder.jp/contests/abc129/tasks/abc129_a
A - AirplaneEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 空港 A, B, C
があり、それぞれの空港の間では、双方向に飛行機が運航しています。空港 A, B
間の飛行時間は片道 P 時間、空港 B, C 間の飛行時間は片道 Q 時間、空港 C, A
間の飛行時間は片道 R
時間です。いずれかの空港からスタートして他の空港に飛行機で移動し、さらにそのどちらでもない空港に飛行機で移動するような経路を考えます。飛行時間の和は最短で何時間になるでしょうか。
制約1 \leq P,Q,R \leq
100入力は全て整数である入力入力は以下の形式で標準入力から与えられる。P Q
R出力飛行時間の和の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc129/submissions/5839289
// 提出ID : 5839289
// 問題ID : abc129_a
// コンテストID : abc129
// ユーザID : xryuseix
// コード長 : 1273
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
  int p, q, r;
  cin >> p >> q >> r;
  cout << min(min(p + q, p + r), q + r) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
