/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2016-quala/tasks/tenka1_2016_qualA_a
A - 天下一プログラマーゲームEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
天下一大学に入学したキノシタくんは、天下一プログラマーゲームで遊ぶことにしました。天下一プログラマーゲームとは、整数を
1 から順に数えていき、その整数が 3 で割り切れる場合には「天下一」、5
で割り切れる場合には「プログラマー」、3 でも 5
でも割り切れる場合には「天下一プログラマー」と発言するゲームです。それ以外の場合には、その整数をそのまま発言します。キノシタくんは天下一プログラマーゲームを遊んだときにそのまま発言した整数の総和を求めることにしました。例えば、10
まで天下一プログラマーゲームを遊んだとき、「1、2、天下一、4、プログラマー、天下一、7、8、天下一、プログラマー」と発言するので、整数の総和は
1+2+4+7+8=22 となります。100
まで天下一プログラマーゲームを遊んだときの、そのまま発言した整数の総和を求めてください。入力この問題では入力は与えられない。出力100
まで天下一プログラマーゲームを遊んだとき、そのまま発言した整数の総和を出力せよ。出力の末尾に改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2016-quala/submissions/4262226
// 提出ID : 4262226
// 問題ID : tenka1_2016_qualA_a
// コンテストID : tenka1-2016-quala
// ユーザID : xryuseix
// コード長 : 633
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

  int i, a, b = 0, c;
  for (i = 1; i <= 100; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      continue;
    b += i;
  }
  cout << b << endl;

  return 0;
}
