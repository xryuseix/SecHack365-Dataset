/*
問題文の引用元：https://atcoder.jp/contests/abc089/tasks/abc089_a
A - Grouping 2Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : ある学校には、N
人の生徒がいます。生徒たちをいくつかのグループに分け、グループごとにあるテーマについて話し合ってもらうこととなりました。あなたは、2
人以下のグループだと効果的な話し合いが出来ないと考えており、なるだけ多くのグループを
3 人以上にしたいです。生徒たちを上手く分けて、3
人以上のグループの数を最大化してください。
制約1 \leq N \leq
1000入力は全て整数入力入力は以下の形式で標準入力から与えられる。N出力3
人以上のグループを最大で x 個作れるとき、x を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc089/submissions/4239561
// 提出ID : 4239561
// 問題ID : abc089_a
// コンテストID : abc089
// ユーザID : xryuseix
// コード長 : 486
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

  int n;

  cin >> n;
  cout << n / 3 << endl;

  return 0;
}
