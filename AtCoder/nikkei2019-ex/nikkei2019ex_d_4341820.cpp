/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_d
D - 辞書順最小の数Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 10^{10^{10}}
以下のすべての正整数を、文字列として見たときに辞書順で小さい順に並べた列を考えます。この列の先頭から
N 番目の整数を求めてください。
制約1 ≦ N ≦
100,000入力入力は以下の形式で標準入力から与えられる。N出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-ex/submissions/4341820
// 提出ID : 4341820
// 問題ID : nikkei2019ex_d
// コンテストID : nikkei2019-ex
// ユーザID : xryuseix
// コード長 : 650
// 実行時間 : 5



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
  cout << 1;
  for (int i = 0; i < n - 1; i++)
    cout << 0;
  cout << endl;

  return 0;
}
