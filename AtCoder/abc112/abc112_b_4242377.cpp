/*
問題文の引用元：https://atcoder.jp/contests/abc112/tasks/abc112_b
B -
Time Limit  ExceededEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 外出している X さんは、ABC
に参加するためにスマートウォッチで最適な帰宅経路を調べることにしました。スマートウォッチであるあなたは、N
個の帰宅経路を見つけました。X さんが i 番目の経路を使う場合、コスト c_i
かけて時間 t_i で帰宅できます。時間 T
以内に帰宅できる経路のうち、コストが最小となる経路のコストを求めてください。
制約入力はすべて整数である1 \leq N \leq 1001 \leq T \leq 10001 \leq c_i \leq
10001 \leq t_i \leq 1000各 (c_i, t_i)
の組は異なる入力入力は以下の形式で標準入力から与えられる。N Tc_1 t_1c_2 t_2:c_N
t_N出力時間 T
以内に帰宅できる経路のうち、コストが最小となる経路のコストを出力せよ。ただし、どの経路を使っても時間
T 以内に帰宅できない場合、TLE と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc112/submissions/4242377
// 提出ID : 4242377
// 問題ID : abc112_b
// コンテストID : abc112
// ユーザID : xryuseix
// コード長 : 756
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

  int n, t;
  cin >> n >> t;
  int i, a[n][2], ans = 1000000;
  for (i = 0; i < n; i++)
    cin >> a[i][0] >> a[i][1];

  for (i = 0; i < n; i++) {
    if (a[i][1] <= t && a[i][0] < ans)
      ans = a[i][0];
  }
  if (ans == 1000000)
    cout << "TLE" << endl;
  else
    cout << ans << endl;

  return 0;
}
