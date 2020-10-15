/*
問題文の引用元：https://atcoder.jp/contests/abc081/tasks/abc081_a
A - Placing MarblesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すぬけ君は 1,2,3 の番号がついた 3
つのマスからなるマス目を持っています。各マスには 0 か 1 が書かれており、マス i
には s_i が書かれています。すぬけ君は 1
が書かれたマスにビー玉を置きます。ビー玉が置かれるマスがいくつあるか求めてください。
制約s_1, s_2, s_3 は 1 あるいは
0入力入力は以下の形式で標準入力から与えられる。s_{1}s_{2}s_{3}出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc081/submissions/5796063
// 提出ID : 5796063
// 問題ID : abc081_a
// コンテストID : abc081
// ユーザID : xryuseix
// コード長 : 1226
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
  string s;
  cin >> s;
  cout << count(s.cbegin(), s.cend(), '1') << endl;

  //////////////////////////////////////////////////////
  return 0;
}
