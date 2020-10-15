/*
引用元：https://atcoder.jp/contests/abc147/tasks/abc147_e
E - Balanced PathEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc147/submissions/9311419
// 提出ID : 9311419
// 問題ID : abc147_e
// コンテストID : abc147
// ユーザID : xryuseix
// コード長 : 2406
// 実行時間 : 37



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
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int h, w;
  cin >> h >> w;
  vvi a(h, vi(w));
  vvi b(h, vi(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];

  vvi v(h, vi(w));
  const int D = 80 * 160 + 10;
  rep(i, h) rep(j, w) v[i][j] = abs(a[i][j] - b[i][j]);

  bitset<D * 2> dp[h + 10][w + 10];

  dp[0][0][D + v[0][0]] = 1;
  dp[0][0][D - v[0][0]] = 1;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (i)
        dp[i][j] |= dp[i - 1][j] << v[i][j];
      if (i)
        dp[i][j] |= dp[i - 1][j] >> v[i][j];
      if (j)
        dp[i][j] |= dp[i][j - 1] << v[i][j];
      if (j)
        dp[i][j] |= dp[i][j - 1] >> v[i][j];
    }
  }

  for (int i = 0; i < D; i++) {
    if (dp[h - 1][w - 1][D + i] || dp[h - 1][w - 1][D - i]) {
      fin(i);
      break;
    }
  }
}
