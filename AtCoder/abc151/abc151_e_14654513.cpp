/*
問題文の引用元：https://atcoder.jp/contests/abc151/tasks/abc151_e
E - Max-Min Sums
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 有限個の整数からなる集合 X に対し f(X)=\max X - \min X と定義します。N
個の整数 A_1,...,A_N が与えられます。このうち K 個を選び、それらからなる集合を S
とします。同じ値であっても添字が異なる要素を区別すると、そのような選び方は {}_N
C_K 通りありますが、その全てについての f(S)
の合計を求めてください。答えは非常に大きくなる可能性があるので、\bmod 10^9+7
で出力してください。
制約1 \leq N \leq 10^51 \leq K \leq N|A_i| \leq
10^9入力入力は以下の形式で標準入力から与えられる。N KA_1 ... A_N出力答えを \bmod
10^9+7 で出力せよ。



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

#define MAX_NCK 201010
ll f[MAX_NCK], rf[MAX_NCK];

// modinvも呼ぶ！！
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

void init(void) {
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

int main() {

  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = 0;
  Sort(v);
  for (int i = n - 1; i - (k - 1) >= 0; i--) {
    ans += v[i] * nCk(i, (k - 1)) % MOD;
  }
  ll ans2 = 0;
  for (int i = 0; i + k - 1 < n; i++) {
    ans2 += v[i] * nCk(n - i - 1, k - 1) % MOD;
    ans2 %= MOD;
  }
  fin((ans - ans2 + MOD) % MOD);
}