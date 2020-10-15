/*
問題文の引用元：https://atcoder.jp/contests/abc095/tasks/abc095_a
A - Something on ItEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : ラーメン店「高橋屋」のラーメンの値段は 1 杯 700
円ですが、トッピング（味玉、チャーシュー、ねぎ）を乗せた場合は 1 種類につき 100
円が加算されます。ある客がラーメンを一杯注文し、店員にトッピングの希望を伝えました。店員は注文の内容をメモ帳に文字列
S として記録しました。S の長さは 3 文字で、S の 1 文字目が o
のとき客のラーメンに味玉を乗せることを、x
のとき味玉を乗せないことを表します。同様に、S の 2 文字目、3
文字目はそれぞれチャーシュー、ねぎの有無を表します。S
が入力されると、対応するラーメンの値段を出力するプログラムを書いてください。
制約S は長さ 3 の文字列である。S の各文字は o または x
である。入力入力は以下の形式で標準入力から与えられる。S出力S
に対応するラーメンの値段が y 円のとき、y の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc095/submissions/4239646
// 提出ID : 4239646
// 問題ID : abc095_a
// コンテストID : abc095
// ユーザID : xryuseix
// コード長 : 563
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

  string s;
  int x = 700;
  cin >> s;
  if (s[0] == 'o')
    x += 100;
  if (s[1] == 'o')
    x += 100;
  if (s[2] == 'o')
    x += 100;
  cout << x << endl;

  return 0;
}
