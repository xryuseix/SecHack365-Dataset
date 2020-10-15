/*
問題文の引用元：https://atcoder.jp/contests/abc093/tasks/abc093_a
A - abc of ABCEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : a,b,c からなる長さ 3 の文字列 S が与えられます。S を abc
を並び替えて作ることができるかどうか判定してください。
制約|S|=3S は a,b,c からなる入力入力は以下の形式で標準入力から与えられる。S出力S
を abc を並び替えて作ることができるなら Yes を、そうでないなら No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc093/submissions/4239602
// 提出ID : 4239602
// 問題ID : abc093_a
// コンテストID : abc093
// ユーザID : xryuseix
// コード長 : 579
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

  char a[3];

  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  if (a[0] == 'a' && a[1] == 'b' && a[2] == 'c')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
