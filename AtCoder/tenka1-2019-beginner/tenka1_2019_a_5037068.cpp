/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_a
A - On the WayEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 数直線上に家 1,2,3 があり、それぞれのある座標は A,B,C です。家 1 から家
2 まで寄り道をせずにまっすぐ向かう途中で家 3 のある座標を通る場合は Yes
を、そうでない場合は No を出力してください。
制約0\leq A,B,C\leq 100A,B,C
は相異なる整数である入力入力は以下の形式で標準入力から与えられる。A B C出力家 1
から家 2 まで寄り道をせずにまっすぐ向かう途中で家 3 のある座標を通る場合は Yes
を、そうでない場合は No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5037068
// 提出ID : 5037068
// 問題ID : tenka1_2019_a
// コンテストID : tenka1-2019-beginner
// ユーザID : xryuseix
// コード長 : 1124
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
  if (b < a)
    swap(a, b);
  if (a <= c && c <= b)
    fin("Yes");
  else
    fin("No");

  //////////////////////////////////////////////////////
  return 0;
}