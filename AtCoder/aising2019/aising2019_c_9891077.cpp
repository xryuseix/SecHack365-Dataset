/*
問題文の引用元：https://atcoder.jp/contests/aising2019/tasks/aising2019_c
C - Alternating Path
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : H 行 W
列のマス目があり、各マスは黒または白に塗られています。各マスの色を表す H
個の長さ W の文字列 S_1, S_2, ..., S_H が与えられます。マス目の上から i
番目、左から j 番目 (1 \leq i \leq H, 1 \leq j \leq W)
のマスが黒く塗られているとき文字列 S_i の j 文字目は #
となっており、白く塗られているとき文字列 S_i の j 文字目は .
となっています。黒く塗られたマス c_1 と白く塗られたマス c_2
の組であって、以下の条件を満たすものの個数を求めてください。上下左右に隣り合うマスへの移動を繰り返してマス
c_1 からマス c_2
へ行く方法であって、通るマスの色が黒、白、黒、白・・・と交互になっているものが存在する。
制約1 \leq H, W \leq 400|S_i| = W (1 \leq i \leq H)各 i (1 \leq i \leq H)
に対して、文字列 S_i は文字 # と文字 .
だけからなる。入力入力は以下の形式で標準入力から与えられる。H
WS_1S_2:S_H出力答えを出力せよ。



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

vvi v(500, vi(500, -1));

void bfs(int y, int x, vs &s, int num, int n, int m) {
  v[y][x] = num;
  queue<pair<int, int>> q;
  q.push(mp(y, x));
  while (!q.empty()) {
    pair<int, int> now = q.front();
    q.pop();
    v[now.first][now.second] = num;
    for (int i = 0; i < 4; i++) {
      int nexty = now.first + dy[i];
      int nextx = now.second + dx[i];
      if (nexty < 0 || nextx < 0 || nextx >= m || nexty >= n)
        continue;
      if (v[nexty][nextx] != -1)
        continue;
      if (s[nexty][nextx] == s[now.first][now.second])
        continue;
      v[nexty][nextx] = num;
      q.push(mp(nexty, nextx));
    }
  }
}
int bfs2(int y, int x, vs &s, int num, int n, int m) {
  int res = 0;
  queue<pair<int, int>> q;
  set<pair<int, int>> se;
  q.push(mp(y, x));
  while (!q.empty()) {
    pair<int, int> now = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nexty = now.first + dy[i];
      int nextx = now.second + dx[i];
      if (nexty < 0 || nextx < 0 || nextx >= m || nexty >= n)
        continue;
      if (v[nexty][nextx] != num)
        continue;
      if (se.count(mp(nexty, nextx)) == 1)
        continue;
      se.insert(mp(nexty, nextx));
      if (s[nexty][nextx] == '.')
        res++;
      q.push(mp(nexty, nextx));
    }
  }
  return res;
}

int main(void) {
  int n, m;
  cin >> n >> m;
  vs s(n);
  rep(i, n) { cin >> s[i]; }
  int num = 0;

  rep(i, n) {
    rep(j, m) {
      if (v[i][j] != -1)
        continue;
      bfs(i, j, s, num, n, m);
      num++;
    }
  }
  vi memo(num, -1);
  ll ans = 0;
  rep(i, n) {
    rep(j, m) {
      if (s[i][j] == '#') {
        if (memo[v[i][j]] == -1) {
          int tmp = bfs2(i, j, s, v[i][j], n, m);
          ans += tmp;
          memo[v[i][j]] = tmp;
        } else {
          ans += memo[v[i][j]];
        }
      }
    }
  }
  fin(ans);
}
