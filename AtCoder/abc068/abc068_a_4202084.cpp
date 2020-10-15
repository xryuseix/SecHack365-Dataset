/*
問題文の引用元：https://atcoder.jp/contests/abc068/tasks/abc068_a
A - ABCxxxEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : このコンテスト、つまり AtCoder Beginner Contest
の略称は、アルファベット 3 文字で ABC となっております。そして、ABC
のうち特定の回を指すときは、何回目の ABC かを 3
桁の数字で表して後ろに付け、ABC680 のように呼びます。例えば ABC680 は、680
回目の ABC のことを指します。では、N 回目の ABC
はどのように表すでしょうか、これを出力するプログラムを作成してください。
制約100 ≦ N ≦ 999入力入力は以下の形式で標準入力から与えられる。N出力N 回目の ABC
の略称を出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/abc068/submissions/4202084
// 提出ID : 4202084
// 問題ID : abc068_a
// コンテストID : abc068
// ユーザID : xryuseix
// コード長 : 294
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

  int a;
  cin >> a;
  cout << "ABC" << a << endl;

  return 0;
}
