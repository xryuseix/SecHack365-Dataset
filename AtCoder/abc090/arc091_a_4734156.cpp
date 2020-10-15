/*
問題文の引用元：https://atcoder.jp/contests/abc090/tasks/arc091_a
C - Flip,Flip, and Flip......Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 縦横に無限に広がるマス目があり、そのうちの連続する N 行 M
列の領域のすべてのマスに表裏の区別できるカードが置かれています。最初はすべてのカードが表を向いています。以下の操作を、カードが置かれている全てのマスについて
1 度ずつ行います。そのマスと辺または点で接する 8 つのマスと、そのマスの合計 9
マスについて、カードが存在するなら裏返す。すべての操作を行った後の各カードの状態は操作を行う順番に依らないことが証明できます。すべての操作を行った後、裏を向いているカードの枚数を求めてください。
制約1 \leq N,M \leq
10^9入力は全て整数である入力入力は以下の形式で標準入力から与えられる。N
M出力すべての操作を行った後、裏を向いているカードの枚数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc090/submissions/4734156
// 提出ID : 4734156
// 問題ID : arc091_a
// コンテストID : abc090
// ユーザID : xryuseix
// コード長 : 1047
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
#define INF INT_MAX;
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

  ll n, m;
  cin >> n >> m;
  if (n == m && n == 1)
    cout << 1 << endl;
  else if (n == 1 || m == 1) {
    if (n == 2 || m == 2)
      cout << 0 << endl;
    else
      cout << max(n, m) - 2 << endl;
  } else
    cout << (n - 2) * (m - 2) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
