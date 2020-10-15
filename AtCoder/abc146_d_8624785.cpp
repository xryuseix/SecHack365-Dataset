/*
引用元：https://atcoder.jp/contests/abc146/tasks/abc146_d
D - Coloring Edges on TreeEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc146/submissions/8624785
// 提出ID : 8624785
// 問題ID : abc146_d
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 3147
// 実行時間 : 383



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

vvi v(1000010);
map<pair<int, int>, int> ans;

struct Corr {
  int pos;
  int bef;
};
queue<Corr> q;
void bfs() {
  while (!q.empty()) {
    Corr now = q.front();
    q.pop();
    int color = 0;
    for (int i = 0; i < v[now.pos].size(); i++) {
      int nextpos = v[now.pos][i];
      if (ans.find(mp(min(now.pos, nextpos), max(now.pos, nextpos))) !=
          ans.end())
        continue;
      if (color == now.bef)
        color++;
      ans[mp(min(now.pos, nextpos), max(now.pos, nextpos))] = color;
      Corr c = {nextpos, color};
      q.push(c);
      color++;
    }
  }
}

int main(void) {

  int n;
  cin >> n;
  int a, b;
  vpii edge(n);
  rep(i, n - 1) {
    cin >> a >> b;
    a--;
    b--;
    if (a > b)
      swap(a, b);
    edge[i] = mp(a, b);
  }
  map<int, int> m;
  rep(i, n - 1) {
    m[edge[i].first]++;
    m[edge[i].second]++;
    v[edge[i].first].push_back(edge[i].second);
    v[edge[i].second].push_back(edge[i].first);
  }
  int start = 0;
  int maxnum = 0;
  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->second > maxnum) {
      maxnum = it->second;
      start = it->first;
    }
  }
  Corr c = {start, -1};
  q.push(c);
  bfs();

  vi ansvec(n - 1);

  for (int i = 0; i < n - 1; i++) {
    int mi = min(edge[i].first, edge[i].second);
    int ma = max(edge[i].first, edge[i].second);
    ansvec[i] = ans[mp(mi, ma)] + 1;
  }
  set<int> s;
  rep(i, n - 1) s.insert(ansvec[i]);
  cout << s.size() << endl;
  for (int i = 0; i < n - 1; i++) {
    cout << ansvec[i] << endl;
  }
}
