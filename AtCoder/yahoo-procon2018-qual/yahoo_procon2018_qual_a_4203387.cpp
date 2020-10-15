/*
問題文の引用元：https://atcoder.jp/contests/yahoo-procon2018-qual/tasks/yahoo_procon2018_qual_a
A - yahooEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : yahoo 型文字列とは、yah のあとに同じ英小文字が 2
つ連続した文字列を指します。例えば、yahoo, yahhh などは yahoo
型文字列ですが、yahoy や snuke はそうではありません。5
文字の英小文字からなる文字列 S が与えられるので、yahoo
型文字列かどうか判定してください。
制約|S|=5S
は英小文字からなる入力入力は以下の形式で標準入力から与えられる。S出力S が yahoo
型文字列なら YES を、そうでないなら NO を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/yahoo-procon2018-qual/submissions/4203387
// 提出ID : 4203387
// 問題ID : yahoo_procon2018_qual_a
// コンテストID : yahoo-procon2018-qual
// ユーザID : xryuseix
// コード長 : 356
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

  string a, b, c;
  cin >> a;
  if (a.substr(0, 3) == "yah" && a[3] == a[4])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
