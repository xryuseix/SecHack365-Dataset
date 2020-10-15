/*
問題文の引用元：https://atcoder.jp/contests/cpsco2019-s2/tasks/cpsco2019_s2_a
A - Scholarship RepaymentEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : この春から社会人になったゴジラさんは、 M 万円の奨学金を N
ヶ月間に分割して返済しようとしています。毎月の返済額は、以下のルールによって決まっています。
i ヶ月目( 1 \leq i \leq N-1 )： M/N の小数点以下を切り捨てた金額(万円)。 N
ヶ月目：未返済の金額全て。ゴジラさんは N ヶ月目に奨学金を何万円返済しますか。
制約入力はすべて整数である。2 \leq N \leq M \leq 100
入力入力は以下の形式で標準入力から与えられる。M N出力ゴジラさんが N
ヶ月目に返済する金額を万円単位で出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/cpsco2019-s2/submissions/5388265
// 提出ID : 5388265
// 問題ID : cpsco2019_s2_a
// コンテストID : cpsco2019-s2
// ユーザID : xryuseix
// コード長 : 1098
// 実行時間 : 1



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
#define P 1000000007
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

  int m, n, i;
  cin >> m >> n;
  cout << max(0, m - ((m / n) * (n - 1))) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
