/*
問題文の引用元：https://atcoder.jp/contests/abc037/tasks/abc037_a
A - 饅頭Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : あなたは饅頭の店に来ています。ここでは白と緑の 2
種類の饅頭が売られていて、それぞれの種類は何個でも買うことができます。白色の饅頭は
1 個 A 円で、緑色の饅頭は 1 個 B 円です。あなたは C
円持っています。あなたはとにかく沢山の個数を食べたいので、種類は気にせず、なるべく多くの個数の饅頭を買おうと思っています。2
種類で買う個数が違ったり、片方の種類しか買わなかったりしてもかまいません。最大で何個の饅頭が買えるでしょうか。
制約1 \leq A,B \leq 1,0001 \leq C \leq
1,000,000入力入力は以下の形式で標準入力から与えられる。A B
C出力あなたが買える饅頭の個数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc037/submissions/4319829
// 提出ID : 4319829
// 問題ID : abc037_a
// コンテストID : abc037
// ユーザID : xryuseix
// コード長 : 621
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

  int a, b, c;
  cin >> a >> b >> c;
  cout << c / min(a, b) << endl;

  return 0;
}
