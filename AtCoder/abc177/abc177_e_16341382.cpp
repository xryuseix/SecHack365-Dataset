/*
問題文の引用元：https://atcoder.jp/contests/abc177/tasks/abc177_e
E - CoprimeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : N 個の整数があります。i 番目の数は A_i です。「全ての 1\leq i < j \leq
N について、GCD(A_i,A_j)=1」が成り立つとき、\{A_i\} は pairwise coprime
であるといいます。\{A_i\} が pairwise coprime
ではなく、かつ、GCD(A_1,\ldots,A_N)=1 であるとき、\{A_i\} は setwise coprime
であるといいます。\{A_i\} が pairwise coprime、setwise
coprime、そのどちらでもない、のいずれであるか判定してください。ただし
GCD(\ldots) は最大公約数を表します。
制約2 \leq N \leq 10^61 \leq A_i\leq
10^6入力入力は以下の形式で標準入力から与えられる。NA_1 \ldots A_N出力\{A_i\} が
pairwise coprime ならば pairwise coprime、setwise coprime ならば setwise
coprime、そのどちらでもなければ not coprime と出力せよ。



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

/* --------------------   ここまでテンプレ   -------------------- */

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
// gcdも呼ぶ！！！
int ngcd(vector<int> &a) {
  int d = a[0];
  for (int i = 1; i < a.size() && d != 1; i++)
    d = gcd(a[i], d);
  return d;
}

vi w(1e6 + 10, 0);

void enum_div(int n) {
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      // ret.push_back(i);
      w[i]++;
      // if (w[i] > 1) return 0;
      if (w[i] > 1)
        return;
      if (i != 1 && i * i != n) {
        // ret.push_back(n/i);
        w[n / i]++;
        if (n / i > 1 && w[n / i] > 1)
          return;
      }
    }
  }
  w[n]++;
  // if (w[n] > 1) return 0;
  // return 1;
}

int main() {
  int n;
  scanf("%d", &n);
  vi v(n);
  rep(i, n) scanf("%d", &v[i]);
  if (ngcd(v) != 1) {
    fin("not coprime");
  } else {
    bool ch = 1;
    rep(i, n) { enum_div(v[i]); }
    for (int i = 2; i < w.size(); i++) {
      if (w[i] > 1) {
        ch = 0;
        break;
      }
    }
    if (ch) {
      fin("pairwise coprime");
    } else {
      fin("setwise coprime");
    }
  }
}
