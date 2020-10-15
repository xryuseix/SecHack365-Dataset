/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_g
G - Longest PathEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : N 頂点 M 辺の有向グラフ G があります。頂点には 1, 2, \ldots, N
と番号が振られています。各 i (1 \leq i \leq M) について、i 番目の有向辺は頂点
x_i から y_i へ張られています。G は有向閉路を含みません。G
の有向パスのうち、最長のものの長さを求めてください。ただし、有向パスの長さとは、有向パスに含まれる辺の本数のことです。
制約入力はすべて整数である。2 \leq N \leq 10^51 \leq M \leq 10^51 \leq x_i, y_i
\leq Nペア (x_i, y_i) はすべて相異なる。G
は有向閉路を含まない。入力入力は以下の形式で標準入力から与えられる。N Mx_1
y_1x_2 y_2:x_M y_M出力G の有向パスのうち、最長のものの長さを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/10721409
// 提出ID : 10721409
// 問題ID : dp_g
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 2349
// 実行時間 : 72



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
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

vi dp(101010, -1);

int dfs(int pos, vvi &v) {
  if (dp[pos] > 0)
    return dp[pos];
  else if (v[pos].size() == 0) {
    return 0;
  } else {
    int res = 0;
    for (int i = 0; i < v[pos].size(); i++) {
      chmax(res, 1 + dfs(v[pos][i], v));
    }
    return dp[pos] = res;
  }
}

int main() {

  int n, m;
  cin >> n >> m;
  vvi v(n);
  int ans = 0;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    v[a].pb(b);
  }
  rep(i, n) { chmax(ans, dfs(i, v)); }
  fin(ans);
}
