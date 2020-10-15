/*
問題文の引用元：https://atcoder.jp/contests/abc096/tasks/abc096_b
B - Maximum SumEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点：200 点
問題文 : 黒板に, 3 つの正の整数 A, B, C が書かれています. E869120 君は,
以下の操作を K 回行います.  黒板に書かれている整数のうち 1 つを選び, これを 2
倍した値に書き換える.  さて, K 回の操作を終えた後の,
黒板に書かれる整数の合計としてありうる最大の値はいくつでしょうか？
制約A, B, C は 1 以上 50 以下の整数K は 1 以上 10
以下の整数入力入力は以下の形式で標準入力から与えられる.  A B CK出力E869120 君が
K 回の操作を終えた後の,
黒板に書かれる整数の合計としてありうる最大の値を出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc096/submissions/4315496
// 提出ID : 4315496
// 問題ID : abc096_b
// コンテストID : abc096
// ユーザID : xryuseix
// コード長 : 672
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

  int a[3], k;
  cin >> a[0] >> a[1] >> a[2] >> k;
  sort(a, a + 3);
  cout << a[2] * pow(2, k) + a[0] + a[1] << endl;
  ;

  return 0;
}
