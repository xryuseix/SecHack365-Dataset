/*
引用元：https://atcoder.jp/contests/abc148/tasks/abc148_f
F - Playing Tag on TreeEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc148/submissions/9090470
// 提出ID : 9090470
// 問題ID : abc148_f
// コンテストID : abc148
// ユーザID : xryuseix
// コード長 : 4329
// 実行時間 : 74



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
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

class DIJKSTRA {
public:
  int V;

  struct dk_edge {
    int to;
    int cost;
  };

  typedef pair<int, int> PI; // firstは最短距離、secondは頂点の番号
  vector<vector<dk_edge>> G;
  vector<int> d;    //これ答え。d[i]:=V[i]までの最短距離
  vector<int> prev; //経路復元

  DIJKSTRA(int size) {
    V = size;
    G = vector<vector<dk_edge>>(V);
    prev = vector<int>(V, -1);
  }

  void add(int from, int to, int cost) {
    dk_edge e = {to, cost};
    G[from].push_back(e);
  }

  void dijkstra(int s) {
    // greater<P>を指定することでfirstが小さい順に取り出せるようにする
    priority_queue<PI, vector<PI>, greater<PI>> que;
    d = vector<int>(V, INF);
    d[s] = 0;
    que.push(PI(0, s));

    while (!que.empty()) {
      PI p = que.top();
      que.pop();
      int v = p.second;
      if (d[v] < p.first)
        continue;
      for (int i = 0; i < G[v].size(); i++) {
        dk_edge e = G[v][i];
        if (d[e.to] > d[v] + e.cost) {
          d[e.to] = d[v] + e.cost;
          prev[e.to] = v;
          que.push(PI(d[e.to], e.to));
        }
      }
    }
  }
  vector<int> get_path(int t) {
    vector<int> path;
    for (; t != -1; t = prev[t]) {
      // tがsになるまでprev[t]をたどっていく
      path.push_back(t);
    }
    //このままだとt->sの順になっているので逆順にする
    reverse(path.begin(), path.end());
    return path;
  }
  void show() {
    for (int i = 0; i < d.size() - 1; i++) {
      cout << d[i] << " ";
    }
    cout << d[d.size() - 1] << endl;
  }
};

int main(void) {

  int n, a, b;

  scanf("%d %d %d", &n, &a, &b);
  a--;
  b--;
  int l, r;
  DIJKSTRA dk(n);
  rep(i, n - 1) {
    scanf("%d %d", &l, &r);
    l--;
    r--;
    dk.add(l, r, 1);
    dk.add(r, l, 1);
  }
  dk.dijkstra(a);
  vi v = dk.get_path(b);
  if (v.size() % 2 == 0) {
    r = v.size() / 2;
    l = r - 1;
  } else {
    int mid = v.size() / 2;
    r = mid + 1;
    l = mid - 1;
  }
  int ans = 0;
  ans += (int)v.size() - r - 1;
  bool tuen = 0;

  int efrom = v[l], eto = v[l + 1];
  rep(i, dk.G[efrom].size()) {
    if (dk.G[efrom][i].to == eto) {
      dk.G[efrom].erase(dk.G[efrom].begin() + i);
      break;
    }
  }
  dk.dijkstra(efrom);

  int maxlen = 0;
  rep(i, dk.d.size()) {
    if (dk.d[i] != INF)
      maxlen = max(maxlen, dk.d[i]);
  }
  fin(maxlen + ans + (r - l - 1));
}
