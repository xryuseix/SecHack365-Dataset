/*
問題文の引用元：https://atcoder.jp/contests/abc076/tasks/abc076_a
A - Rating GoalEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
高橋君はあるプログラミングコンテストが行われているサイトに参加しています。
ここでは,
コンテストに出場した時にこの順位に応じて「パフォーマンス」というものがつき、それによってレーティング
(整数とは限らない) が次のように変化します。現在のレーティングを a とする。
次のコンテストで, パフォーマンス b を取ったとする。  そのとき, レーティングは a
と b の平均まで変化する。  例えば, レーティングが 1
の人が次のコンテストでパフォーマンス 1000 を取ったら, レーティングは 1 と 1000
の平均である 500.5 になります。  高橋君は, 現在のレーティングが R で,
次のコンテストでレーティングをちょうど G にしたいと思っています。そのとき,
高橋君が取るべきパフォーマンスを求めなさい。
制約0 \leq R, G \leq
4500入力はすべて整数入力入力は以下の形式で標準入力から与えられる。
RG出力高橋君が取るべきパフォーマンスを出力しなさい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc076/submissions/4238822
// 提出ID : 4238822
// 問題ID : abc076_a
// コンテストID : abc076
// ユーザID : xryuseix
// コード長 : 493
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
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

  int r, g;
  cin >> r >> g;
  cout << g + g - r << endl;

  return 0;
}
