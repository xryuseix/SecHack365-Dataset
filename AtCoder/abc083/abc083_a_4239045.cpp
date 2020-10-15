/*
問題文の引用元：https://atcoder.jp/contests/abc083/tasks/abc083_a
A - LibraEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 上皿天秤は、左の皿に乗っているおもりの重さの合計を L
とし、右の皿に乗っているおもりの重さの合計を R としたとき、L>R なら左に傾き、L=R
なら釣り合い、L<R なら右に傾きます。高橋君は、上皿天秤の左の皿に重さ A
のおもりと重さ B のおもりを、右の皿に重さ C のおもりと重さ D
のおもりを置きました。上皿天秤が左に傾くなら Left を、釣り合うなら Balanced
を、右に傾くなら Right を出力してください。
制約1\leq A,B,C,D \leq
10入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A B C
D出力上皿天秤が左に傾くなら Left を、釣り合うなら Balanced を、右に傾くなら
Right を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc083/submissions/4239045
// 提出ID : 4239045
// 問題ID : abc083_a
// コンテストID : abc083
// ユーザID : xryuseix
// コード長 : 586
// 実行時間 : 2



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
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

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a + b > c + d)
    cout << "Left" << endl;
  else if (a + b == c + d)
    cout << "Balanced" << endl;
  else
    cout << "Right" << endl;

  return 0;
}