/*
問題文の引用元：https://atcoder.jp/contests/abc146/tasks/abc146_d
D - Coloring Edges on TreeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 頂点の木 G が与えられます。頂点には 1 から N
までの番号がついており、i 本目の辺は頂点 a_i と頂点 b_i を結んでいます。G
の辺を何色かで塗り分けることを考えます。このとき、各頂点について、その頂点を端点に持つ辺の色がすべて相異なるようにしたいです。上記の条件を満たす塗り分けの中で、使用する色の数が最小であるようなものを
1 つ構築してください。
制約 2 \le N \le 10^5  1 \le a_i \lt b_i \le N
入力はすべて整数与えられるグラフは木である入力入力は以下の形式で標準入力から与えられる。Na_1
b_1a_2 b_2\vdotsa_{N-1} b_{N-1}出力出力は N 行からなる。1 行目に使用する色の数 K
を出力せよ。i+1 行目 (1 \le i \le N-1) に i 番目の辺の色を表す整数 c_i
を出力せよ。ここで 1 \le c_i \le K でなければならない。
問題文 :
中の条件を満たし、使用する色の数が最小であるような塗り分けが複数存在するときは、そのうちのどれを出力しても構わない。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc146/submissions/12283103
// 提出ID : 12283103
// 問題ID : abc146_d
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 3130
// 実行時間 : 295



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

int color = 0;
int root = 0;
map<pair<int, int>, int> m;
void dfs(int pos, int bef, int c, vvi &g) {
  int nowColor = 1;
  for (auto i : g[pos]) {
    if (bef == i)
      continue;
    if (c == nowColor)
      nowColor++;
    m[mp(min(pos, i), max(pos, i))] = nowColor;
    dfs(i, pos, nowColor, g);
    nowColor++;
  }
}

int main() {

  int n;
  cin >> n;
  vvi g(n);
  vi v(n, 0);
  vpii w(n);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].pb(b);
    g[b].pb(a);
    v[a]++;
    v[b]++;
    w[i] = mp(a, b);
  }
  rep(i, n) {
    if (color < v[i]) {
      color = v[i];
      root = i;
    }
  }
  dfs(root, -1, -1, g);
  fin(color);
  rep(i, n - 1) { cout << m[mp(w[i].fi, w[i].se)] << endl; }
}
