/*
問題文の引用元：https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_d
D - SquaresEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 整数 N, A, B が与えられます。辺の長さが N の白い正方形を座標平面の
(0,0), (N,0), (0,N), (N,N) に 4
頂点が重なるように置きます。次に、この白い正方形の内部または周上に収まるように、辺の長さが
A の青い正方形と辺の長さが B の赤い正方形を 1
つずつ置きます。ただし、正方形のどの辺も x 軸または y
軸と平行に置かれている必要があります。また、青い正方形と赤い正方形の各頂点は格子点上に置かれている必要があります。赤い正方形の内部と青い正方形の内部が重ならないように置く方法の数を
1,000,000,007 で割ったあまりを求めてください。1 つの入力につき、T
個のテストケースに答えてください。
制約1 \leq T \leq 10^51 \leq N \leq 10^91 \leq A \leq N1 \leq B \leq
N入力は全て整数入力入力は以下の形式で標準入力から与えられる。入力の 1
行目は以下のとおりである。Tそして、 T
個のテストケースが続く。これらはそれぞれ以下の形式で与えられる。N A
B出力各テストケースについて、赤い正方形と青い正方形の内部が重ならないように置く方法の数を
1,000,000,007 で割ったあまりを出力せよ。各テストケースごとに改行せよ。



*/
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
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
// #include <atcoder/all>
// using namespace atcoder;
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
  irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
}
template <class T, class U> inline void dump(map<T, U> &v) {
  irep(i, v) { cout << i->first << " " << i->second << '\n'; }
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
template <typename Head, typename Value>
auto vectors(const Head &head, const Value &v) {
  return vector<Value>(head, v);
}
template <typename Head, typename... Tail> auto vectors(Head x, Tail... tail) {
  auto inner = vectors(tail...);
  return vector<decltype(inner)>(x, inner);
}
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 61;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

/* --------------------   ここまでテンプレ   -------------------- */
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
    x %= MOD;
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
int main() {
  int Q;
  cin >> Q;
  while (Q--) {
    ll a, b, n;
    cin >> n >> a >> b;
    if (b + a > n) {
      fin(0);
      continue;
    }
    mint x4 = mint(n - a - b + 2) * mint(n - a - b + 1) / 2;
    mint x2 = mint(n - a + 1) * mint(n - b + 1) - x4 * 2;
    mint ans =
        mint(n - a + 1) * mint(n - b + 1) * mint(n - a + 1) * mint(n - b + 1) -
        x2 * x2;
    cout << ans << endl;
  }
}
