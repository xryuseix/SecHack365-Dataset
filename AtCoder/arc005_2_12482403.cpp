/*
引用元：https://atcoder.jp/contests/arc005/tasks/arc005_2
B - P-CASカードと高橋君Editorial
// ソースコードの引用元 :
https://atcoder.jp/contests/arc005/submissions/12482403
// 提出ID : 12482403
// 問題ID : arc005_2
// コンテストID : arc005
// ユーザID : xryuseix
// コード長 : 3452
// 実行時間 : 1



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

int main() {

  int x, y;
  string s;
  cin >> x >> y >> s;
  vvi w(9, vi(25));
  rep(i, 9) {
    string t;
    cin >> t;
    rep(j, 9) w[i][j + 8] = t[j] - '0';
    rep(j, 8) w[i][17 + j] = w[i][15 - j];
    rep(j, 8) w[i][7 - j] = w[i][9 + j];
  }
  vvi v;
  rep(i, 8) { v.pb(w[8 - i]); }
  rep(i, 9) { v.pb(w[i]); }
  rep(i, 8) { v.pb(w[7 - i]); }
  // rep(i,25)dump(v[i]);
  x += 7;
  y += 7;
  int dx, dy;

  if (s == "R") {
    dx = 1;
    dy = 0;
  }
  if (s == "L") {
    dx = -1;
    dy = 0;
  }
  if (s == "U") {
    dx = 0;
    dy = -1;
  }
  if (s == "D") {
    dx = 0;
    dy = 1;
  }
  if (s == "RU") {
    dx = 1;
    dy = -1;
  }
  if (s == "RD") {
    dx = 1;
    dy = 1;
  }
  if (s == "LU") {
    dx = -1;
    dy = -1;
  }
  if (s == "LD") {
    dx = -1;
    dy = 1;
  }
  vi ans;
  rep(i, 4) {
    ans.pb(v[y][x]);
    y += dy;
    x += dx;
  }
  rep(i, 4) cout << ans[i];
  cout << endl;
}
