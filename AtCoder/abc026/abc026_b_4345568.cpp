/*
問題文の引用元：https://atcoder.jp/contests/abc026/tasks/abc026_b
B - N重丸Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は、丸が大好きです。今日も、原点を中心とした大きさの違う円を N
個書きました。その円の集合に対し、外側から赤白交互に色を塗ったとき、赤く塗られる部分の面積を出力しなさい。入力入力は以下の形式で標準入力から与えられる。NR_1R_2:R_N1
行目には、円の個数を表す整数 N(1≦N≦1000)  が与えられる。2 行目から N
行は、円の半径の情報を表す N 個の整数が、1 行ずつ与えられる。そのうち i 番目は、
i 番目の円の半径を表す整数 R_i (1 ≦ R_i ≦ 1000) である。i ≠ j の時、 R_i ≠ R_j
を満たす。出力赤く塗られる部分の面積を 1
行で出力せよ。答えは、相対誤差または絶対誤差が 10^{-6}
以下であれば許容される。出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc026/submissions/4345568
// 提出ID : 4345568
// 問題ID : abc026_b
// コンテストID : abc026
// ユーザID : xryuseix
// コード長 : 793
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

  int i, n;
  double ans = 0;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  for (i = 0; i < n; i++) {
    if (i % 2 == 0)
      ans += a[n - 1 - i] * a[n - 1 - i];
    else
      ans -= a[n - 1 - i] * a[n - 1 - i];
  }
  printf("%.7f\n", 3.1415926535 * ans);

  return 0;
}
