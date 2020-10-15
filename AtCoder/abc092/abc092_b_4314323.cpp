/*
問題文の引用元：https://atcoder.jp/contests/abc092/tasks/abc092_b
B - ChocolateEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : ある合宿におやつとしてチョコレートが何個か準備されました。合宿は N
人が参加して D 日間行われました。i 人目の参加者 (1 \leq i \leq N) は合宿の 1,
A_i + 1, 2A_i + 1, ... 日目にチョコレートを 1
個ずつ食べました。その結果、合宿終了後に残っていたチョコレートは X
個となりました。また、合宿の参加者以外がチョコレートを食べることはありませんでした。合宿開始前に準備されていたチョコレートの個数を求めてください。
制約1 \leq N \leq 1001 \leq D \leq 1001 \leq X \leq 1001 \leq A_i \leq 100 (1
\leq i \leq N)入力入力は以下の形式で標準入力から与えられる。ND
XA_1A_2:A_N出力合宿開始前に準備されていたチョコレートの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc092/submissions/4314323
// 提出ID : 4314323
// 問題ID : abc092_b
// コンテストID : abc092
// ユーザID : xryuseix
// コード長 : 723
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

  int i, n, d, a, x, ans = 0;
  cin >> n >> d >> x;
  for (i = 0; i < n; i++) {
    cin >> a;
    int day = 0;
    for (int j = 1; j <= d; j += a)
      day++;
    ans += day;
  }
  cout << ans + x << endl;

  return 0;
}
