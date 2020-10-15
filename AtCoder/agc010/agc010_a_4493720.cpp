/*
問題文の引用元：https://atcoder.jp/contests/agc010/tasks/agc010_a
A - AdditionEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 黒板に N 個の整数が書かれています。i 番目の整数は A_i
です。これらの数に対して、高橋君は以下の操作を繰り返します。偶奇が等しい 2
つの数 A_i,A_j を一組選び、それらを黒板から消す。その後、二つの数の和 A_i+A_j
を黒板に書く。最終的に黒板に数が 1
つだけ残るようにできるかどうか判定して下さい。
制約2 ≦ N ≦ 10^51 ≦ A_i ≦ 10^9A_i
は整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 … A_N出力黒板に数 1
つだけ残るようにできるなら YES を、そうでないなら NO を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc010/submissions/4493720
// 提出ID : 4493720
// 問題ID : agc010_a
// コンテストID : agc010
// ユーザID : xryuseix
// コード長 : 824
// 実行時間 : 55



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

  int a, o = 0, e = 0, i, n;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    if (a % 2 == 0)
      e++;
    else
      o++;
  }
  if (o % 2 != 0)
    cout << "NO" << endl;
  else if (e == 0 && o % 2 == 0)
    cout << "YES" << endl;
  else if (e >= 1 && o >= 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
