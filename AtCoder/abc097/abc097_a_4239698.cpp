/*
問題文の引用元：https://atcoder.jp/contests/abc097/tasks/abc097_a
A - Colorful TransceiversEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 :
数直線上にいるAさんとBさんとCさんがトランシーバーで会話をしようとしています。Aさんは
a [m] 地点、Bさんは b [m] 地点、Cさんは c [m] 地点にいます。二人の人間は、距離が
d [m]
以内のとき直接会話が出来ます。AさんとCさんが直接的、あるいは間接的に会話ができるか判定してください。ただしAさんとCさんが間接的に会話ができるとは、AさんとBさんが直接会話でき、かつBさんとCさんが直接会話できることを指します。
制約1 ≤ a,b,c ≤ 1001 ≤ d ≤
100入力は全て整数入力入力は以下の形式で標準入力から与えられる。a b c
d出力会話できるなら Yes を, できないなら No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc097/submissions/4239698
// 提出ID : 4239698
// 問題ID : abc097_a
// コンテストID : abc097
// ユーザID : xryuseix
// コード長 : 573
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
  if ((abs(b - a) <= d && abs(c - b) <= d) || (abs(c - a) <= d))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
