/*
問題文の引用元：https://atcoder.jp/contests/agc046/tasks/agc046_b
B - Extension
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : 縦 A マス横 B
マスのマス目があり、そのすべてのマスは白く塗られています。このマス目に、以下の操作を繰り返し行います。現在のマス目が縦
a マス横 b マスであるとする。縦または横を選ぶ。縦を選んだ場合はマス目の上に 1
行を追加し、縦 a+1 マス横 b マスのマス目にする。横を選んだ場合はマス目の右に 1
列を追加し、縦 a マス横 b+1
マスのマス目にする。これにより追加されたマスのうちちょうど 1
マスを黒く塗り、追加された残りのマスを白く塗る。最終的にマス目が縦 C マス横 D
マスになったとするとき、最終的なマス目の異なる塗られ方としてありうるものの個数を
998244353 で割った余りを求めてください。
制約1 \leq A \leq C \leq 30001 \leq B \leq D \leq 3000A,B,C,D
は整数である入力入力は以下の形式で標準入力から与えられる。A B C
D出力最終的なマス目の異なる塗られ方としてありうるものの個数を 998244353
で割った余りを出力せよ。



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
constexpr ll MOD = 998244353;
constexpr ld EPS = 1e-11;

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
    if (!x)
      x += MOD;
    --x;
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

mint dp[3001][3001];

int main() {

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  dp[a][b] = 1;
  for (int i = 1; i <= c; i++) {
    for (int j = 1; j <= d; j++) {
      dp[i][j] += dp[i - 1][j] * j;
      dp[i][j] += dp[i][j - 1] * i;
      dp[i][j] -= dp[i - 1][j - 1] * (i - 1) * (j - 1);
    }
  }
  fin(dp[c][d].x);
}