/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-final/tasks/nikkei2019_final_a
A - Abundant ResourcesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 東西に細長い土地があります。この土地は、N
個の区画が東西に並んだ形をしており、西から i 番目の区画は区画 i
と呼ばれます。それぞれの区画には地下資源があることがわかっており、区画 i
の資源埋蔵量は A_i です。1 以上 N 以下のそれぞれの整数 k
について、次の問題の答えを求めてください。連続する k
個の区画を選んだとき、それらの区画の資源埋蔵量の総和として考えられる最大値はいくらか。
制約1 \leq N \leq 30001 \leq A_i \leq
10^9入力される値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 \cdots A_N出力N 行出力せよ。k 行目には、連続する k
個の区画の資源埋蔵量の総和の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-final/submissions/4475637
// 提出ID : 4475637
// 問題ID : nikkei2019_final_a
// コンテストID : nikkei2019-final
// ユーザID : xryuseix
// コード長 : 866
// 実行時間 : 13



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
#include <stack>
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

  int k, i, f, l, n;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  for (k = 1; k <= n; k++) {
    ll max = 0, inisum = 0;
    for (i = 0; i < k; i++)
      inisum += a[i];
    l = k - 1;
    for (f = 0; l < n; f++) {
      if (inisum > max)
        max = inisum;
      l++;
      inisum -= a[f];
      inisum += a[l];
    }
    cout << max << endl;
  }

  return 0;
}
