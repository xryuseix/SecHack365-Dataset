/*
問題文の引用元：https://atcoder.jp/contests/code-thanks-festival-2018-open/tasks/code_thanks_festival_2018_b
B - Colored BallsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 初め箱には赤い玉が X 個、青い玉が Y
個入っています。高橋君は以下の操作を繰り返して、箱を空にしたいです。赤い玉を 1
個、青い玉を 3 個箱から取り出す。もしくは、赤い玉を 3 個、青い玉を 1
個箱から取り出す。各操作ではこの 2
つのいずれか好きな方を行うことができ、毎回同じ操作を行う必要はありません。高橋君のために、箱を空にする方法があるかどうか判定してください。
制約0 \leq X,Y \leq 10^9X+Y>0入力は全て整数である
入力入力は以下の形式で標準入力から与えられる。X
Y出力箱を空にすることができる場合は Yes を、できない場合は No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-thanks-festival-2018-open/submissions/4476750
// 提出ID : 4476750
// 問題ID : code_thanks_festival_2018_b
// コンテストID : code-thanks-festival-2018-open
// ユーザID : xryuseix
// コード長 : 756
// 実行時間 : 670



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#include <stack>
#define ld long double
#define ll long long int
#define ull unsigned long long int
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  while (a > 0 && b > 0) {
    if (a >= b) {
      a -= 3;
      b -= 1;
    } else {
      a -= 1;
      b -= 3;
    }
  }
  if (a == 0 && b == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
