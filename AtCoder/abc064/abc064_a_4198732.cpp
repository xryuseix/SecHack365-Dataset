/*
問題文の引用元：https://atcoder.jp/contests/abc064/tasks/abc064_a
A - RGB CardsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : AtCoDeer君は、赤、緑、青色のカードを持っています。それぞれのカードには
1 以上 9 以下の整数が書かれており、赤色のカードには r、緑色のカードには
g、青色のカードには b が書かれています。3
つのカードを左から順に赤、緑、青色の順に並べ、左から整数を読んだときにこれが 4
の倍数であるか判定しなさい。
制約1 ≤ r, g, b ≤ 9入力入力は以下の形式で標準入力から与えられる。  r g
b出力AtCoDeer君が作った 3 桁の整数が 4 の倍数ならば YES、そうでないならば NO
を出力しなさい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc064/submissions/4198732
// 提出ID : 4198732
// 問題ID : abc064_a
// コンテストID : abc064
// ユーザID : xryuseix
// コード長 : 349
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
  if ((a * 100 + b * 10 + c) % 4 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
