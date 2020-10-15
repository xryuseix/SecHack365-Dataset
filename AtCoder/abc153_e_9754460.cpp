/*
引用元：https://atcoder.jp/contests/abc153/tasks/abc153_e
E - Crested Ibis vs Monster
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点

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

// dp[h]:=残り体力がhでn番目の魔法を使った時の最小コスト

int main(void) {
  int n, h;
  cin >> h >> n;
  vi dp(h + 10, INF);
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int ans = INF;
  rep(i, n) { dp[h] = 0; }
  for (int j = h; j > 0; j--) {
    if (dp[j] == INF)
      continue;
    rep(i, n) {
      if (j - a[i] <= 0) {
        chmin(dp[0], dp[j] + b[i]);
      } else {
        chmin(dp[j - a[i]], dp[j] + b[i]);
      }
    }
  }
  fin(dp[0]);

  // rep(i,n) {
  //     rep(j,h+1){
  //         if(dp[i][j]==INF)cout<<"-"<<" ";
  //         else cout<<dp[i][j]<<" ";
  //     }cout<<endl;
  // }
  return 0;
}
