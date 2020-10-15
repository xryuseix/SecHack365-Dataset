/*
問題文の引用元：https://atcoder.jp/contests/abc156/tasks/abc156_e
E - Roaming
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : n 個の部屋がある建物があります。部屋には 1 から n
までの番号が付いています。建物の各部屋から、他の任意の部屋に移ることが可能です。ここで、建物のある部屋
i にいる人が、別の部屋 j~ (i \neq j) に移ることを 人の移動
と呼ぶことにします。最初、建物の各部屋には人が 1
人いました。このあと現在までに、人の移動がちょうど k
回起きたことが分かっています。現在、建物の各部屋にいる人の数の組合せとして、ありえるものは何通りでしょうか。(10^9
+ 7) で割った余りを求めてください。
制約入力は全て整数である。3 \leq n \leq 2 \times 10^52 \leq k \leq
10^9入力入力は以下の形式で標準入力から与えられる。n
k出力現在、建物の各部屋にいる人の数の組合せとして、ありえるものの個数を (10^9 +
7) で割った余りを出力せよ。



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

vll dp(201010, -1);

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

#define MAX_NCK 201010
ll f[MAX_NCK], rf[MAX_NCK];

// modinvも呼ぶ！！

bool isinit = false;

void init() {
  f[0] = 1;
  rf[0] = modinv(1);
  for (int i = 1; i < MAX_NCK; i++) {
    f[i] = (f[i - 1] * i) % MOD;
    rf[i] = modinv(f[i]);
  }
}

ll nCk(int n, int k) {
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

int main(void) {

  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  if (k > n - 1)
    k = n - 1;
  for (int i = 0; i <= k; i++) {
    int rest = n - i;
    ans += nCk(n, i) * nCk(n - 1, i);
    ans %= MOD;
  }
  fin(ans);
}
