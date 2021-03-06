/*
引用元：https://atcoder.jp/contests/abc129/tasks/abc129_c
C - Typical StairsEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc129/submissions/5847042
// 提出ID : 5847042
// 問題ID : abc129_c
// コンテストID : abc129
// ユーザID : xryuseix
// コード長 : 1742
// 実行時間 : 10



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
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int m, n, i;
  cin >> n >> m;
  vector<ll> a(m, 0);
  rep(i, m) cin >> a[i];
  vector<ll> dp(n + 100, 0);
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  rep(i, m) dp[a[i]] = -1;
  // rep(i,n)cout<<dp[i]<<" ";
  for (i = 1; i < n + 10; i++) {
    if (dp[i] == -1)
      dp[i] = 0;
    else if (i == 1)
      dp[1] = 1;
    else if (i == 2 && dp[1] == 0)
      dp[2] = 1;
    else if (i == 2)
      dp[2] = 2;
    else {

      dp[i] = dp[i - 1] + dp[i - 2];
      dp[i] %= P;
      // cout<<"i:"<<i<<" "<<dp[i]<<endl;
    }
  }
  cout << dp[n] << endl;
  //////////////////////////////////////////////////////
  return 0;
}
