/*
問題文の引用元：https://atcoder.jp/contests/abc147/tasks/abc147_e
E - Balanced PathEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 縦 H マス、横 W マスのグリッドがあります。上から i 行目、左から j
列目のマスをマス (i,j) と呼びます。マス (i,j) には 2 つの数 A_{ij}, B_{ij}
が書かれています。高橋君はまず各マスについて、2
つの数の一方を赤く、もう一方を青く塗ります。そのあと、マス (1,1) からマス (H,W)
まで移動します。高橋君は 1 回の行動でマス (i,j) からマス (i+1,j) またはマス
(i,j+1)
に動くことができます。グリッドからはみ出すような移動はできません。このときの移動経路
(マス (1,1) とマス (H,W) を含む)
について、「経路上のマスの赤く塗られた数の和」と「経路上のマスの青く塗られた数の和」の差の絶対値を
偏り
と呼ぶことにします。高橋君は、色の塗り方と移動経路を適切に選ぶことで偏りを小さくしたいです。偏りの最小値を求めてください。
制約2 \leq H \leq 802 \leq W \leq 800 \leq A_{ij} \leq 800 \leq B_{ij} \leq
80入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。H
WA_{11} A_{12} \ldots A_{1W}:A_{H1} A_{H2} \ldots A_{HW}B_{11} B_{12} \ldots
B_{1W}:B_{H1} B_{H2} \ldots B_{HW}出力偏りの最小値を求めよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc147/submissions/12469758
// 提出ID : 12469758
// 問題ID : abc147_e
// コンテストID : abc147
// ユーザID : xryuseix
// コード長 : 3163
// 実行時間 : 38



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
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

#define MX 12820

int main() {

  int h, w;
  scanf("%d %d", &h, &w);
  vvi a(h, vi(w)), b(h, vi(w)), ab(h, vi(w));
  rep(i, h) rep(j, w) { scanf("%d", &a[i][j]); }
  rep(i, h) rep(j, w) {
    scanf("%d", &b[i][j]);
    ab[i][j] = abs(a[i][j] - b[i][j]);
  }
  vector<vector<bitset<2 * MX>>> dp(h + 1, vector<bitset<2 * MX>>(w + 1));

  dp[0][0][MX + ab[0][0]] = 1;
  dp[0][0][MX - ab[0][0]] = 1;
  rep(i, h) {
    rep(j, w) {
      if (i + 1 < h)
        dp[i + 1][j] |= dp[i][j] << ab[i + 1][j];
      if (i + 1 < h)
        dp[i + 1][j] |= dp[i][j] >> ab[i + 1][j];
      if (j + 1 < w)
        dp[i][j + 1] |= dp[i][j] << ab[i][j + 1];
      if (j + 1 < w)
        dp[i][j + 1] |= dp[i][j] >> ab[i][j + 1];
    }
  }
  int ans = INF;
  rep(i, MX * 2) {
    if (dp[h - 1][w - 1][i])
      chmin(ans, abs(i - MX));
  }
  fin(ans);
}
