/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_a
A - Snuke's favorite YAKINIKUEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
りんごさんは、すぬけ君にプレゼントを贈ろうとしています。すぬけ君の好物が焼肉であることを知ったりんごさんは、すぬけ君は名前が
YAKI
から始まるものを好み、そうでないものを好まないと判断しました。りんごさんが贈ろうと思っているものの名前を表す文字列
S が与えられます。S が YAKI から始まるかどうか判定してください。
制約1 \leq |S| \leq 10S
は英大文字からなる入力入力は以下の形式で標準入力から与えられる。S出力S が YAKI
から始まるなら Yes を、そうでないなら No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2017-quala/submissions/4242233
// 提出ID : 4242233
// 問題ID : code_festival_2017_quala_a
// コンテストID : code-festival-2017-quala
// ユーザID : xryuseix
// コード長 : 637
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  if (s.length() >= 4 && s.substr(0, 4) == "YAKI")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
