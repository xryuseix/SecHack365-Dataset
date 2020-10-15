/*
問題文の引用元：https://atcoder.jp/contests/abc040/tasks/abc040_a
A - 赤赤赤赤青Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : n 個のブロックが一列に並んでいます。前から数えて x
個目のブロックだけが青色で、残りはすべて赤色です。高橋君は、隣り合うブロックを交換する操作を何度か行って、青いブロックが列の端
(前から 1 番目かもしくは n 番目)
に来るようにしようとしています。最小で何回の操作が必要かを求めてください。
制約1 ≦ n ≦ 1001 ≦ x ≦ n入力入力は以下の形式で標準入力から与えられる。n
x出力必要な最小の操作回数を表す整数を 1 行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc040/submissions/4319739
// 提出ID : 4319739
// 問題ID : abc040_a
// コンテストID : abc040
// ユーザID : xryuseix
// コード長 : 643
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

  int n, x;
  cin >> n >> x;
  if (n / 2 >= x)
    cout << x - 1 << endl;
  else
    cout << n - x << endl;

  return 0;
}
