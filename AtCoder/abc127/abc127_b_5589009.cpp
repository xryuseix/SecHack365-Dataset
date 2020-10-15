/*
問題文の引用元：https://atcoder.jp/contests/abc127/tasks/abc127_b
B - AlgaeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : ある池に生えている藻類は、以下のように成長します。西暦 i
年になる瞬間に生えている重さの合計を x_i グラムとすると、i≥2000
に対して、以下の式が成り立ちます:x_{i+1} = rx_i - Dr, D, x_{2000}
が与えられます。x_{2001}, ..., x_{2010} を計算し、順に出力してください。
制約2 ≤ r ≤ 51 ≤ D ≤ 100D < x_{2000} ≤
200入力はすべて整数入力入力は以下の形式で標準入力から与えられる。r D
x_{2000}出力10 行出力せよ。i 行目 (1 ≤ i ≤ 10) には x_{2000+i}
を整数で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc127/submissions/5589009
// 提出ID : 5589009
// 問題ID : abc127_b
// コンテストID : abc127
// ユーザID : xryuseix
// コード長 : 1277
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
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
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

  ll r, d, x, i;
  cin >> r >> d >> x;
  for (i = 1; i <= 10; i++) {
    cout << r *x - d << endl;
    x = r * x - d;
  }

  //////////////////////////////////////////////////////
  return 0;
}
