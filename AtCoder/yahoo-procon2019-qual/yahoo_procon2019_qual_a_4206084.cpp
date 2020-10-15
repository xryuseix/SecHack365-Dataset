/*
問題文の引用元：https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_a
A - Anti-AdjacencyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 1 以上 N 以下の異なる整数を、差が 1 の整数をともに選ばないように K
個選ぶことができるか判定してください。
制約1\leq N,K\leq 100N,K
は整数である入力入力は以下の形式で標準入力から与えられる。N K出力整数を K
個選ぶことができるなら YES を、そうでないなら NO を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/4206084
// 提出ID : 4206084
// 問題ID : yahoo_procon2019_qual_a
// コンテストID : yahoo-procon2019-qual
// ユーザID : xryuseix
// コード長 : 339
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
  if (a + 1 >= b * 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
