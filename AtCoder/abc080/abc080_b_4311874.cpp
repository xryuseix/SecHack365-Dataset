/*
問題文の引用元：https://atcoder.jp/contests/abc080/tasks/abc080_b
B - Harshad NumberEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 整数 X を十進法で表したときの各桁の数字の和を f(X) としたとき、X が
f(X) で割り切れる場合、X はハーシャッド数です。整数 N
が与えられるので、ハーシャッド数かどうか判定してください。
制約1≦N≦10^8入力は全て整数入力入力は以下の形式で標準入力から与えられる。N出力N
がハージャッド数ならば Yes を、そうでなければ No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc080/submissions/4311874
// 提出ID : 4311874
// 問題ID : abc080_b
// コンテストID : abc080
// ユーザID : xryuseix
// コード長 : 811
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, x, fx = 0;
  cin >> n;
  x = n;
  while (n > 0) {
    fx += n % 10;
    n /= 10;
  }
  //	cout<<fx<<" "<<x<<endl;
  if (x % fx == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
