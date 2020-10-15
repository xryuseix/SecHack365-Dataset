/*
問題文の引用元：https://atcoder.jp/contests/abc076/tasks/abc076_b
B - Addition and MultiplicationEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点：200 点
問題文 : square1001 は、電光掲示板に整数 1
が表示されているのを見ました。彼は、電光掲示板に対して、以下の操作 A, 操作 B
をすることができます。操作 A：
電光掲示板に表示する整数を「今の電光掲示板の整数を 2
倍にしたもの」に変える。操作 B：
電光掲示板に表示する整数を「今の電光掲示板の整数に K
を足したもの」に変える。square1001 は、操作 A, 操作 B 合計で N 回
行わなければなりません。そのとき、N
回の操作後の、電光掲示板に書かれている整数として考えられる最小の値を求めなさい。
制約1 \leq N, K \leq
10入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。
NK出力square1001 が N
回操作を行った後の、電光掲示板に書かれている整数として考えられる最小値を出力しなさい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc076/submissions/4263633
// 提出ID : 4263633
// 問題ID : abc076_b
// コンテストID : abc076
// ユーザID : xryuseix
// コード長 : 648
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

  int i, n, k, ans = 1;
  cin >> n >> k;
  for (i = 0; i < n; i++) {
    ans = min(ans * 2, ans + k);
  }
  cout << ans << endl;

  return 0;
}
