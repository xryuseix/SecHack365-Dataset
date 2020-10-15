/*
問題文の引用元：https://atcoder.jp/contests/abc175/tasks/abc175_e
E - Picking GoodsEditorial
Time Limit : 3 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : R 行 C 列に並んだマス目に K 個のアイテムが置いてあります。1 \leq i \leq
R 行目、 1 \leq j \leq C 列目のマスを (i, j) と表すとき、i 番目のアイテムはマス
(r_i, c_i) に存在し、その価値は v_i です。高橋君はマス (1, 1)
からスタートしてゴールのマス (R, C) まで移動します。高橋君はマス (i, j)
にいるとき、次には (存在すれば) マス (i + 1, j) またはマス (i, j + 1)
に移動することができます。高橋君は通ったマス (スタートとゴールも含む)
のアイテムを拾うことができます。ただし、マス目の同じ行では 3
個までしかアイテムを拾うことができません。通ったマスにアイテムがある場合に、そのアイテムを拾わないことはできます。高橋君が拾うことのできるアイテムの価値の合計としてありうる値の最大値を求めてください。
制約1 \leq R, C \leq 30001 \leq K \leq \min(2 \times 10^5, R \times C)1 \leq r_i
\leq R1 \leq c_i \leq C(r_i, c_i) \neq (r_j, c_j) (i \neq j)1 \leq v_i \leq
10^9入力は全て整数である入力入力は以下の形式で標準入力から与えられる。R C Kr_1
c_1 v_1r_2 c_2 v_2:r_K c_K
v_K出力高橋君が拾うことのできるアイテムの価値の合計としてありうる値の最大値を出力せよ。



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
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
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
#define fi first
#define se second
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
  irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
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
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

int main() {

  int h, w, K;
  cin >> h >> w >> K;
  vvll v(h + 1, vll(w + 1));
  vector<vvll> dp(h + 1, vvll(w + 1, vll(4, 0)));
  rep(i, K) {
    int r, c, V;
    cin >> r >> c >> V;
    v[r][c] += V;
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      rep(k, 4) { chmax(dp[i][j][0], dp[i - 1][j][k]); }
      rep(k, 4) {
        if (!v[i][j] || k == 3) {
          chmax(dp[i][j][k], dp[i][j - 1][k]);
        } else {
          chmax(dp[i][j][1], dp[i][j][0] + v[i][j]);
          chmax(dp[i][j][k + 1], dp[i][j - 1][k] + v[i][j]);
          chmax(dp[i][j][k], dp[i][j - 1][k]);
        }
      }
    }
  }
  fin(max({dp[h][w][0], dp[h][w][1], dp[h][w][2], dp[h][w][3]}));
}
