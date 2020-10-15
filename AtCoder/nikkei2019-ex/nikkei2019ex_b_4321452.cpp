/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_b
B - 二乗Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 正整数 N が与えられます。A^2 が N を超えないような最大の整数 A
を出力してください。
制約1 ≦ N ≦ 10^9入力入力は以下の形式で標準入力から与えられる。N出力A^2 が N
を超えないような最大の整数 A を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-ex/submissions/4321452
// 提出ID : 4321452
// 問題ID : nikkei2019ex_b
// コンテストID : nikkei2019-ex
// ユーザID : xryuseix
// コード長 : 704
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

  double n, i;
  cin >> n;
  for (i = n; i >= 0; i--) {
    if (sqrt(i) * sqrt(i) == i) {
      cout << int(sqrt(i)) << endl;
      return 0;
    }
  }

  return 0;
}
