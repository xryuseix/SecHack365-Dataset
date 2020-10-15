/*
問題文の引用元：https://atcoder.jp/contests/abc105/tasks/abc105_a
A - AtCoder CrackersEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君は N 枚の AtCoder せんべいを K 人の AtCoder
参加者になるべく公平に配ることにしました。N
枚すべてのせんべいを配るとき、せんべいを最も多くもらった人と最も少なくもらった人のもらったせんべいの枚数の差(の絶対値)の最小値を求めてください。
制約1 \leq N,K \leq
100入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。N
K出力せんべいを最も多くもらった人と最も少なくもらった人のもらったせんべいの枚数の差(の絶対値)の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc105/submissions/4239759
// 提出ID : 4239759
// 問題ID : abc105_a
// コンテストID : abc105
// ユーザID : xryuseix
// コード長 : 515
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

  int n, k;
  cin >> n >> k;
  if (n % k == 0)
    cout << 0 << endl;
  else
    cout << 1 << endl;

  return 0;
}