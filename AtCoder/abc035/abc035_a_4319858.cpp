/*
問題文の引用元：https://atcoder.jp/contests/abc035/tasks/abc035_a
A - テレビEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は画面の幅が W 、高さが H
のテレビを持っています。このテレビの画面アスペクト比 W:H が 4:3 か 16:9
か判定してください。入力入力は以下の形式で標準入力から与えられる。W H1
行目にテレビの画面の幅と高さを表す 2 つの整数 W,H (1≦H<W≦10^5)
が空白区切りで与えられる。テレビの画面アスペクト比は 4:3 か 16:9
になることが保証される。出力高橋君のテレビの画面アスペクト比 W:H が 4:3
ならば4:3を、 16:9 ならば 16:9 を 1 行に出力せよ。改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc035/submissions/4319858
// 提出ID : 4319858
// 問題ID : abc035_a
// コンテストID : abc035
// ユーザID : xryuseix
// コード長 : 746
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
int gcd(int x, int y) {
  int t;
  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  int x = gcd(a, b);
  cout << a / x << ":" << b / x << endl;

  return 0;
}
