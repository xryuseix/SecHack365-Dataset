/*
問題文の引用元：https://atcoder.jp/contests/arc093/tasks/arc093_a
C - Traveling PlanEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : x 軸上に N 個の観光スポットがあり、1, 2, ..., N
の番号がついています。観光スポット i は座標 A_i の点にあります。また、x
軸上を座標 a の点から座標 b の点まで移動するには |a - b| 円かかります。あなたは
x 軸上を旅行する計画を立てました。計画では、最初に座標 0 の点を出発し、N
個の観光スポットを番号順に訪れ、最後に座標 0
の点に戻ってくることになっています。ところが、旅行の直前に急用が入り、N
個すべての観光スポットを訪れる時間的余裕がなくなってしまいました。そこで、ある i
を選び、観光スポット i
を訪れるのを取りやめることにしました。それ以外の観光スポットは予定通り番号順に訪れます。また、最初に座標
0 の点を出発し、最後に座標 0
の点に戻ってくることについても、予定に変更はありません。i = 1, 2, ..., N
それぞれについて、観光スポット i
を訪れるのを取りやめたときの、旅行中の移動にかかる金額の総和を求めてください。
制約2 \leq N \leq 10^5-5000 \leq A_i \leq 5000 (1 \leq i \leq
N)入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N出力N 行出力せよ。このうち i 行目には、観光スポット i
を訪れるのを取りやめたときの、旅行中の移動にかかる金額の総和を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc093/submissions/4657984
// 提出ID : 4657984
// 問題ID : arc093_a
// コンテストID : arc093
// ユーザID : xryuseix
// コード長 : 1194
// 実行時間 : 161



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i, n, d = 0;
  cin >> n;
  int a[n + 2];
  a[0] = a[n + 1] = 0;
  for (i = 1; i < n + 1; i++)
    cin >> a[i];
  for (i = 0; i < n + 1; i++) {
    d += abs(a[i] - a[i + 1]);
    //		cout<<a[i]<<" "<<a[i+1]<<" "<<d<<endl;
  }
  //	cout<<d<<endl;
  for (i = 1; i < n + 1; i++) {
    cout << d - abs(a[i - 1] - a[i]) - abs(a[i] - a[i + 1]) +
                abs(a[i - 1] - a[i + 1]) << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
