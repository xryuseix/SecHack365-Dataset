/*
問題文の引用元：https://atcoder.jp/contests/abc020/tasks/abc020_a
A - クイズEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : クイズです。第 1 問：
あなたが今参加しているこのコンテストの略称は何でしょう？ アルファベット大文字 3
文字で答えてください。第 2 問：
あなたが今参加しているこのコンテストなどを運営しているAtCoder株式会社の代表取締役社長は誰でしょう？
アルファベット小文字 8 文字のハンドルネームで答えてください。標準入力から整数 1
または 2 が与えられます。 1 が入力された場合は第 1 問の答えを、 2 の場合は第 2
問の答えを出力してください。なお、クイズの答えに関してはこの問題ページ内に記載があります。入力入力は以下の形式で標準入力から与えられる。Q1
行目に、答えるべき問題を指定する 1 個の整数 Q (Q = 1 または Q = 2)
が与えられる。出力標準出力に、 Q = 1 であれば第 1 問の答えを、 Q = 2 であれば第
2
問の答えを出力せよ。アルファベットの大文字と小文字は区別される。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc020/submissions/4320216
// 提出ID : 4320216
// 問題ID : abc020_a
// コンテストID : abc020
// ユーザID : xryuseix
// コード長 : 679
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

  int n;
  cin >> n;
  if (n == 1)
    cout << "ABC" << endl;
  else
    cout << "chokudai" << endl;

  return 0;
}
