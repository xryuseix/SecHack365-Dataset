/*
問題文の引用元：https://atcoder.jp/contests/abc038/tasks/abc038_a
A - お茶Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんはドリンクバーにやってきました。彼は今お茶を飲みたい気分です。しかし、ドリンクバーの飲み物の表記はすべてローマ字で、高橋くんはそれを読むことができません。高橋くんは、ある飲み物について、それがお茶であるかどうか知りたいと思っています。ただし、ある飲み物がお茶であることは、そのローマ字表記がTで終わる文字列であることと等しいです。あなたの仕事は、ある飲み物のローマ字表記の文字列Sが与えられたとき、飲み物がお茶であるか判定するプログラムを書くことです。
制約S の長さは1以上50以下である。S
の各文字は英大文字からなる。入力入力は以下の形式で標準入力から与えられる。S出力文字列
S が表す飲み物がお茶のとき、YES、そうでないとき NO と 1 行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc038/submissions/4319819
// 提出ID : 4319819
// 問題ID : abc038_a
// コンテストID : abc038
// ユーザID : xryuseix
// コード長 : 664
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

  string s;
  cin >> s;
  if (s[s.length() - 1] == 'T')
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
