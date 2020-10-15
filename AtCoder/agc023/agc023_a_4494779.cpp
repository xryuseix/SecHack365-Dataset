/*
問題文の引用元：https://atcoder.jp/contests/agc023/tasks/agc023_a
A - Zero-Sum RangesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 長さ N の整数列 A があります。A の 空でない 連続する
部分列であって、その総和が 0
になるものの個数を求めてください。ただし、ここで数えるのは 部分列の取り出し方
であることに注意してください。つまり、ある 2
つの部分列が列として同じでも、取り出した位置が異なるならば、それらは別々に数えるものとします。
制約1 \leq N \leq 2 \times 10^5-10^9 \leq A_i \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N出力A の空でない連続する部分列であって、その総和が 0
になるものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc023/submissions/4494779
// 提出ID : 4494779
// 問題ID : agc023_a
// コンテストID : agc023
// ユーザID : xryuseix
// コード長 : 929
// 実行時間 : 96



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
#include <stack>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
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

  ll a, j, n, i;
  ll ans = 0;
  cin >> n;
  ll cumsum[n + 2];
  cumsum[n + 1] = INF;
  cumsum[0] = 0;
  for (i = 1; i <= n; i++) {
    cin >> a;
    cumsum[i] = a + cumsum[i - 1];
  }
  sort(cumsum, cumsum + n + 2);
  for (i = 0; i < n + 1; i++) {
    j = i + 1;
    while (j < n + 2 && cumsum[i] == cumsum[j])
      j++;
    ans += (j - i - 1) * (j - i) / 2;
    i += j - i - 1;
  }

  cout << ans << endl;

  return 0;
}
