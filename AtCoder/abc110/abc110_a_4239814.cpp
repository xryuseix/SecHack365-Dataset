/*
問題文の引用元：https://atcoder.jp/contests/abc110/tasks/abc110_a
A - Maximize the FormulaEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 :
あなたは子供にゲームをプレイさせ、その結果に応じてお小遣いをあげることにしました。そのゲームの内容は以下の通りです。1
以上 9 以下の整数 1 つが書かれた整数パネル 3 枚と + が書かれた演算子パネル 1
枚があるこれら 4 枚のパネルを横一列に並べて X + Y の形の数式を作る
(すなわち、演算子パネルを端に置くことはできない)数式を計算した結果と同じ値のお小遣いをあげるゲームで使用する各整数パネルの値
A, B, C が与えられるので、あげることになり得るお小遣いの最大値を求めてください。
制約入力はすべて整数である1 \leq A, B, C \leq
9入力入力は以下の形式で標準入力から与えられる。A B
C出力あげることになり得るお小遣いの最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc110/submissions/4239814
// 提出ID : 4239814
// 問題ID : abc110_a
// コンテストID : abc110
// ユーザID : xryuseix
// コード長 : 523
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

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  cout << a[2] * 10 + a[1] + a[0] << endl;

  return 0;
}
