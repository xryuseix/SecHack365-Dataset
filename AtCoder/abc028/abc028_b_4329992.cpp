/*
問題文の引用元：https://atcoder.jp/contests/abc028/tasks/abc028_b
B - 文字数カウントEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 文字列 S が与えられます。この文字列は A, B, C, D, E, F の 6
種類の文字から構成されている事が分かっています。6 種類の文字それぞれについて、S
のなかに何回出てくるかを数えてください。入力入力は以下の形式で標準入力から与えられる。S1
行に文字列 S(1 ≦ |S| ≦ 100) が与えられる。ただし、|S| とは S
の長さを表す。また、S は必ず A, B, C, D, E, F の 6
種類の文字から構成されている。出力A, B, C, D, E, F の出現回数を空白区切りで 1
行に出力せよ。出力は標準出力に行い、末尾に改行を入れること。また、行の末尾に余計な空白を入れないよう注意せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc028/submissions/4329992
// 提出ID : 4329992
// 問題ID : abc028_b
// コンテストID : abc028
// ユーザID : xryuseix
// コード長 : 746
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
  int i, a[6] = {0};
  cin >> s;
  for (i = 0; i < s.length(); i++) {
    a[s[i] - 'A']++;
  }
  cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4]
       << " " << a[5] << endl;
  ;

  return 0;
}