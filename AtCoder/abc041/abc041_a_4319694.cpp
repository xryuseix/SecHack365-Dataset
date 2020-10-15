/*
問題文の引用元：https://atcoder.jp/contests/abc041/tasks/abc041_a
A - 添字Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 文字列 s と整数 i (1≦i≦|s|) が与えられます。 s の i
文字目を出力してください。なお、|s| は文字列 s の長さを表します。
制約1≦|s|≦100s
は英小文字のみからなる。1≦i≦|s|入力入力は以下の形式で標準入力から与えられる。si出力s
の i 文字目を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc041/submissions/4319694
// 提出ID : 4319694
// 問題ID : abc041_a
// コンテストID : abc041
// ユーザID : xryuseix
// コード長 : 628
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  int i;
  cin >> s >> i;
  cout << s[i - 1] << endl;

  return 0;
}
