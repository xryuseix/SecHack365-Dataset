/*
問題文の引用元：https://atcoder.jp/contests/abc096/tasks/abc096_a
A - Day of TakahashiEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点：100 点
問題文 : AtCoder 王国では, 5 月 5
日のような月の数と日の数が同じ日を「高橋」と言う.2018 年 1 月 1 日から 2018 年 a
月 b 日までに, 「高橋」は何日あるか.ただし, AtCoder
王国ではグレゴリオ暦を利用しているものとする.
制約a は 1 以上 12 以下の整数b は 1 以上 31 以下の整数2018 年 a 月 b
日はグレゴリオ暦において正しい日付である.入力入力は以下の形式で標準入力から与えられる.
a b出力2018 年 1 月 1 日から 2018 年 a 月 b
日までに「高橋」は何日あるか、出力しなさい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc096/submissions/4239679
// 提出ID : 4239679
// 問題ID : abc096_a
// コンテストID : abc096
// ユーザID : xryuseix
// コード長 : 521
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
  cin >> a >> b;
  if (a <= b)
    cout << a << endl;
  else
    cout << a - 1 << endl;

  return 0;
}
