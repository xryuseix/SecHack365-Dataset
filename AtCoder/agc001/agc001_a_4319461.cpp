/*
問題文の引用元：https://atcoder.jp/contests/agc001/tasks/agc001_a
A - BBQ EasyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 高橋君はバーベキューをしようとしています。バーベキューでは 2
本の串にいくつかの具材を刺した串焼きを N 個作る予定です。串焼きの例串は 2N
本あり、i 番目の串の長さは L_i です。具材は無限に用意されています。串を 2
本組にして具材を刺して串焼きにするのですが、2 本の串のうち短い方の長さを x
とすると、串焼きには最大 x
個の具材を刺すことができます。うまく串を組み合わせたとき、N
個の串焼きに刺すことのできる具材の個数の和の最大値はいくらになるでしょうか？
制約1≦N≦1001≦L_i≦100L_i
は整数である。入力入力は以下の形式で標準入力から与えられる。NL_1 L_2 ...
L_{2N}出力N 個の串焼きに刺すことのできる具材の個数の和の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc001/submissions/4319461
// 提出ID : 4319461
// 問題ID : agc001_a
// コンテストID : agc001
// ユーザID : xryuseix
// コード長 : 745
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

  int n, i, ans = 0;
  cin >> n;
  int l[2 * n];
  for (i = 0; i < 2 * n; i++)
    cin >> l[i];
  sort(l, l + 2 * n);
  for (i = 0; i < 2 * n; i += 2) {
    ans += min(l[i], l[i + 1]);
  }
  cout << ans << endl;

  return 0;
}
