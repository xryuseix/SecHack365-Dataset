/*
問題文の引用元：https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_c
C - HalcyonEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : いろはちゃんは、最近Halcyon
Daysというものを知りました。いろはちゃんの暦の上で、これは、12 月 N
日の冬至とその前の 1
週間のことを指します。物理好きさんはやさしいのでいろはちゃんにHalcyon
Daysが何日か教えてあげることにしました。冬至の日付である N
が与えられるので、Halcyon Daysの日付を 8 日間出力してください。
制約8 \leq N \leq 31入力\(1\) 行にNが与えられます。N出力Halcyon
Daysの日付を昇順(小さい順)に、\(1\) 行に \(1\) つずつ、計 \(8\)
つ出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/iroha2019-day1/submissions/5202397
// 提出ID : 5202397
// 問題ID : iroha2019_day1_c
// コンテストID : iroha2019-day1
// ユーザID : xryuseix
// コード長 : 1074
// 実行時間 : 2



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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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

  int i, n;
  cin >> n;
  for (i = n - 7; i <= n; i++)
    cout << i << endl;

  //////////////////////////////////////////////////////
  return 0;
}
