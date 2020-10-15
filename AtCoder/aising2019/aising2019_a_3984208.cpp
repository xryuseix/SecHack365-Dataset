/*
問題文の引用元：https://atcoder.jp/contests/aising2019/tasks/aising2019_a
A - Bulletin BoardEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : A
社主催のプログラミングコンテストの開催が決定したので、その告知を会社の掲示板に張り出すことにしました。掲示板は
N 行 N 列のマス目の形をしています。また、告知は H 行 W
列ぶんの場所を取ります。告知をちょうど HW
個のマスを完全に覆うように掲示板に張り出すとき、張り出す場所の選び方は何通りありますか。
制約1 \leq H, W \leq N \leq
100入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NHW出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/aising2019/submissions/3984208
// 提出ID : 3984208
// 問題ID : aising2019_a
// コンテストID : aising2019
// ユーザID : xryuseix
// コード長 : 152
// 実行時間 : 1



*/
#include <iostream>
using namespace std;
int main(void) {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  cout << (a - b + 1) * (a - c + 1) << endl;

  return 0;
}
