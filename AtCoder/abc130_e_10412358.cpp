/*
引用元：https://atcoder.jp/contests/abc130/tasks/abc130_e
E - Common SubsequenceEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc130/submissions/10412358
// 提出ID : 10412358
// 問題ID : abc130_e
// コンテストID : abc130
// ユーザID : xryuseix
// コード長 : 2437
// 実行時間 : 59



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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main(void) {

  int n, m;
  cin >> n >> m;
  vi v(n + 1), w(m + 1);
  rep(i, n) cin >> v[i];
  rep(i, m) cin >> w[i];
  ll dp[2][n + 10][m + 10];
  rep(i, n + 10) rep(j, m + 10) {
    dp[0][i][j] = 0;
    dp[1][i][j] = 0;
  }

  dp[0][0][0] = 1;

  rep(i, n + 1) rep(j, m + 1) {
    dp[0][i + 1][j] += dp[0][i][j];
    dp[0][i + 1][j] %= MOD;
    dp[1][i][j] += dp[0][i][j];
    dp[1][i][j] %= MOD;
    dp[1][i][j + 1] += dp[1][i][j];
    dp[1][i][j + 1] %= MOD;
    if (v[i] == w[j]) {
      dp[0][i + 1][j + 1] += dp[1][i][j];
      dp[0][i + 1][j + 1] %= MOD;
    }
  }
  cout << dp[1][n][m] << endl;
}
