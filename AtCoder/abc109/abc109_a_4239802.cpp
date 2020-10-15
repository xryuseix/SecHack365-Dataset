/*
問題文の引用元：https://atcoder.jp/contests/abc109/tasks/abc109_a
A - ABC333Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 1 以上 3 以下の整数 A, B が与えられます。A \times B \times C
が奇数となるような 1 以上 3 以下の整数 C が存在するか判定してください。
制約入力はすべて整数である1 \leq A, B \leq
3入力入力は以下の形式で標準入力から与えられる。A B出力条件を満たすような C
が存在するなら Yes、そうでないなら No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc109/submissions/4239802
// 提出ID : 4239802
// 問題ID : abc109_a
// コンテストID : abc109
// ユーザID : xryuseix
// コード長 : 520
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
  if (a * b % 2 == 0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;

  return 0;
}
