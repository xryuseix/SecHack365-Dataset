/*
問題文の引用元：https://atcoder.jp/contests/abc133/tasks/abc133_e
E - Virus Tree 2Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : N 頂点、N-1 辺を持つ木が与えられます。 頂点には番号 1,2,...,N
がつけられており、i 番目の辺は頂点 a_i,b_i をつないでいます。あなたは K
色の絵の具を持っています。木の頂点それぞれに対して、以下の条件を満たすように、K
色の中から 1 色を選んで塗ることにしました。二つの異なる頂点 x,y 間の距離が 2
以下ならば、頂点 x の色と頂点 y
の色は異なる。木を塗り分ける方法は何通りあるでしょうか。総数を 1,000,000,007
で割った余りを求めてください。木とは木とはグラフの一種です。詳しくはこちらをご覧ください:
Wikipedia「木 (数学)」距離とは二つの頂点 x,y 間の距離とは、x から y
に到達する際にたどる必要のある最小の辺数です。
制約1 \leqq N,K \leqq 10^51 \leqq a_i,b_i \leqq
N与えられるグラフは木である。入力入力は以下の形式で標準入力から与えられます。N
Ka_1 b_1a_2 b_2...a_{N-1} b_{N-1}出力木の塗り分け方の総数を 1,000,000,007
で割った余りを出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc133/submissions/12555288
// 提出ID : 12555288
// 問題ID : abc133_e
// コンテストID : abc133
// ユーザID : xryuseix
// コード長 : 3747
// 実行時間 : 84



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
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

const int mod = 1000000007;
struct mint {
  ll x;
  mint(ll x = 0) : x(x % mod) {}
  mint &operator+=(const mint a) {
    if ((x += a.x) >= mod)
      x -= mod;
    return *this;
  }
  mint &operator-=(const mint a) {
    if ((x += mod - a.x) >= mod)
      x -= mod;
    return *this;
  }
  mint &operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
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
};

mint ans = 1;
void dfs(int pos, vvi &v, int k, int depth, int bef, int time) {
  ans *= time;
  int ti = k - 2;
  if (!depth) {
    ti++;
  }
  rep(i, v[pos].size()) {
    if (v[pos][i] == bef)
      continue;
    chmax(ti, 0);
    dfs(v[pos][i], v, k, depth + 1, pos, ti);
    ti--;
  }
}

int main() {

  int ha = 0;
  int n, k;
  cin >> n >> k;
  vvi v(n);
  rep(i, n - 1) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    v[A].pb(B);
    v[B].pb(A);
  }
  rep(i, n) {
    if (v[i].size() == 1) {
      ha = i;
      break;
    }
  }
  dfs(ha, v, k, 0, -1, k);
  fin(ans.x);
}