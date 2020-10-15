/*
問題文の引用元：https://atcoder.jp/contests/abc067/tasks/abc067_b
B - Snake ToyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけくんは N 本の棒を持っています。i 番目の棒の長さは l_i
です。すぬけくんは K
本の棒を選んでつなげて、ヘビのおもちゃを作りたいです。ヘビのおもちゃの長さは選んだ棒たちの長さの総和で表されます。ヘビのおもちゃの長さとしてありうる長さのうち、最大値を求めなさい。
制約1 \leq K \leq N \leq 501 \leq l_i \leq 50l_i
は整数入力入力は以下の形式で標準入力から与えられる。N Kl_1 l_2 l_3 ...
l_{N}出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc067/submissions/4263536
// 提出ID : 4263536
// 問題ID : abc067_b
// コンテストID : abc067
// ユーザID : xryuseix
// コード長 : 689
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

  int i, n, k;
  cin >> n >> k;
  int l[n], ans = 0;
  for (i = 0; i < n; i++)
    cin >> l[i];
  sort(l, l + n);
  for (i = n - k; i < n; i++) {
    ans += l[i];
  }
  cout << ans << endl;

  return 0;
}
