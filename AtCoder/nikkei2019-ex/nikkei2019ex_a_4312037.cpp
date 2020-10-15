/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_a
A - Prefix ArrayEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 文字列 S が与えられます。S の Prefix Array を求めなさい。ただし、Prefix
Arrayとは、Suffix Array (リンク先は Wikipedia「接尾辞配列」)
の定義における「接尾辞」を「接頭辞」に変更したものです。(具体例は下記の入出力例
1 で確認できます。)
制約1 ≦ |S| ≦ 100,000S
は小文字アルファベットのみからなる。入力入力は以下の形式で標準入力から与えられる。S出力S
の Prefix Array を |S| 行に出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-ex/submissions/4312037
// 提出ID : 4312037
// 問題ID : nikkei2019ex_a
// コンテストID : nikkei2019-ex
// ユーザID : xryuseix
// コード長 : 635
// 実行時間 : 147



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i;
  string s;
  cin >> s;
  for (i = 0; i < s.length(); i++) {
    cout << i + 1 << endl;
  }

  return 0;
}