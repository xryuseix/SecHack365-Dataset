/*
問題文の引用元：https://atcoder.jp/contests/abc093/tasks/arc094_a
C - Same IntegersEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 3 つの整数 A,B,C が与えられます。以下の 2
種類の操作を好きな順で繰り返して A,B,C
をすべて等しくするために必要な操作の最小回数を求めてください。A,B,C のうち 2
つを選んで、その両方を 1 増やすA,B,C のうち 1 つを選んで、その整数を 2
増やすなお、これらの操作を繰り返して A,B,C
をすべて等しくできることは証明できます。
制約0 \leq A,B,C \leq
50入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A B
C出力A,B,C をすべて等しくするために必要な操作の最小回数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc093/submissions/12556426
// 提出ID : 12556426
// 問題ID : arc094_a
// コンテストID : abc093
// ユーザID : xryuseix
// コード長 : 2665
// 実行時間 : 1



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

int main() {

  vi v(3);
  int ans = 0;
  cin >> v[0] >> v[1] >> v[2];
  Sort(v);
  v[0] += v[2] - v[1];
  ans += v[2] - v[1];
  v[1] = v[2];

  if ((v[1] - v[0]) % 2 == 0)
    ans += (v[1] - v[0]) / 2;
  else {
    ans += (v[1] - v[0]) / 2 + 2;
  }
  fin(ans);
}
