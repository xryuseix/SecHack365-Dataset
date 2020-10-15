/*
問題文の引用元：https://atcoder.jp/contests/abc026/tasks/abc026_a
A - 掛け算の最大値Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 正の偶数 A が与えられる。x + y = A となる正の整数 x, y のうち、 x×y
が最大となるものを選び、その値を出力しなさい。入力入力は以下の形式で標準入力から与えられる。A1
行目には、正の偶数 A (2≦A≦100) が与えられる。出力x × y の最大値を出力しなさい。
出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc026/submissions/4320074
// 提出ID : 4320074
// 問題ID : abc026_a
// コンテストID : abc026
// ユーザID : xryuseix
// コード長 : 664
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

  int a;
  cin >> a;
  cout << a *a / 4 << endl;

  return 0;
}
