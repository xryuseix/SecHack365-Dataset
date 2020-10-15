/*
引用元：https://atcoder.jp/contests/agc019/tasks/agc019_a
A - Ice Tea Store
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
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

int main(void) {

  vector<pair<ld, pair<ld, ld>>> v(4);
  ld a;
  cin >> a;
  v[0] = mp(a * 4, mp(a, 0.25));
  cin >> a;
  v[1] = mp(a * 2, mp(a, 0.5));
  cin >> a;
  v[2] = mp(a, mp(a, 1));
  cin >> a;
  v[3] = mp(a / 2, mp(a, 2));
  Sort(v);
  ld n;
  cin >> n;
  ll ans = 0;
  for (int i = 0; i < 4; i++) {
    if (n < v[i].second.second)
      continue;
    ll num = n / v[i].second.second;
    // cout<<num<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
    ans += v[i].second.first * num;
    n -= v[i].second.second * num;
    // cout<<num<<endl;
  }
  fin(ans);
}
