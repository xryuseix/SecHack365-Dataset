/*
問題文の引用元：https://atcoder.jp/contests/abc058/tasks/abc058_a
A - ι⊥lEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 3 本の柱が等間隔に並んでいます。柱の高さは左から順に a メートル, b
メートル, c メートル です。柱の先端が同一直線上に並んでいる時、つまり b-a = c-b
を満たしているとき、この柱の並び方を美しいと呼びます。柱の並び方が美しいかどうかを判定してください。
制約1 \leq a,b,c \leq 100a,b,c
は整数である。入力入力は以下の形式で標準入力から与えられる。a b
c出力柱の並び方が美しい場合 YES を、そうでない場合 NO を 1 行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc058/submissions/4198683
// 提出ID : 4198683
// 問題ID : abc058_a
// コンテストID : abc058
// ユーザID : xryuseix
// コード長 : 314
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  if (b - a == c - b)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
