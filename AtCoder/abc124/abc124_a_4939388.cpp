/*
問題文の引用元：https://atcoder.jp/contests/abc124/tasks/abc124_a
A - ButtonsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 2 個のボタンがあり、大きさはそれぞれ A, B です。大きさ X
のボタンを押すと、X 枚のコインを獲得し、そのボタンの大きさが 1
小さくなります。あなたは、いずれかのボタンを押すことを 2
回行います。同じボタンを 2
回押しても構いません。最大で何枚のコインを獲得できるでしょうか。
制約入力は全て整数である。3 \leq A, B \leq
20入力入力は以下の形式で標準入力から与えられる。A
B出力獲得できるコインの枚数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc124/submissions/4939388
// 提出ID : 4939388
// 問題ID : abc124_a
// コンテストID : abc124
// ユーザID : xryuseix
// コード長 : 997
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

  int a, b;
  cin >> a >> b;
  int ans = 0;
  ans += max(a, b);
  if (a > b)
    a--;
  else
    b--;
  ans += max(a, b);
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
