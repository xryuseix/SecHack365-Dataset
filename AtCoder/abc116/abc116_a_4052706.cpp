/*
問題文の引用元：https://atcoder.jp/contests/abc116/tasks/abc116_a
A - Right TriangleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 直角三角形 ABC があります。∠ABC=90° です。三角形 ABC の三辺の長さである
|AB|,|BC|,|CA| が与えられるので、直角三角形 ABC
の面積を求めて下さい。ただし、三角形 ABC
の面積は整数となることが保証されています。
制約1 \leqq |AB|,|BC|,|CA| \leqq 100入力はすべて整数である。三角形 ABC
の面積は整数である。入力入力は以下の形式で標準入力から与えられます。|AB| |BC|
|CA|出力三角形 ABC の面積を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc116/submissions/4052706
// 提出ID : 4052706
// 問題ID : abc116_a
// コンテストID : abc116
// ユーザID : xryuseix
// コード長 : 279
// 実行時間 : 1



*/
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;
int main(void) {
  int i, tri[3];
  cin >> tri[0] >> tri[1] >> tri[2];
  sort(tri, tri + 3);
  cout << tri[0] * tri[1] / 2 << endl;
  return 0;
}
