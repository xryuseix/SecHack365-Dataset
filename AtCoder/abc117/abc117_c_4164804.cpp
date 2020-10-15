/*
問題文の引用元：https://atcoder.jp/contests/abc117/tasks/abc117_c
C - StreamlineEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 数直線と N 個のコマを用いて 1
人でゲームを行います。はじめ、これらのコマをそれぞれ好きな整数座標に置きます。このとき、同じ座標に複数のコマを置いても構いません。以下の移動を繰り返して、座標
X_1, X_2, ..., X_M の M
個の地点全てをいずれかのコマで訪れることが目的です。移動: コマを 1
つ選び、そのコマの座標を x とする。そのコマを座標 x+1 もしくは座標 x-1
に移動する。ただし、最初にコマを置いた座標はその時点で訪れたとみなします。目的を達成するまでに移動を行う回数の最小値を求めてください。
制約入力はすべて整数である。1 \leq N \leq 10^51 \leq M \leq 10^5-10^5 \leq X_i
\leq 10^5X_1, X_2, ..., X_M
は全て異なる。入力入力は以下の形式で標準入力から与えられる。N MX_1 X_2 ...
X_M出力目的を達成するまでに移動を行う回数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc117/submissions/4164804
// 提出ID : 4164804
// 問題ID : abc117_c
// コンテストID : abc117
// ユーザID : xryuseix
// コード長 : 437
// 実行時間 : 18



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, m, n, ans = 0;
  cin >> n >> m;
  int x[m];
  for (i = 0; i < m; i++)
    cin >> x[i];
  sort(x, x + m);
  int diff[m - 1];
  for (i = 0; i < m - 1; i++)
    diff[i] = x[i + 1] - x[i];
  sort(diff, diff + m - 1);
  for (i = 0; i < m - n; i++)
    ans += diff[i];
  cout << ans << endl;

  return 0;
}
