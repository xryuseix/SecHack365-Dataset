/*
問題文の引用元：https://atcoder.jp/contests/abc107/tasks/arc101_a
C - CandlesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 数直線上に N 本のろうそくが置かれています。左から i
番目のろうそくは座標 x_i に置かれています。ただし、x_1 < x_2 < ... < x_N
が成り立ちます。最初、どのろうそくにも火が付いていません。すぬけ君は、N 本のうち
K 本のろうそくに火を付けることにしました。今、すぬけ君は座標 0
にいます。すぬけ君は、数直線上を左右に速度 1
で移動することができます。また、自分と同じ座標のろうそくに火を付けることができます。このとき、火を付けるのに掛かる時間は無視できます。K
本のろうそくに火を付けるのに必要な最小の時間を求めてください。
制約1 \leq N \leq 10^51 \leq K \leq Nx_i は整数である。|x_i| \leq 10^8x_1 < x_2
< ... < x_N入力入力は以下の形式で標準入力から与えられる。N Kx_1 x_2 ... x_N出力K
本のろうそくに火を付けるのに必要な最小の時間を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc107/submissions/4434553
// 提出ID : 4434553
// 問題ID : arc101_a
// コンテストID : abc107
// ユーザID : xryuseix
// コード長 : 872
// 実行時間 : 12



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
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
const long long INF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k, i, f, l, ans = 1000000000;
  cin >> n >> k;
  int x[n];
  for (i = 0; i < n; i++)
    cin >> x[i];
  for (f = 0; f < n - k + 1; f++) {
    l = f + k - 1;
    int len = min(abs(x[f]), abs(x[l])) + abs(x[f] - x[l]);
    if (ans > len)
      ans = len;
    //		cout<<x[f]<<" "<<x[l]<<" "<<abs(x[f]-x[l])<<" "<<len<<endl;
  }
  cout << ans << endl;

  return 0;
}
