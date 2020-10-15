/*
問題文の引用元：https://atcoder.jp/contests/abc153/tasks/abc153_e
E - Crested Ibis vs Monster
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : トキはモンスターと戦っています。モンスターの体力は H です。トキは N
種類の魔法が使え、i 番目の魔法を使うと、モンスターの体力を A_i
減らすことができますが、トキの魔力を B_i
消耗します。同じ魔法は何度でも使うことができます。魔法以外の方法でモンスターの体力を減らすことはできません。モンスターの体力を
0
以下にすればトキの勝ちです。トキがモンスターに勝つまでに消耗する魔力の合計の最小値を求めてください。
制約1 \leq H \leq 10^41 \leq N \leq 10^31 \leq A_i \leq 10^41 \leq B_i \leq
10^4入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。H
NA_1 B_1:A_N B_N出力トキがモンスターに勝つまでに消耗する魔力の最小値を出力せよ。



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

  int h, n;
  cin >> h >> n;
  vi dp(h + 10, INF);
  dp[h] = 0;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  for (int i = h; i >= 0; i--) {
    if (dp[i] == INF)
      continue;
    for (int j = 0; j < n; j++) {
      int next = max(i - a[j], 0);
      chmin(dp[next], dp[i] + b[j]);
    }
  }
  cout << dp[0] << endl;
}
