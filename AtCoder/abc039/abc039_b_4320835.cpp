/*
問題文の引用元：https://atcoder.jp/contests/abc039/tasks/abc039_b
B - エージェント高橋君Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : TK国のエージェントである高橋君は、とある正整数 X
を青木君から受け取りました。しかし実は青木君はAO国のスパイであり、本来渡すべき正整数を
4 乗したものを渡していました。つまり、本来渡すべき正整数を N とすると、X = N^4
です。高橋君は非常に優秀なのでこれを見破りましたが、計算が苦手なので元の正整数、つまり
N はなんだったのかがわかりません。なので代わりにあなたが N を求めてください。
制約1 ≦ X ≦ 10^9X = N^4 となる N
がただ一つのみ存在する入力入力は以下の形式で標準入力から与えられる。X出力1 行に
N を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc039/submissions/4320835
// 提出ID : 4320835
// 問題ID : abc039_b
// コンテストID : abc039
// ユーザID : xryuseix
// コード長 : 626
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

  int a, b;
  cin >> a;
  cout << sqrt(sqrt(a)) << endl;

  return 0;
}
