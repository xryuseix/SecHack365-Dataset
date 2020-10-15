/*
問題文の引用元：https://atcoder.jp/contests/abc168/tasks/abc168_e
E - ∙ (Bullet)Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 500 点
問題文 : N 匹のイワシが釣れました。i 匹目のイワシの美味しさは A_i、香り高さは
B_i です。この中から 1
匹以上のイワシを選んで同じクーラーボックスに入れますが、互いに仲が悪い 2
匹を同時に選ぶことはできません。i 匹目と j (\neq i) 匹目のイワシは、A_i \cdot
A_j + B_i \cdot B_j = 0
を満たすとき(また、その時に限り)仲が悪いです。イワシの選び方は何通りあるでしょう？答えは非常に大きくなる可能性があるので、1000000007
で割ったあまりを出力してください。
制約入力はすべて整数1 \leq N \leq 2 \times 10^5-10^{18} \leq A_i, B_i \leq
10^{18}入力入力は以下の形式で標準入力から与えられる。NA_1 B_1:A_N B_N出力答えを
1000000007 で割ったあまりを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc168/submissions/13357211
// 提出ID : 13357211
// 問題ID : abc168_e
// コンテストID : abc168
// ユーザID : xryuseix
// コード長 : 7051
// 実行時間 : 445



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
constexpr double EPS = 1e-9;

struct mint {
  ll x;
  mint(ll _x = 0) : x((_x % MOD + MOD) % MOD) {}

  /* 初期化子 */
  mint operator+() const { return mint(x); }
  mint operator-() const { return mint(-x); }

  /* 代入演算子 */
  mint &operator+=(const mint a) {
    if ((x += a.x) >= MOD)
      x -= MOD;
    return *this;
  }
  mint &operator-=(const mint a) {
    if ((x += MOD - a.x) >= MOD)
      x -= MOD;
    return *this;
  }
  mint &operator*=(const mint a) {
    (x *= a.x) %= MOD;
    return *this;
  }
  mint &operator/=(const mint a) {
    x *= modinv(a).x;
    return (*this);
  }
  mint &operator%=(const mint a) {
    x %= a.x;
    return (*this);
  }
  mint &operator++() {
    ++x;
    if (x >= MOD)
      x -= MOD;
    return *this;
  }
  mint &operator--() {
    --x;
    if (x < 0)
      x += MOD;
    return *this;
  }
  mint &operator&=(const mint a) {
    x &= a.x;
    return (*this);
  }
  mint &operator|=(const mint a) {
    x |= a.x;
    return (*this);
  }
  mint &operator^=(const mint a) {
    x ^= a.x;
    return (*this);
  }
  mint &operator<<=(const mint a) {
    x *= pow(2, a).x;
    return (*this);
  }
  mint &operator>>=(const mint a) {
    x /= pow(2, a).x;
    return (*this);
  }

  /* 算術演算子 */
  mint operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res *= a;
  }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
  mint operator%(const mint a) const {
    mint res(*this);
    return res %= a;
  }
  mint operator&(const mint a) const {
    mint res(*this);
    return res &= a;
  }
  mint operator|(const mint a) const {
    mint res(*this);
    return res |= a;
  }
  mint operator^(const mint a) const {
    mint res(*this);
    return res ^= a;
  }
  mint operator<<(const mint a) const {
    mint res(*this);
    return res <<= a;
  }
  mint operator>>(const mint a) const {
    mint res(*this);
    return res >>= a;
  }

  /* 条件演算子 */
  bool operator==(const mint a) const noexcept { return x == a.x; }
  bool operator!=(const mint a) const noexcept { return x != a.x; }
  bool operator<(const mint a) const noexcept { return x < a.x; }
  bool operator>(const mint a) const noexcept { return x > a.x; }
  bool operator<=(const mint a) const noexcept { return x <= a.x; }
  bool operator>=(const mint a) const noexcept { return x >= a.x; }

  /* ストリーム挿入演算子 */
  friend istream &operator>>(istream &is, mint &m) {
    is >> m.x;
    m.x = (m.x % MOD + MOD) % MOD;
    return is;
  }
  friend ostream &operator<<(ostream &os, const mint &m) {
    os << m.x;
    return os;
  }

  /* その他の関数 */
  mint modinv(mint a) { return pow(a, MOD - 2); }
  mint pow(mint x, mint n) {
    mint res = 1;
    while (n.x > 0) {
      if ((n % 2).x)
        res *= x;
      x *= x;
      n.x /= 2;
    }
    return res;
  }
};

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// xのn乗%modを計算
ll mod_pow(ll x, ll n, ll mod = MOD) {
  ll res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}

int main() {
  map<pair<ll, ll>, ll> m;
  int n;
  cin >> n;
  ll zero = 0;
  ll l = 0, r = 0;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      zero++;
      continue;
    }
    if (a < 0) {
      b = -b;
      a = -a;
    }
    if (a == 0 && b < 0)
      b = -b;
    int ch = 1;
    if (b < 0)
      ch = -1;
    ll t = gcd(a, b * ch);
    a /= t;
    b /= t;
    m[mp(a, b)]++;
  }
  mint ans = 1;
  irep(i, m) {
    pair<ll, ll> p = mp((i->first.second), -(i->first.first));
    if (p.fi < 0) {
      p.fi *= -1;
      p.se *= -1;
    }
    mint t = mod_pow(2, i->second);
    if (m.find(p) != m.end()) {
      t += mod_pow(2, m[p]) - 1;
      m.erase(p);
    }
    ans *= t;
  }
  ans -= 1;
  ans += zero;
  fin(ans);
}
