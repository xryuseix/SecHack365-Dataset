/*
問題文の引用元：https://atcoder.jp/contests/dwacon2017-prelims/tasks/dwango2017qual_a
A - 動画検索Editorial
Time Limit : 2.525 sec / Memory Limit : 246 MB
配点 : 100 点
問題文 : ドワンゴ社の運営する動画サイトには n
本の動画があります。ニワンゴくんが検索してみたところ、そのうちタイトルに「ドワンゴ」を含む動画が
a 本あり、「ニコニコ」を含む動画が b
本あることがわかりました。ニワンゴくんは「ドワンゴ」「ニコニコ」の両方をタイトルに含む動画が何本あるのか気になっています。そのような動画は最低でも何本あると言えるでしょうか。
制約1 ≦ n ≦ 14,000,0001 ≦ a ≦ n, 1 ≦ b ≦
n入力入力は以下の形式で標準入力から与えられる。n a
b出力「ドワンゴ」「ニコニコ」の両方をタイトルに含む動画の本数として考えられる最小の値を
1 行で出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/dwacon2017-prelims/submissions/4262333
// 提出ID : 4262333
// 問題ID : dwango2017qual_a
// コンテストID : dwacon2017-prelims
// ユーザID : xryuseix
// コード長 : 613
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

  int a, b, c;
  cin >> a >> b >> c;
  if (a > b + c)
    cout << 0 << endl;
  else
    cout << b + c - a << endl;

  return 0;
}
