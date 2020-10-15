/*
問題文の引用元：https://atcoder.jp/contests/abc029/tasks/abc029_a
A - 複数形Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 英小文字からなる文字列 W が入力されます。 W の末尾に英小文字の s
を付け足したものを出力してください。入力入力は以下の形式で標準入力から与えられる。W1
行目に、英小文字からなる文字列 W (1 ≦ |W| ≦ 10, ここで |W| は W の長さを表す)
が与えられる。出力標準出力に、 W の末尾に英小文字の s
を付け足したものを出力し、最後に改行せよ。空白などの余計な出力をしてはならない。大文字と小文字は区別される。
// ソースコードの引用元 : https://atcoder.jp/contests/abc029/submissions/4320033
// 提出ID : 4320033
// 問題ID : abc029_a
// コンテストID : abc029
// ユーザID : xryuseix
// コード長 : 676
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

  string w;
  cin >> w;
  cout << w + 's' << endl;

  return 0;
}
