/*
問題文の引用元：https://atcoder.jp/contests/abc127/tasks/abc127_c
C - Prison
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 枚の ID カードと M 個のゲートがあります。i 番目のゲートは L_i, L_i+1,
..., R_i 番目の ID カードのうちどれか 1 枚を持っていれば通過できます。1
枚だけで全てのゲートを通過できる ID カードは何枚あるでしょうか。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq M \leq 10^51 \leq L_i \leq
R_i \leq N入力入力は以下の形式で標準入力から与えられる。N ML_1 R_1L_2
R_2\vdotsL_M R_M出力1 枚だけで全てのゲートを通過できる ID
カードの枚数を出力せよ。



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
  int l = 1, r = n;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    l = max(l, a);
    r = min(r, b);
  }
  if (l > r)
    fin(0);
  else
    fin(r - l + 1);
}
