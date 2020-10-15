/*
問題文の引用元：https://atcoder.jp/contests/abc154/tasks/abc154_e
E - Almost Everywhere Zero
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 1 以上 N 以下の整数であって、 10 進法で表したときに、0
でない数字がちょうど K 個あるようなものの個数を求めてください。
制約1 \leq N < 10^{100}1 \leq K \leq
3入力入力は以下の形式で標準入力から与えられる。NK出力条件を満たす数の個数を出力せよ。



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

  string s;
  cin >> s;
  int K;
  cin >> K;
  int dp[110][2][4];
  rep(i, s.size() + 10) rep(j, 2) rep(k, 4) dp[i][j][k] = 0;
  dp[0][0][0] = 1;
  rep(i, 110) rep(j, 2) rep(k, 4) {
    if (i > s.size())
      continue;
    rep(d, 10) {
      int ni = i + 1, nj = j, nk = k;
      if (d != 0)
        nk++;
      if (nk > K)
        continue;
      if (nj == 0) {
        if (s[i] - '0' < d)
          continue;
        else if (s[i] - '0' > d)
          nj = 1;
      }
      dp[ni][nj][nk] += dp[i][j][k];
    }
  }
  fin(dp[s.size()][0][K] + dp[s.size()][1][K]);
}
