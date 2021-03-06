/*
引用元：https://atcoder.jp/contests/abc137/tasks/abc137_e
E - Coins RespawnEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc137/submissions/12557322
// 提出ID : 12557322
// 問題ID : abc137_e
// コンテストID : abc137
// ユーザID : xryuseix
// コード長 : 5076
// 実行時間 : 224



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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr double EPS = 1e-9;

// 頂点fromから頂点toへのコストcostの辺
struct bf_edge {
  ll from;
  ll to;
  ll cost;
};

class Bellman_Ford {
public:
  vector<bf_edge> es; // 辺
  vector<ll> d;       // d[i]...頂点sから頂点iまでの最短距離
  ll V, E;            // Vは頂点数、Eは辺数

  Bellman_Ford(ll v, ll e) {
    V = v;
    E = e;
    d = vector<ll>(v);
  }

  void add(ll from, ll to, ll cost) {
    bf_edge ed = {from, to, cost};
    es.push_back(ed);
  }

  // s番目の頂点から各頂点INFへの最短距離を求める
  void shortest_path(ll s) {
    for (ll i = 0; i < V; i++) {
      d[i] = LLINF;
    }
    d[s] = 0;
    while (true) {
      bool update = false;
      for (ll i = 0; i < E; i++) {
        bf_edge e = es[i];
        if (d[e.from] != LLINF && d[e.to] > d[e.from] + e.cost) {
          d[e.to] = d[e.from] + e.cost;
          update = true;
        }
      }
      if (!update)
        break;
    }
  }
  // trueなら負の閉路が存在する
  bool is_nagative_loop(ll s) {
    for (ll i = 0; i < V; i++) {
      d[i] = LLINF;
    }
    d[s] = 0;
    for (ll i = 0; i < 3 * V; i++) {
      for (ll j = 0; j < E; j++) {
        bf_edge e = es[j];
        if (d[e.to] > d[e.from] + e.cost) {
          d[e.to] = d[e.from] + e.cost;

          // 3n回目にも更新があるなら負の閉路が存在する
          if (i == V - 1)
            return true;
        }
      }
    }
    return false;
  }
};

void dfs(int pos, vvi &v, vi &ok) {
  ok[pos] = 1;
  for (auto i : v[pos]) {
    if (!ok[i])
      dfs(i, v, ok);
  }
}

int main() {

  ll n, m, k;
  cin >> n >> m >> k;
  vll a(m), b(m), c(m);
  vvi v(n), rv(n);
  vi ok(n, 0), ok2(n, 0);
  rep(i, m) {
    ll A, B, C;
    cin >> A >> B >> C;
    A--;
    B--;
    C -= k;
    C = -C;
    a[i] = A;
    b[i] = B;
    c[i] = C;
    v[A].pb(B);
    rv[B].pb(A);
  }
  dfs(0, v, ok);
  dfs(n - 1, rv, ok2);
  vvi edge;
  rep(i, m) {
    if (ok[a[i]] && ok[b[i]] && ok2[a[i]] && ok2[b[i]]) {
      vi v;
      v.pb(a[i]);
      v.pb(b[i]);
      v.pb(c[i]);
      edge.pb(v);
    }
  }
  Bellman_Ford bf(n, edge.size());
  rep(i, edge.size()) { bf.add(edge[i][0], edge[i][1], edge[i][2]); }
  if (bf.is_nagative_loop(0)) {
    fin(-1);
  } else {
    ll ans = bf.d[n - 1] * (-1);
    fin(max(ans, 0LL));
  }
}
