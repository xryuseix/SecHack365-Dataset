/*
問題文の引用元：https://atcoder.jp/contests/abc041/tasks/abc041_b
B - 直方体Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 正の整数 A，B，C が与えられます。 幅 A、高さ B、奥行き C
の直方体の体積を X とします。 X を 10^9+7
で割った余りを求めてください。なお、いくつかのプログラミング言語では、整数型が表せる値に上限があることに注意してください。
制約A，B，C
は整数である。1≦A，B，C≦10^9入力入力は以下の形式で標準入力から与えられる。A B
C出力X を 10^9+7 で割った余りを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc041/submissions/4320732
// 提出ID : 4320732
// 問題ID : abc041_b
// コンテストID : abc041
// ユーザID : xryuseix
// コード長 : 647
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

  ll a, b, c, x = 1000000007;
  cin >> a >> b >> c;
  cout << (a * b) % x * c % x << endl;

  return 0;
}
