/*
問題文の引用元：https://atcoder.jp/contests/agc015/tasks/agc015_a
A - A+...+B ProblemEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけ君は、整数を N 個持っています。このうち最小のものは
A、最大のものは B
です。すぬけ君が持っている整数の総和としてありうる値は何通りあるでしょうか。
制約1 ≦ N,A,B ≦ 10^9A,B
は整数である入力入力は以下の形式で標準入力から与えられる。N A
B出力総和としてありうる値の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc015/submissions/4324666
// 提出ID : 4324666
// 問題ID : agc015_a
// コンテストID : agc015
// ユーザID : xryuseix
// コード長 : 783
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

  ll n, a, b, max, min;
  cin >> n >> a >> b;
  if (a > b) {
    cout << 0 << endl;
    return 0;
  }
  max = a + b * (n - 1);
  min = a * (n - 1) + b;
  if (max - min + 1 < 0) {
    cout << 0 << endl;
    return 0;
  }
  cout << max - min + 1 << endl;

  return 0;
}
