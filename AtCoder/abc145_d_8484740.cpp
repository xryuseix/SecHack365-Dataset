/*
引用元：https://atcoder.jp/contests/abc145/tasks/abc145_d
D - KnightEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc145/submissions/8484740
// 提出ID : 8484740
// 問題ID : abc145_d
// コンテストID : abc145
// ユーザID : xryuseix
// コード長 : 2750
// 実行時間 : 5



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

// (a/b)%P の場合は，(a%P)*modinv(b)%P とする
ll modinv(ll a) {
  ll b = MOD, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= MOD;
  if (u < 0)
    u += MOD;
  return u;
}

ll nCk(ll n, ll k) {
  k = min(k, n - k);
  ll res = 1;
  for (ll i = 0; i < k; i++) {
    res *= n;
    n--;
    res %= MOD;
  }
  ll bo = 1;
  for (ll i = 1; i <= k; i++) {
    bo *= i;
    bo %= MOD;
  }
  return (res % MOD) * modinv(bo) % MOD;
}

int main(void) {

  ll x, y;
  cin >> x >> y;
  ll bx = x, by = y;
  if (x < y)
    swap(x, y);
  pair<ll, ll> edge = mp(-1, -1);
  ll eh;
  ll ew;
  for (ll i = 0; i < 10000000; i++) {
    if (y * 2 == x) {
      edge = mp(x, y);
      break;
    }
    x++;
    y--;
    if (y < 0 || x > 4000000)
      break;
    if (y * 2 == x) {
      edge = mp(x, y);
      break;
    }
  }
  if (edge.first == -1 && edge.second == -1) {
    cout << 0 << endl;
    return 0;
  }
  // cout<<edge.first<<" "<<edge.second<<endl;
  eh = edge.second;
  ew = edge.first - bx;
  // cout<<eh<<" "<<ew<<endl;
  fin(nCk(eh, ew) % MOD);
}
