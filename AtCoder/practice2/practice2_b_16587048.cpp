/*
問題文の引用元：https://atcoder.jp/contests/practice2/tasks/practice2_b
B - Fenwick TreeEditorial
Time Limit : 5 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 長さ N の数列 a_0, a_1, ..., a_{N-1} に Q
個のクエリが飛んできます。処理してください。0 p x: a_p \gets a_p + x1 l r:
\sum_{i = l}^{r - 1}{a_i} を出力する。
制約1 \leq N, Q \leq 500,0000 \leq a_i, x \leq 10^90 \leq p < N0 \leq l_i < r_i
\leq N入力N Qa_0 a_1 ... a_{N -
1}\textrm{Query}_0\textrm{Query}_1:\textrm{Query}_{Q - 1}出力クエリ 1
ごとに各行に出力してください。



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
#include <atcoder/fenwicktree>
using namespace atcoder;
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
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 61;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

/* --------------------   ここまでテンプレ   -------------------- */

int main() {
  int n, q;
  cin >> n >> q;
  fenwick_tree<ll> fw(n);
  rep(i, n) {
    int a;
    cin >> a;
    fw.add(i, a);
  }
  rep(i, q) {
    int t, u, v;
    cin >> t >> u >> v;
    if (t) {
      cout << fw.sum(u, v) << endl;
    } else {
      fw.add(u, v);
    }
  }
}
