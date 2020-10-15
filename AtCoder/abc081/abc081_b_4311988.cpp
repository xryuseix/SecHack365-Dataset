/*
問題文の引用元：https://atcoder.jp/contests/abc081/tasks/abc081_b
B - Shift onlyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 黒板に N 個の正の整数 A_1, ..., A_N
が書かれています．すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．黒板に書かれている整数すべてを，2
で割ったものに置き換える．すぬけ君は最大で何回操作を行うことができるかを求めてください．
制約1 \leq N \leq 2001 \leq A_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力すぬけ君は最大で何回操作を行うことができるかを出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/abc081/submissions/4311988
// 提出ID : 4311988
// 問題ID : abc081_b
// コンテストID : abc081
// ユーザID : xryuseix
// コード長 : 750
// 実行時間 : 1



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, n, ans = 0;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  while (1) {
    for (i = 0; i < n; i++) {
      if (a[i] % 2 == 0)
        a[i] /= 2;
      else {
        cout << ans << endl;
        return 0;
      }
    }
    ans++;
  }

  return 0;
}
