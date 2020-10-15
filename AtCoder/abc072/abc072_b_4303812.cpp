/*
問題文の引用元：https://atcoder.jp/contests/abc072/tasks/abc072_b
B - OddStringEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 英小文字からなる文字列 s
が与えられます。前から数えて奇数文字目だけ抜き出して作った文字列を出力してください。ただし、文字列の先頭の文字を1文字目とします。
制約s
の各文字は英小文字1≤|s|≤10^5入力入力は以下の形式で標準入力から与えられる。s出力前から数えて奇数文字目だけ抜き出して作った文字列を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc072/submissions/4303812
// 提出ID : 4303812
// 問題ID : abc072_b
// コンテストID : abc072
// ユーザID : xryuseix
// コード長 : 639
// 実行時間 : 3



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  int i;
  for (i = 0; i < s.length(); i += 2) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}
