/*
問題文の引用元：https://atcoder.jp/contests/abc077/tasks/abc077_b
B - Around SquareEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : N
以下の平方数のうち、最大のものを求めてください。ただし、平方数とは、ある整数の 2
乗として表せる整数のことを指します。
制約1 \leq N \leq 10^9N
は整数である入力入力は以下の形式で標準入力から与えられる。N出力N
以下の平方数のうち、最大のものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc077/submissions/4263595
// 提出ID : 4263595
// 問題ID : abc077_b
// コンテストID : abc077
// ユーザID : xryuseix
// コード長 : 677
// 実行時間 : 2



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

  int i, n;
  cin >> n;
  while (1) {
    if (ceil(sqrt(n)) == floor(sqrt(n))) {
      cout << n << endl;
      return 0;
    } else
      n--;
  }

  return 0;
}
