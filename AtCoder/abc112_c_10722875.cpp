/*
引用元：https://atcoder.jp/contests/abc112/tasks/abc112_c
C - PyramidEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc112/submissions/10722875
// 提出ID : 10722875
// 問題ID : abc112_c
// コンテストID : abc112
// ユーザID : xryuseix
// コード長 : 2470
// 実行時間 : 23



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

  ll n;
  cin >> n;
  vvll v(n, vll(3));
  rep(i, n) cin >> v[i][0] >> v[i][1] >> v[i][2];
  for (ll x = 0; x <= 100; x++) {
    for (ll y = 0; y <= 100; y++) {
      bool ch = true;
      ll height = INF;
      rep(i, n) chmin(height, abs(v[i][0] - x) + abs(v[i][1] - y) + v[i][2]);
      rep(i, n) {
        ll h = abs(v[i][0] - x) + abs(v[i][1] - y) + v[i][2];
        if (h == height || !v[i][2])
          continue;
        if (h != height) {
          ch = false;
        }
      }
      if (ch) {
        cout << x << " " << y << " " << height << endl;
        return 0;
      }
    }
  }
}
