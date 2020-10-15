/*
問題文の引用元：https://atcoder.jp/contests/abc048/tasks/abc048_b
B - Between a and b ...Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 非負の整数 a, b (a ≤ b) と、正の整数 x が与えられます。a 以上 b
以下の整数のうち、x で割り切れるものの個数を求めてください。
制約0 ≤ a ≤ b ≤ 10^{18}1 ≤ x ≤
10^{18}入力入力は以下の形式で標準入力から与えられる。a b x出力a 以上 b
以下の整数のうち、x で割り切れるものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc048/submissions/4267251
// 提出ID : 4267251
// 問題ID : abc048_b
// コンテストID : abc048
// ユーザID : xryuseix
// コード長 : 679
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll i, a, b, x, one, two;
  cin >> a >> b >> x;
  if (a - 1 >= 0)
    one = (a - 1) / x + 1;
  else
    one = 0;
  if (b >= 0)
    two = b / x + 1;
  else
    two = 0;
  cout << two - one << endl;

  return 0;
}