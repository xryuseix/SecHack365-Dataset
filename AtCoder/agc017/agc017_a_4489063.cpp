/*
問題文の引用元：https://atcoder.jp/contests/agc017/tasks/agc017_a
A - BiscuitsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : いくつかのビスケットの入った袋が N 個あります．i 番目の袋には A_i
個のビスケットが入っています．高木君は，このうちいくつかの袋を選んで，選んだ袋に入っているビスケットをすべて食べるということを行います．このとき，袋を一つも選ばなかったり，すべての袋を選んだりしてもかまいません．高木君は，食べるビスケットの枚数を
2 で割ると余りが P
に等しくなるようにしたいです．このような袋の選び方は何通りあるか求めてください．
制約1 \leq N \leq 50P = 0, 11 \leq A_i \leq
100入力入力は以下の形式で標準入力から与えられる。N PA_1 A_2 ...
A_N出力高木君が食べるビスケットの枚数を 2 で割ると P
に等しくなるような，袋の選び方は何通りあるかを出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/agc017/submissions/4489063
// 提出ID : 4489063
// 問題ID : agc017_a
// コンテストID : agc017
// ユーザID : xryuseix
// コード長 : 833
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

  int i, n, p, sum, ans = 0;
  cin >> n >> p;
  int a[n], j;
  bool even = true;
  for (i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2 == 1)
      even = false;
  }
  if (even) {
    if (p == 0)
      cout << (ll)pow(2, n) << endl;
    else
      cout << 0 << endl;
  } else
    cout << (ll)pow(2, n - 1) << endl;

  return 0;
}
