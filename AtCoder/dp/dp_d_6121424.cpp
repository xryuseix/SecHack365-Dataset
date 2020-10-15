/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_d
D - Knapsack 1Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : N 個の品物があります。品物には 1, 2, \ldots, N
と番号が振られています。各 i (1 \leq i \leq N) について、品物 i の重さは w_i
で、価値は v_i です。太郎君は、N
個の品物のうちいくつかを選び、ナップサックに入れて持ち帰ることにしました。ナップサックの容量は
W であり、持ち帰る品物の重さの総和は W
以下でなければなりません。太郎君が持ち帰る品物の価値の総和の最大値を求めてください。
制約入力はすべて整数である。1 \leq N \leq 1001 \leq W \leq 10^51 \leq w_i \leq
W1 \leq v_i \leq 10^9入力入力は以下の形式で標準入力から与えられる。N Ww_1 v_1w_2
v_2:w_N v_N出力太郎君が持ち帰る品物の価値の総和の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/6121424
// 提出ID : 6121424
// 問題ID : dp_d
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 1804
// 実行時間 : 30



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, W;
  cin >> n >> W;

  vector<ll> w(n + 1), v(n + 1);
  rep(i, n) { cin >> w[i + 1] >> v[i + 1]; }
  ll dp[n + 1][W + 1];
  rep(i, W + 1) dp[0][i] = 0;
  for (ll i = 1; i <= n; i++) {
    for (ll j = 0; j <= W; j++) {
      if (j - w[i] >= 0) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[n][W] << endl; /*
       rep(i,n+1){
           rep(j,W+1)cout<<dp[i][j]<<" ";
           cout<<endl;
       }*/

  //////////////////////////////////////////////////////
  return 0;
}
