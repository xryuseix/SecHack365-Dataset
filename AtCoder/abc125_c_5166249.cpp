/*
引用元：https://atcoder.jp/contests/abc125/tasks/abc125_c
C - GCD on BlackboardEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc125/submissions/5166249
// 提出ID : 5166249
// 問題ID : abc125_c
// コンテストID : abc125
// ユーザID : xryuseix
// コード長 : 1497
// 実行時間 : 13



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

int gcd(int x, int y) {
  int t;
  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i, n, j;
  cin >> n;
  int a[n];
  rep(i, n) cin >> a[i];
  vector<int> l, r(n, 0);
  l.push_back(a[0]);
  rep(i, n - 1) l.push_back(gcd(a[i + 1], l[i]));
  r[n - 1] = a[n - 1];
  for (i = n - 2; i >= 0; i--)
    r[i] = gcd(a[i], r[i + 1]);

  int ans = 1;
  for (i = 0; i < n; i++) { //消す要素
    if (i != 0 && i != n - 1) {
      ans = max(ans, gcd(l[i - 1], r[i + 1]));
    } else if (i == 0)
      ans = max(ans, r[1]);
    else
      ans = max(ans, l[n - 2]);
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
