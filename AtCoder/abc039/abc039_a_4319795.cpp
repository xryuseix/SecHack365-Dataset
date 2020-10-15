/*
問題文の引用元：https://atcoder.jp/contests/abc039/tasks/abc039_a
A - 高橋直体Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は高さが A cm、幅が B cm、奥行きが C cm
の直方体を持っています。この直方体の表面積は何 cm^2 でしょうか？
制約1 ≦ A, B, C ≦
100与えられる数は全て整数である。入力入力は以下の形式で標準入力から与えられる。A
B C出力1 行にこの直方体の表面積を整数で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc039/submissions/4319795
// 提出ID : 4319795
// 問題ID : abc039_a
// コンテストID : abc039
// ユーザID : xryuseix
// コード長 : 635
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

  int a, b, c;
  cin >> a >> b >> c;
  cout << 2 * (a * b + b * c + c * a) << endl;

  return 0;
}
