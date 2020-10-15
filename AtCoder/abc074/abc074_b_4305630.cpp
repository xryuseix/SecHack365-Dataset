/*
問題文の引用元：https://atcoder.jp/contests/abc074/tasks/abc074_b
B - Collecting Balls (Easy Version)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点: 200 点
問題文 : xy 平面上に N 個のボールがあります。このうち i 番目のボールの位置は
(x_i, i) です。したがって、N 本の直線 y = 1, y = 2, ..., y = N の上にそれぞれ 1
個ずつボールがあることになります。すぬけ君は、これらのボールを回収するために、タイプ
A, B のロボットを N 台ずつ用意しました。さらに、タイプ A のロボットのうち i
台目のものを位置 (0, i) に、タイプ B のロボットのうち i 台目のものを位置 (K, i)
に設置しました。したがって、N 本の直線 y = 1, y = 2, ..., y = N の上にそれぞれ 1
台のタイプ A のロボットと、1 台のタイプ B
のロボットが設置されたことになります。それぞれのタイプのロボットは起動されると以下のように動作します。タイプ
A のロボットは、位置 (0, a) で起動されると、直線 y = a
上にあるボールの位置まで移動し、ボールを回収してもとの位置 (0, a)
に戻って停止する。そのようなボールが存在しない場合は何もせずに停止する。タイプ B
のロボットは、位置 (K, b) で起動されると、直線 y = b
上にあるボールの位置まで移動し、ボールを回収してもとの位置 (K, b)
に戻って停止する。そのようなボールが存在しない場合は何もせずに停止する。これら
2N
台のロボットのうちいくつかを起動してボールをすべて回収するとき、ロボットの移動距離の総和として考えられる値のうち最小のものを求めてください。
制約1≦N≦1001≦K≦1000 < x_i <
K入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NKx_1
x_2 ...
x_N出力ロボットの移動距離の総和として考えられる値のうち最小のものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc074/submissions/4305630
// 提出ID : 4305630
// 問題ID : abc074_b
// コンテストID : abc074
// ユーザID : xryuseix
// コード長 : 669
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

  int tmp, i, n, k, ans = 0;
  cin >> n >> k;
  for (i = 0; i < n; i++) {
    cin >> tmp;
    ans += min(tmp, k - tmp) * 2;
  }
  cout << ans << endl;

  return 0;
}
