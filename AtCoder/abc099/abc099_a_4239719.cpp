/*
問題文の引用元：https://atcoder.jp/contests/abc099/tasks/abc099_a
A - ABDEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : AtCoder Beginner Contestが始まってから早数十年。コンテストは 1
回目から順に ABC001,ABC002,... と名付けられてきましたが、 999 回目のコンテスト
ABC999
を終え、これからのコンテストの名前をどうするかという問題が生じました。そこで、1000
回目から 1998 回目のコンテストを順に ABD001,ABD002,...,ABD999
と名付けることとなりました。1 以上 1998 以下の整数 N が与えられるので、N
回目のコンテストの名前の最初の 3 文字を出力してください。
制約1 \leq N \leq 1998N
は整数入力入力は以下の形式で標準入力から与えられる。N出力N
回目のコンテストの名前の最初の 3 文字を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc099/submissions/4239719
// 提出ID : 4239719
// 問題ID : abc099_a
// コンテストID : abc099
// ユーザID : xryuseix
// コード長 : 529
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
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a;
  if (a < 1000)
    cout << "ABC" << endl;
  else
    cout << "ABD" << endl;

  return 0;
}
