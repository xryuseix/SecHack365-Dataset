/*
問題文の引用元：https://atcoder.jp/contests/agc008/tasks/agc008_a
A - Simple CalculatorEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : すぬけ君は電卓を持っています。この電卓にはディスプレイと 2
個のボタンが付いています。最初、ディスプレイの値は整数 x
です。すぬけ君の目標は、ディスプレイの値を整数 y
にすることです。そのために、すぬけ君は次の 2
個のボタンを好きな順番で何回か押すことができます。ボタン A : ディスプレイの値を
1 増やす。ボタン B :
ディスプレイの値の符号を反転する。目標を達成するためにすぬけ君がボタンを押す回数の最小値を求めてください。なお、整数
x, y の値によらず、必ず目標を達成できることが示せます。
制約x, y は整数である。|x|, |y| ≤ 10^9x, y
は相異なる。入力入力は以下の形式で標準入力から与えられる。x
y出力目標を達成するためにすぬけ君がボタンを押す回数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc008/submissions/4433068
// 提出ID : 4433068
// 問題ID : agc008_a
// コンテストID : agc008
// ユーザID : xryuseix
// コード長 : 814
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

  int a, b, t = 0;
  cin >> a >> b;
  int ans[4];
  ans[0] = ans[1] = ans[2] = ans[3] = 1000000001;
  if (b - a >= 0)
    ans[0] = b - a;
  if (-b + a >= 0)
    ans[1] = -b + a + 2;
  if (b + a >= 0)
    ans[2] = b + a + 1;
  if (-b - a >= 0)
    ans[3] = -b - a + 1;
  cout << min(min(ans[0], ans[1]), min(ans[2], ans[3]));

  return 0;
}
