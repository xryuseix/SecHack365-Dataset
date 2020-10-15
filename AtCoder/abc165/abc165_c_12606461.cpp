/*
問題文の引用元：https://atcoder.jp/contests/abc165/tasks/abc165_c
C - Many RequirementsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 正整数 N , M , Q と、4 つの整数の組 ( a_i , b_i , c_i , d_i ) Q
組が与えられます。以下の条件を満たす数列 A を考えます。A は、長さ N
の正整数列である。1 \leq A_1 \leq A_2 \le \cdots \leq A_N \leq
Mこの数列の得点を、以下のように定めます。A_{b_i} - A_{a_i} = c_i を満たすような
i についての、 d_i の総和 (そのような i が存在しないときは 0)A
の得点の最大値を求めてください。
制約入力は全て整数2 ≤ N ≤ 101 \leq M \leq 101 \leq Q \leq 501 \leq a_i < b_i
\leq N ( i = 1, 2, ..., Q )0 \leq c_i \leq M - 1 ( i = 1, 2, ..., Q )(a_i, b_i,
c_i) \neq (a_j, b_j, c_j) ( i \neq j のとき)1 \leq d_i \leq 10^5 ( i = 1, 2,
..., Q )入力入力は以下の形式で標準入力から与えられる。N M Qa_1 b_1 c_1 d_1:a_Q
b_Q c_Q d_Q出力A の得点の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc165/submissions/12606461
// 提出ID : 12606461
// 問題ID : abc165_c
// コンテストID : abc165
// ユーザID : xryuseix
// コード長 : 3090
// 実行時間 : 22



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

ll ans = 0;
void check(vvi &a, vi &v) {
  ll t = 0;
  rep(i, a.size()) {
    if (v[a[i][1]] - v[a[i][0]] == a[i][2]) {
      t += a[i][3];
    }
  }
  chmax(ans, t);
}

void dfs(int pos, vi &v, int m, vvi &a) {
  if (pos == v.size()) {
    check(a, v);
    return;
  }
  int fi = 1;
  if (pos)
    fi = v[pos - 1];
  for (int i = fi; i <= m; i++) {
    v[pos] = i;
    dfs(pos + 1, v, m, a);
  }
  return;
}

int main() {

  int n, m, q;
  cin >> n >> m >> q;
  vvi a(q, vi(4));
  rep(i, q) {
    rep(j, 4) { cin >> a[i][j]; }
    a[i][0]--;
    a[i][1]--;
  }
  vi v(n);
  dfs(0, v, m, a);
  fin(ans);
}
