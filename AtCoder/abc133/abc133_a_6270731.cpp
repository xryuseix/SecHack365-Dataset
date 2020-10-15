/*
問題文の引用元：https://atcoder.jp/contests/abc133/tasks/abc133_a
A - T or TEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 私たちは N
人で旅行しようとしており、その交通手段として電車とタクシーがあります。電車を使うと
1 人あたり A 円かかります。タクシーを使うと N 人で B
円かかります。全員の交通費の合計は最小でいくらになるでしょうか。
制約入力は全て整数である。1 \leq N \leq 201 \leq A \leq 501 \leq B \leq
50入力入力は以下の形式で標準入力から与えられる。N A
B出力最小の合計交通費を表す整数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc133/submissions/6270731
// 提出ID : 6270731
// 問題ID : abc133_a
// コンテストID : abc133
// ユーザID : xryuseix
// コード長 : 1521
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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int a, b, c;
  cin >> a >> b >> c;
  cout << min(a * b, c) << endl;

  //////////////////////////////////////////////////////
  return 0;
}