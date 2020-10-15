/*
問題文の引用元：https://atcoder.jp/contests/abc056/tasks/abc056_b
B - NarrowRectanglesEasyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : シカのAtCoDeerくんは縦の長さ 1、横の長さ W
の形をした長方形が二つ机に置いてあるのを見つけました。机を二次元平面とみなすと、以下の図のように、一つ目の長方形は
縦は [0,1] の範囲を、横は [a,a+W] の範囲を占めており、二つ目の長方形は縦は [1,2]
の範囲を、横は [b,b+W]
の範囲を占めています。AtCoDeerくんは二つ目の長方形を横に動かすことで、一つ目の長方形と連結にしようと考えました。長方形を横に動かさないといけない距離の最小値を求めてください。
制約入力は全て整数である。1≦W≦10^51≦a,b≦10^5入力入力は以下の形式で標準入力から与えられる。W
a b出力横に動かす必要のある距離の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc056/submissions/4263151
// 提出ID : 4263151
// 問題ID : abc056_b
// コンテストID : abc056
// ユーザID : xryuseix
// コード長 : 642
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, w;
  cin >> w >> a >> b;
  if (a <= b + w && b <= a + w)
    cout << 0 << endl;
  else
    cout << max(b - a - w, a - b - w) << endl;

  return 0;
}
