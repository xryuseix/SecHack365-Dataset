/*
問題文の引用元：https://atcoder.jp/contests/abc063/tasks/abc063_a
A - RestrictedEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 二つの整数 A, B が入力されます。A + B の値を出力してください。ただし、A
+ B が 10 以上の場合は、代わりに error と出力してください。
制約A, B は整数である。1 ≤ A, B ≤
9入力入力は以下の形式で標準入力から与えられる。A B出力A + B が 10
以上の場合は、文字列 error を英小文字で出力せよ。そうでない場合は、A + B
の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc063/submissions/4198725
// 提出ID : 4198725
// 問題ID : abc063_a
// コンテストID : abc063
// ユーザID : xryuseix
// コード長 : 333
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

  int a, b;
  cin >> a >> b;
  if (a + b >= 10)
    cout << "error" << endl;
  else
    cout << a + b << endl;

  return 0;
}
