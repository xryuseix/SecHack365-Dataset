/*
引用元：https://atcoder.jp/contests/agc033/tasks/agc033_a
A - Darker and DarkerEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc033/submissions/8546763
// 提出ID : 8546763
// 問題ID : agc033_a
// コンテストID : agc033
// ユーザID : xryuseix
// コード長 : 3073
// 実行時間 : 798



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
#define fin(ans) cout << (ans) << endl
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
  };
};
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

struct Corr {
  int y;
  int x;
  int depth;
};

queue<Corr> q;
set<pair<int, int>> s;

void bfs(vector<string> &v, vvi &dist) {
  while (!q.empty()) {
    Corr now = q.front();
    q.pop();
    // cout<<now.y<<" "<<now.x<<endl;
    dist[now.y][now.x] = now.depth;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
      int nextx = now.x + dx[i];
      int nexty = now.y + dy[i];
      if (nextx < 0 || nextx >= dist[0].size() || nexty < 0 ||
          nexty >= dist.size())
        continue;
      if (dist[nexty][nextx] <= now.depth + 1)
        continue;
      if (s.count(mp(nextx, nexty)) > 0)
        continue;
      Corr c = {nexty, nextx, now.depth + 1};
      q.push(c);
      s.insert(mp(nextx, nexty));
    }
  }
}

int main(void) {

  int n, m;
  cin >> n >> m;
  vs v(n);
  // cout<<"AAAAA\n"<<endl;
  rep(i, n) {
    string s;
    cin >> s;
    v[i] = s;
  }

  vvi dist(n, vi(m, INF));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '#') {
        Corr c = {i, j, 0};
        dist[i][j] = 0;
        q.push(c);
      }
    }
  }
  bfs(v, dist);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ans = max(ans, dist[i][j]);
    }
  }
  fin(ans);

  // for(int i=0;i<n;i++){
  //     for(int j=0;j<m;j++){
  //         cout<<dist[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
}
