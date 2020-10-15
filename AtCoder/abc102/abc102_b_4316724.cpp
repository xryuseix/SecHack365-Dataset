/*
問題文の引用元：https://atcoder.jp/contests/abc102/tasks/abc102_b
B - Maximum DifferenceEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 長さ N の整数列 A が与えられます。A の（添字の）異なる 2
要素の差の絶対値の最大値を求めてください。
制約2 \leq N \leq 1001 \leq A_i \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N出力A の（添字の）異なる 2 要素の差の絶対値の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc102/submissions/4316724
// 提出ID : 4316724
// 問題ID : abc102_b
// コンテストID : abc102
// ユーザID : xryuseix
// コード長 : 673
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  cout << a[n - 1] - a[0] << endl;

  return 0;
}
