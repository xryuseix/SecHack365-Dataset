/*
問題文の引用元：https://atcoder.jp/contests/abc019/tasks/abc019_2
B - 高橋くんと文字列圧縮Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋くんはある文字列 s
を持っています。文字列を短く表現することに興味のある高橋くんは、以下の圧縮方法を試してみることにしました。文字列
s
を同じ文字が連続する文字列に分割します。（分割）分割された各文字列を、文字と、その文字が連続する長さをつなげた新たな文字列に変換します。（変換）最後に、変換した各文字列を前から順に結合します。（結合）aabbbaad
という文字列に上記の圧縮方法を適用するとaabbbaad を aa bbb aa d に分割aa bbb aa
d を、それぞれ a2 b3 a2 d1 に変換a2 b3 a2 d1 を a2b3a2d1
と結合以上より、a2b3a2d1 を得ることができます。あなたには文字列 s
が与えられるので、上記の方法で圧縮された文字列を求めるプログラムを、高橋くんの代わりに書いてください。入力入力は以下の形式で標準入力から与えられる。s圧縮する文字列
s (1 ≦ |s| ≦ 1,000)  が与えられる( |s|  は文字列 s の長さを表す)。s
は英小文字から成る文字列であることが保証される。出力s
から作られた圧縮された文字列を標準出力に出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc019/submissions/4348001
// 提出ID : 4348001
// 問題ID : abc019_2
// コンテストID : abc019
// ユーザID : xryuseix
// コード長 : 717
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
  int i, co, j;
  cin >> s;
  for (i = 0; i < s.length(); i++) {
    for (j = i + 1; s[i] == s[j]; j++) {
    }
    cout << s[i] << j - i;
    i += j - i - 1;
  }
  cout << endl;

  return 0;
}
