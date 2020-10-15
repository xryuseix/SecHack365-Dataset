/*
引用元：https://atcoder.jp/contests/abc170/tasks/abc170_d
D - Not Divisible
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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
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
#define fi first
#define se second
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

vector<ll> enum_div(ll n) {
  vector<ll> ret;
  for (ll i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i != 1 && i * i != n) {
        ret.push_back(n / i);
      }
    }
  }
  return ret;
}

vector<bool> eratosmake(int n) {
  vector<bool> num(n + 1, false);
  for (int i = 0; i < n; i++)
    num[i] = true;
  // 0と1を消す
  // num[0] = num[1] = false;
  // iを残してiの倍数を消していく
  for (int i = 2; i < n; i++) {
    if (num[i]) {
      for (int j = i + i; j < n; j += i) {
        num[j] = false;
      }
    }
  }
  return num;
}

int main() {
  int n;
  cin >> n;
  set<int> dame;
  vb era = eratosmake(1010101);
  vi v;
  int one = 0;
  set<int> s;
  rep(i, n) {
    int a;
    cin >> a;
    if (a == 1)
      one = 1;
    v.pb(a);
    if (s.count(a) == 1)
      dame.insert(a);
    s.insert(a);
  }
  int ans = 0;
  rep(i, n) {
    if (dame.count(v[i]))
      continue;
    if (v[i] == 1) {
      ans++;
      continue;
    }
    if (!one && era[v[i]]) {
      ans++;
      continue;
    }
    vll div = enum_div(v[i]);
    bool isexist = 0;
    rep(i, div.size()) {
      if (s.count(div[i]))
        isexist = 1;
    }
    if (!isexist)
      ans++;
  }
  fin(ans);
}