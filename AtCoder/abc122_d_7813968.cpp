/*
引用元：https://atcoder.jp/contests/abc122/tasks/abc122_d
D - We Like AGCEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc122/submissions/7813968
// 提出ID : 7813968
// 問題ID : abc122_d
// コンテストID : abc122
// ユーザID : xryuseix
// コード長 : 2568
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int dp[101][4][4][4];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  ll ans = 0;
  dp[0][3][3][3] = 1;
  for (int len = 0; len < n; len++) {
    for (int c1 = 0; c1 < 4; c1++) {
      for (int c2 = 0; c2 < 4; c2++) {
        for (int c3 = 0; c3 < 4; c3++) {
          for (int a = 0; a < 4; a++) {
            if (a == 2 && c1 == 1 && c2 == 0)
              continue;
            if (a == 2 && c1 == 0 && c2 == 1)
              continue;
            if (a == 1 && c1 == 2 && c2 == 0)
              continue;
            if (a == 2 && c1 == 1 && c3 == 0)
              continue;
            if (a == 2 && c2 == 1 && c3 == 0)
              continue;

            dp[len + 1][a][c1][c2] += dp[len][c1][c2][c3];
            dp[len + 1][a][c1][c2] %= MOD;
          }
        }
      }
    }
  }

  for (int c1 = 0; c1 < 4; c1++) {
    for (int c2 = 0; c2 < 4; c2++) {
      for (int c3 = 0; c3 < 4; c3++) {
        ans += dp[n][c1][c2][c3];
        ans %= MOD;
      }
    }
  }

  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
