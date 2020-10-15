/*
問題文の引用元：https://atcoder.jp/contests/abc012/tasks/abc012_1
A - スワップEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : A, B の 2 つの整数が与えられます。A と B の数値を入れ替えた後、A, B
を出力しなさい。入力入力は以下の形式で標準入力から与えられる。A B1 行目には、2
つの整数 A, B (1 ≦ A, B ≦ 100) が与えられる。出力数字の入れ替えた後の A と B
を、スペース区切りで 1 行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc012/submissions/4320472
// 提出ID : 4320472
// 問題ID : abc012_1
// コンテストID : abc012
// ユーザID : xryuseix
// コード長 : 631
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

  int a, b;
  cin >> a >> b;
  cout << b << " " << a << endl;

  return 0;
}
