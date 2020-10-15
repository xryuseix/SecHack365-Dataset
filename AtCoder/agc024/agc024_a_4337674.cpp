/*
問題文の引用元：https://atcoder.jp/contests/agc024/tasks/agc024_a
A - FairnessEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 高橋君、中橋君、低橋君は、それぞれ整数 A,B,C
を持っています。以下の操作を K
回行った後、高橋君の持っている整数から中橋君の持っている整数を引いた値を求めてください。3
人は同時に、他の 2
人の持っている整数の和を求める。その後、自分の持っている整数を求めた整数で置き換える。ただし、答えの絶対値が
10^{18} を超える場合は、代わりに Unfair と出力してください。
制約1 \leq A,B,C \leq 10^90 \leq K \leq
10^{18}入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A B C
K出力操作を K
回行った後の、高橋君の持っている整数から中橋君の持っている整数を引いた値を出力せよ。ただし、答えの絶対値が
10^{18} を超える場合は、代わりに Unfair と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc024/submissions/4337674
// 提出ID : 4337674
// 問題ID : agc024_a
// コンテストID : agc024
// ユーザID : xryuseix
// コード長 : 676
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

  ll i, a, b, c, k;
  cin >> a >> b >> c >> k;
  if (k % 2 == 0)
    cout << (a - b);
  else
    cout << (a - b) * (-1);

  return 0;
}