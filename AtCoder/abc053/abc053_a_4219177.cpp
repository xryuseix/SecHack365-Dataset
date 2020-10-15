/*
問題文の引用元：https://atcoder.jp/contests/abc053/tasks/abc053_a
A - ABC/ARCEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すめけくんは現在のレートが 1200 未満ならば AtCoder Beginner Contest
(ABC) に、そうでなければ AtCoder Regular Contest (ARC)
に参加することにしました。すめけくんの現在のレート x
が与えられます。すめけくんが参加するコンテストが ABC ならば ABC
と、そうでなければ ARC と出力してください。
制約1 ≦ x ≦ 3{,}000x
は整数入力入力は以下の形式で標準入力から与えられる。x出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc053/submissions/4219177
// 提出ID : 4219177
// 問題ID : abc053_a
// コンテストID : abc053
// ユーザID : xryuseix
// コード長 : 330
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  if (n < 1200)
    cout << "ABC" << endl;
  else
    cout << "ARC" << endl;

  return 0;
}
