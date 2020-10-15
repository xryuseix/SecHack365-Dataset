/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_c
C - 11で割った余りの計算方法Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 整数 M を 11 で割った余りは、M の下から奇数桁目の数の和 から M
の下から偶数桁目の数の和 を引いた値を 11 で割った余りと一致します。整数 N
が与えられます。N を 11 で割った余りを出力してください。
制約1 ≦ N ≦ 10^9入力入力は以下の形式で標準入力から与えられる。N出力N を 11
で割った余りを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-ex/submissions/4341720
// 提出ID : 4341720
// 問題ID : nikkei2019ex_c
// コンテストID : nikkei2019-ex
// ユーザID : xryuseix
// コード長 : 618
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

  int n;
  cin >> n;
  cout << n % 11 << endl;

  return 0;
}