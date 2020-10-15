/*
問題文の引用元：https://atcoder.jp/contests/abc088/tasks/abc088_a
A - Infinite CoinsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点：100 点
問題文 : E869120 は 1 円硬貨を A 枚と 500
円硬貨を無限枚持っています.これらの硬貨だけを使うことによって, ちょうど N
円を支払うことができるかを判定しなさい.
制約N は 1 以上 10000 以下の整数A は 0 以上 1000
以下の整数入力入力は以下の形式で標準入力から与えられる.  NA出力E869120
の持っている 1 円硬貨と 500 円硬貨だけで, ちょうど N
円を支払うことができるならば Yes, そうでないならば No を出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc088/submissions/4239552
// 提出ID : 4239552
// 問題ID : abc088_a
// コンテストID : abc088
// ユーザID : xryuseix
// コード長 : 530
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
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

  int n, a;
  cin >> n >> a;
  if (n % 500 <= a)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
