/*
問題文の引用元：https://atcoder.jp/contests/abc036/tasks/abc036_a
A - お茶Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君はお茶のペットボトルが A
本入った箱を買うことにしました。高橋君は少なくとも B
本のお茶のペットボトルがほしいです。箱を何箱買えばよいですか。
制約1 ≤ A, B ≤ 1000部分点50 点分のテストケースでは、B は A
の倍数である。入力入力は以下の形式で標準入力から与えられる。A
B出力高橋君が買わなければならない箱の個数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc036/submissions/4319842
// 提出ID : 4319842
// 問題ID : abc036_a
// コンテストID : abc036
// ユーザID : xryuseix
// コード長 : 675
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
  cin >> a >> b;
  if (b % a == 0)
    cout << b / a << endl;
  else
    cout << b / a + 1 << endl;

  return 0;
}
