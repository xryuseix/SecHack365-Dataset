/*
問題文の引用元：https://atcoder.jp/contests/agc012/tasks/agc012_a
A - AtCoder Group ContestEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : AtCoder Group Contestの参加者に 3N 人が参加します。i 番目の参加者の
強さ は整数 a_i で表されます。参加者が 3 人 1 組となるようにチームを N
組作ることにしました。1
人の参加者が複数のチームに所属することはできません。チームの強さはチームメンバーの強さのうち
2 番目に大きい値で表されます。例えば、強さが 1,5,2
のメンバーからなるチームの強さは 2 になり、強さが 3,2,3
のメンバーからなるチームの強さは 3 になります。N
組のチームの強さの和としてありうる値のうち、最大の値を求めてください。
制約1 ≦ N ≦ 10^51 ≦ a_i ≦ 10^{9}a_i
は整数入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 ...
a_{3N}出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc012/submissions/4477446
// 提出ID : 4477446
// 問題ID : agc012_a
// コンテストID : agc012
// ユーザID : xryuseix
// コード長 : 752
// 実行時間 : 46



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

  int n, i;
  cin >> n;
  ll sum = 0;
  int a[n * 3];
  for (i = 0; i < n * 3; i++)
    cin >> a[i];
  sort(a, a + n * 3);
  for (i = n; i < 3 * n; i++)
    if ((i - n) % 2 == 0)
      sum += a[i];
  cout << sum << endl;

  return 0;
}
