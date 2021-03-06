/*
引用元：https://atcoder.jp/contests/abc139/tasks/abc139_e
E - LeagueEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc139/submissions/10747099
// 提出ID : 10747099
// 問題ID : abc139_e
// コンテストID : abc139
// ユーザID : xryuseix
// コード長 : 4073
// 実行時間 : 399



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
#define endl '\n';
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

vvi G(1010101); // グラフ(リスト)

// トポロジカルソート
void rec(int v, vector<bool> &seen, vector<int> &order) {
  seen[v] = true;
  // cout<<v<<endl;
  for (int i = 0; i < G[v].size(); i++) {
    int next = G[v][i];
    if (seen[next])
      continue; // 既に訪問済みなら探索しない
    rec(next, seen, order);
  }
  order.push_back(v);
}

vector<int> topo(int N) { // Nはノード数
  // 探索
  vector<bool> seen(N, 0); // 初期状態では全ノードが未訪問
  vector<int> order;       // トポロジカルソート順
  for (int v = 0; v < N; ++v) {
    if (seen[v])
      continue; // 既に訪問済みなら探索しない
    rec(v, seen, order);
  }
  reverse(order.begin(), order.end());
  return order;
}

int main() {

  int n;
  cin >> n;
  vvi a(n, vi(n, -1));
  vvi v(n, vi(n - 1));
  rep(i, n) rep(j, n - 1) {
    cin >> v[i][j];
    v[i][j]--;
  }
  int num = 0;
  rep(i, n) {
    rep(k, n - 1) {
      int j = v[i][k];
      if (a[i][j] == -1 && a[j][i] == -1) {
        a[i][j] = num;
        a[j][i] = num;
        num++;
      } else {
        a[i][j] = max(a[i][j], a[j][i]);
        a[j][i] = max(a[i][j], a[j][i]);
      }
    }
  }
  rep(i, n) {
    rep(j, n - 1) { v[i][j] = a[i][v[i][j]]; }
  }
  rep(i, n) {
    rep(j, n - 2) { G[v[i][j]].pb(v[i][j + 1]); }
  }
  vi tp = topo(num);
  vi dp(num, 1);
  vi use(num, false);
  rep(i, num) {
    use[tp[i]] = 1;
    rep(j, G[tp[i]].size()) {
      // cout<<i<<"->"<<G[tp[i]][j]<<endl;
      if (use[G[tp[i]][j]]) {
        fin(-1);
        return 0;
      }
      chmax(dp[G[tp[i]][j]], dp[tp[i]] + 1);
    }
  }
  int ans = 0;
  rep(i, num) chmax(ans, dp[i]);
  fin(ans);

  // rep(i,n){
  //     rep(j,n-1)cout<<v[i][j]<<" ";
  //     cout<<endl;
  // }
  // cout<<endl;
  // rep(i,n){
  //     rep(j,n)cout<<a[i][j]<<" ";
  //     cout<<endl;
  // }
  // rep(i,tp.size())cout<<tp[i]<<" ";
  // cout<<endl;
  // rep(i,num)cout<<i<<" : "<<dp[i]<<endl;
}
