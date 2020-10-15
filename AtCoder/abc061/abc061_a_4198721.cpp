/*
問題文の引用元：https://atcoder.jp/contests/abc061/tasks/abc061_a
A - Between Two IntegersEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 3 つの整数 A,B,C が与えられます。整数 C が A 以上 かつ B
以下であるかを判定してください。
制約-100≦A,B,C≦100  A,B,C
は全て整数入力入力は以下の形式で標準入力から与えられる。  A B
C出力条件を満たす場合はYes、そうでない場合はNoを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc061/submissions/4198721
// 提出ID : 4198721
// 問題ID : abc061_a
// コンテストID : abc061
// ユーザID : xryuseix
// コード長 : 340
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

  int a, b, c;
  cin >> a >> b >> c;
  if (c >= a && c <= b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
