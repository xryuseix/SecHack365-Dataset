/*
問題文の引用元：https://atcoder.jp/contests/abc135/tasks/abc135_c
C - City Savers
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N+1 個の街があり、i 番目の街は A_i 体のモンスターに襲われています。N
人の勇者が居て、i 番目の勇者は i 番目または i+1
番目の街を襲っているモンスターを合計で B_i 体まで倒すことができます。N
人の勇者がうまく協力することで、合計して最大で何体のモンスターを倒せるでしょうか。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq A_i \leq 10^91 \leq B_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ... A_{N+1}B_1 B_2
... B_N出力合計して倒せるモンスターの数の最大値を出力せよ。



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

  ll n;
  cin >> n;
  n++;
  vll v(n), w(n - 1);
  rep(i, n) cin >> v[i];
  rep(i, n - 1) cin >> w[i];

  vll bv = v;
  rep(i, n - 1) {
    if (v[i] <= w[i]) {
      w[i] -= v[i];
      v[i] = 0;
      v[i + 1] -= w[i];
      v[i + 1] = max(v[i + 1], 0LL);
    } else {
      v[i] -= w[i];
    }
  }
  ll ans = 0;
  // rep(i,n)cout<<v[i]
  rep(i, n) { ans += bv[i] - v[i]; }
  fin(ans);
}
