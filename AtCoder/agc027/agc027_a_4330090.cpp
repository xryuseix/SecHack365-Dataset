/*
問題文の引用元：https://atcoder.jp/contests/agc027/tasks/agc027_a
A - Candy Distribution AgainEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : N 人の子供がいます。子供たちには 1, 2, ..., N
と番号が振られています。すぬけ君は、x
個のお菓子を子供たちに配ることにしました。このとき、すぬけ君は x
個のお菓子をすべて配り切らなければなりません。なお、お菓子を貰わない子供がいても構いません。各
i (1 \leq i \leq N) について、子供 i はちょうど a_i
個のお菓子を貰うと喜びます。すぬけ君は、お菓子を配る方法を工夫し、喜ぶ子供の人数を最大化しようとしています。喜ぶ子供の人数の最大値を求めてください。
制約入力はすべて整数である。2 \leq N \leq 1001 \leq x \leq 10^91 \leq a_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。N xa_1 a_2 ...
a_N出力喜ぶ子供の人数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc027/submissions/4330090
// 提出ID : 4330090
// 問題ID : agc027_a
// コンテストID : agc027
// ユーザID : xryuseix
// コード長 : 789
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

  int i, n, x, ans = 0;
  cin >> n >> x;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  for (i = 0; i < n; i++) {
    if (i == n - 1 && x > a[i])
      break;
    if (x >= a[i]) {
      x -= a[i];
      ans++;
    } else
      break;
  }
  cout << ans << endl;

  return 0;
}
