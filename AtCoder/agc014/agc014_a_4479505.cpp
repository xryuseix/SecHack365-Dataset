/*
問題文の引用元：https://atcoder.jp/contests/agc014/tasks/agc014_a
A - Cookie ExchangesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 高橋君と青木君とすぬけ君はそれぞれクッキーを A,B,C 個持っています。この
3
人はお互いにクッキーを交換することにしました。具体的には、以下の操作を繰り返します。3
人は同時に、各々が持っているクッキーを半分ずつに分けて、残りの 2
人にそれぞれ一方を渡す。ただし、誰かの持っているクッキーの個数が奇数個になったら、そこで操作を繰り返すのをやめます。さて、クッキーの交換は何回行うことができるでしょうか。ただし、無限に続けられる場合もあることに注意してください。
制約1 ≦ A,B,C ≦ 10^9入力入力は以下の形式で標準入力から与えられる。A B C出力3
人がクッキーの交換を行うことができる回数を出力せよ。ただし、無限に続けられる場合は
-1 を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc014/submissions/4479505
// 提出ID : 4479505
// 問題ID : agc014_a
// コンテストID : agc014
// ユーザID : xryuseix
// コード長 : 890
// 実行時間 : 22



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
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c, i, d[3];
  cin >> a >> b >> c;
  if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) {
    cout << 0 << endl;
    return 0;
  }

  for (i = 0; i < 10000000; i++) {
    d[0] = a / 2;
    d[1] = b / 2;
    d[2] = c / 2;
    a = d[1] + d[2];
    b = d[0] + d[2];
    c = d[0] + d[1];
    if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}
