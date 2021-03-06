/*
引用元：https://atcoder.jp/contests/abc151/tasks/abc151_d
D - Maze Master
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
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

struct Corr {
  int x;
  int y;
  int depth;
};
queue<Corr> q;
int bfs(vs &v, int gy, int gx, int h, int w) {
  // vector<vb> ispass(h,vb(w,false));
  set<pair<int, int>> s;
  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, -1, 0, 1};
  int res = INF;

  while (!q.empty()) {
    Corr now = q.front();
    q.pop();
    s.insert(mp(now.x, now.y));
    for (int i = 0; i < 4; i++) {
      Corr next = {now.x + dx[i], now.y + dy[i], now.depth + 1};
      if (next.x >= w || next.x < 0 || next.y >= h || next.y < 0)
        continue;
      if (s.find(mp(next.x, next.y)) != s.end())
        continue;
      if (v[next.y][next.x] == '#')
        continue;
      if (next.y == gy && next.x == gx) {
        while (!q.empty())
          q.pop();
        return next.depth;
      }
      s.insert(mp(next.x, next.y));
      q.push(next);
    }
  }

  // return (res==INF)?0:res;
  return 0;
}

int main(void) {

  int h, w;
  cin >> h >> w;
  vs v(h);
  rep(i, h) cin >> v[i];
  int ans = 0;

  vpii W;
  rep(i, h) rep(j, w) {
    if (v[i][j] == '.')
      W.push_back(mp(j, i)); // xy
  }
  string s = "....................";
  for (int i = 0; i < h; i++) {
    if (v[i] != s)
      break;
    if (i == h - 1) {
      fin(h - 1 + w - 1);
      return 0;
    }
  }

  for (int i = 0; i < W.size(); i++) {
    for (int j = i + 1; j < W.size(); j++) {
      int sx = W[i].first;
      int sy = W[i].second;
      int gx = W[j].first;
      int gy = W[j].second;

      Corr c = {sx, sy, 0};
      q.push(c);
      int t = bfs(v, gy, gx, h, w);
      ans = max(ans, t);
    }
  }

  fin(ans);
}
