/*
引用元：https://atcoder.jp/contests/abc158/tasks/abc158_d
D - String FormationEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc158/submissions/10606487
// 提出ID : 10606487
// 問題ID : abc158_d
// コンテストID : abc158
// ユーザID : xryuseix
// コード長 : 2777
// 実行時間 : 90



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

int main() {

  string s;
  cin >> s;
  int q;
  cin >> q;
  vvc v(2);
  int front = 0;
  int back = 1;
  int modeone;
  rep(_, q) {
    int mode;
    cin >> mode;
    if (mode == 1) {
      modeone++;
      swap(front, back);
    } else {
      int fb;
      char c;
      cin >> fb >> c;
      if (fb == 1) {
        v[front].pb(c);
      } else {
        v[back].pb(c);
      }
    }
  }
  if (modeone % 2 == 0) {
    for (int i = v[0].size() - 1; i >= 0; i--) {
      cout << v[0][i];
    }
    cout << s;
    rep(i, v[1].size()) { cout << v[1][i]; }
    cout << endl;
  } else {
    for (int i = v[1].size() - 1; i >= 0; i--) {
      cout << v[1][i];
    }
    if (modeone % 2 == 1)
      reverse(all(s));
    cout << s;
    rep(i, v[0].size()) { cout << v[0][i]; }
    cout << endl;
  }
}
