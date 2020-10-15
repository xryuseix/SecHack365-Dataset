/*
問題文の引用元：https://atcoder.jp/contests/abc156/tasks/abc156_d
D - Bouquet
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : あかりさんは n 種類の花を 1
本ずつ持っています。あかりさんは、これらの花から 1
本以上を選び、花束を作ろうとしています。ただし、あかりさんは a と b の 2
つの数を苦手としていて、いずれかと一致するような本数の花からなる花束は作ることができません。あかりさんが作ることのできる花束は何種類あるでしょうか。(10^9
+ 7) で割った余りを求めてください。ここで 2
つの花束は、一方では使われているが、もう一方では使われていない種類の花があるとき、別の種類の花束であるとみなします。
制約入力は全て整数である。2 \leq n \leq 10^91 \leq a < b \leq \textrm{min}(n, 2
\times 10^5)入力入力は以下の形式で標準入力から与えられる。n a
b出力あかりさんが作ることのできる花束の種類数を (10^9 + 7)
で割った余りを出力せよ。(そのような花束がないときは 0 と出力せよ。)



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
// xのn乗%modを計算
ll mod_pow(ll x, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}

ll comb(ll n, ll r) {
  r = min(r, n - r);
  ll res = 1;
  for (int i = 0; i < r; i++) {
    res *= n - i;
    res %= MOD;
    res = res * modinv(i + 1) % MOD;
  }
  return res;
}

int main(void) {

  ll n, a, b;
  cin >> n >> a >> b;
  ll N = mod_pow(2, n, MOD);
  ll A = comb(n, a);
  ll B = comb(n, b);
  cout << ((N - 1 - A + MOD) % MOD - B + MOD) % MOD << endl;
}
