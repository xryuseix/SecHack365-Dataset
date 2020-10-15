/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2017-beginner/tasks/tenka1_2017_a
A - Accepted...?Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すぬけ君はあるプログラミングコンテストのために、6
問の問題を用意しました。りんごさんはすぬけ君の用意した各問題についてそれぞれ、プログラミングコンテストに採用するかどうかを決めました。長さ
6 の文字列 S の i 文字目が 1 ならすぬけ君の用意した i
問目の問題が採用されたことを、0
なら採用されなかったことを表します。すぬけ君が用意した問題の中で、プログラミングコンテストに採用された問題は何問あるでしょうか。
制約S の長さは 6 であるS は 0 と 1
のみからなる入力入力は以下の形式で標準入力から与えられる。S出力すぬけ君が用意した問題のうち、プログラミングコンテストに採用された問題の数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2017-beginner/submissions/4262183
// 提出ID : 4262183
// 問題ID : tenka1_2017_a
// コンテストID : tenka1-2017-beginner
// ユーザID : xryuseix
// コード長 : 630
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

  int i, a, b = 0, c;
  for (i = 0; i < 6; i++) {
    scanf("%c", &c);
    a = c - '0';
    b += a;
  }
  cout << b << endl;

  return 0;
}
