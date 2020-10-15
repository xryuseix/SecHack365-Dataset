/*
問題文の引用元：https://atcoder.jp/contests/abc042/tasks/arc058_b
D - いろはちゃんとマス目 / Iroha and a Grid
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : 縦 H マス、横 W
マスのマス目があります。いろはちゃんは、今一番左上のマス目にいます。そして、右か下に1マス移動することを繰り返し、一番右下のマス目へと移動します。ただし、下から
A 個以内、かつ左から B
個以内のマス目へは移動することは出来ません。移動する方法は何通りあるか求めてください。なお、答えは非常に大きくなることがあるので、答えは
10^9+7 で割ったあまりを出力してください。
制約 1 ≦ H, W ≦ 100,000 1 ≦ A < H 1 ≦ B <
W入力入力は以下の形式で標準入力から与えられる。H W A B出力移動する方法の数を
10^9+7 で割ったあまりを出力せよ。



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

#define MAX_NCK 201010
ll f[MAX_NCK], rf[MAX_NCK];

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

bool isinit = false;

void init() {
  f[0] = 1;
  rf[0] = modinv(1);
  for (int i = 1; i < MAX_NCK; i++) {
    f[i] = (f[i - 1] * i) % MOD;
    rf[i] = modinv(f[i]);
  }
}

ll nCk(ll n, ll k) {
  if (!isinit) {
    init();
    isinit = 1;
  }
  ll nl = f[n];       // n!
  ll nkl = rf[n - k]; // (n-k)!
  ll kl = rf[k];      // k!
  ll nkk = (nkl * kl) % MOD;

  return (nl * nkk) % MOD;
}
ll calc(ll x1, ll y1, ll x2, ll y2) {
  ll tate = abs(y2 - y1);
  ll yoko = abs(x2 - x1);
  return nCk(tate + yoko, min(yoko, tate)) % MOD;
}

int main(void) {

  ll h, w, a, b;
  cin >> h >> w >> a >> b;
  vector<pair<ll, ll>> v;
  ll y = h - a - 1;
  ll x = b;
  while (y >= 0 && x < w) {
    v.pb(mp(x, y));
    x++;
    y--;
  }
  ll ans = 0;
  rep(i, v.size()) {
    ans += calc(0, 0, v[i].first, v[i].second) *
           calc(v[i].first, v[i].second, w - 1, h - 1) % MOD;
    ans %= MOD;
  }
  fin(ans);
}
