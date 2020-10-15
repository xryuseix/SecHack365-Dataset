/*
問題文の引用元：https://atcoder.jp/contests/abc103/tasks/abc103_c
C - Modulo SummationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 個の正整数 a_1, a_2, ..., a_N が与えられます。非負整数 m
に対して、f(m) = (m\ mod\ a_1) + (m\ mod\ a_2) + ... + (m\ mod\ a_N)
とします。ここで、X\ mod\ Y は X を Y で割った余りを表します。f
の最大値を求めてください。
制約入力は全て整数である2 \leq N \leq 30002 \leq a_i \leq
10^5入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 ... a_N出力f
の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc103/submissions/4149431
// 提出ID : 4149431
// 問題ID : abc103_c
// コンテストID : abc103
// ユーザID : xryuseix
// コード長 : 336
// 実行時間 : 2



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

  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ans += a - 1;
  }
  cout << ans << endl;

  return 0;
}
