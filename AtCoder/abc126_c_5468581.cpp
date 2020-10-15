/*
引用元：https://atcoder.jp/contests/abc126/tasks/abc126_c
C - Dice and CoinEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc126/submissions/5468581
// 提出ID : 5468581
// 問題ID : abc126_c
// コンテストID : abc126
// ユーザID : xryuseix
// コード長 : 1476
// 実行時間 : 5



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

  double ans = 0, bot, sit, t;
  int i, n, k;
  cin >> n >> k;
  for (i = 1; i <= n; i++) {
    bot = sit = 1;
    t = max(0.0, ceil(log2((double)k / (double)i)));
    //		cout<<log2(k/i)<<" "<<t<<endl;
    bot = pow(2, t);
    bot *= n;
    //		cout<<sit<<" "<<bot<<endl;
    ans += sit / bot;
    //		cout<<sit/bot<<endl;
  }
  printf("%.11f\n", ans);

  //////////////////////////////////////////////////////
  return 0;
}
