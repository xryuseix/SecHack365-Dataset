/*
問題文の引用元：https://atcoder.jp/contests/abc023/tasks/abc023_a
A - 加算王Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 今回は 23 回目の AtCoder Beginner Contest です。今回のコンテストは 5
月に開かれています。高橋君は 23
という整数を見て、十の位と一の位に分割して足し合わせることによって、2 + 3 = 5
と現在の月と等しい数となることに気が付きました。このことに興味を持った高橋君は、手元にあった
2 桁の正整数 X の各位の和を計算することにしました。あなたの課題は、正整数 X
の各位の和を求めることです。入力入力は以下の形式で標準入力から与えられる。X1
行目には、2 桁の正整数 X (10 ≦ X ≦ 99) が与えられる。出力正整数 X の各位の和を 1
行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc023/submissions/4320161
// 提出ID : 4320161
// 問題ID : abc023_a
// コンテストID : abc023
// ユーザID : xryuseix
// コード長 : 656
// 実行時間 : 1



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

  int a;
  cin >> a;
  cout << a / 10 + a % 10 << endl;

  return 0;
}
