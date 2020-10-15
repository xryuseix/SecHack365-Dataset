/*
問題文の引用元：https://atcoder.jp/contests/abc103/tasks/abc103_a
A - Task Scheduling ProblemEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 3
個のタスクがあり、あなたは全てのタスクを完了させなければなりません。はじめ、任意の
1 個のタスクをコスト 0 で完了できます。また、i
番目のタスクを完了した直後にコスト |A_j - A_i| で j
番目のタスクを完了できます。ここで |x| は x
の絶対値を表します。全てのタスクを完了するのに要する合計コストの最小値を求めてください。
制約入力は全て整数である1 \leq A_1, A_2, A_3 \leq
100入力入力は以下の形式で標準入力から与えられる。A_1 A_2
A_3出力全てのタスクを完了するのに要する合計コストの最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc103/submissions/4148586
// 提出ID : 4148586
// 問題ID : abc103_a
// コンテストID : abc103
// ユーザID : xryuseix
// コード長 : 319
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int a[3], i;
  for (i = 0; i < 3; i++)
    cin >> a[i];
  sort(a, a + 3);
  cout << a[2] - a[0] << endl;

  return 0;
}
