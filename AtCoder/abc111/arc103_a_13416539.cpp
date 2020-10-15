/*
問題文の引用元：https://atcoder.jp/contests/abc111/tasks/arc103_a
C - /\/\/\/
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 数列 a_1,a_2,... ,a_n が以下の条件を満たすとき、 /\/\/\/
と呼ぶことにします。各 i = 1,2,..., n-2 について、a_i =
a_{i+2}数列に現れる数はちょうど 2 種類偶数長の数列 v_1,v_2,...,v_n
が与えられます。要素をいくつか書き換えることでこの数列を  /\/\/\/
にしたいです。書き換える要素の数は最小でいくつになるか求めてください。
制約2 \leq n \leq 10^5n は偶数1 \leq v_i \leq 10^5v_i
は整数入力入力は以下の形式で標準入力から与えられる。nv_1 v_2 ...
v_n出力書き換える要素数の最小値を出力してください。



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
constexpr double EPS = 1e-9;

int main() {

  int n;
  cin >> n;
  vi v(n);
  mii m, p;
  rep(i, n) {
    cin >> v[i];
    if (i % 2)
      p[v[i]]++;
    else
      m[v[i]]++;
  }
  vpii mM(2), pM(2);
  irep(i, m) {
    if (i->second > mM[1].se) {
      mM[1].fi = i->fi;
      mM[1].se = i->se;
      if (mM[0].se < mM[1].se)
        swap(mM[0], mM[1]);
    }
  }
  irep(i, p) {
    if (i->second > pM[1].se) {
      pM[1].fi = i->fi;
      pM[1].se = i->se;
      if (pM[0].se < pM[1].se)
        swap(pM[0], pM[1]);
    }
  }
  int ans = INF;
  if (mM[0].fi != pM[0].fi)
    chmin(ans, n - mM[0].se - pM[0].se);
  if (mM[1].fi != pM[0].fi)
    chmin(ans, n - mM[1].se - pM[0].se);
  if (mM[0].fi != pM[1].fi)
    chmin(ans, n - mM[0].se - pM[1].se);
  if (mM[1].fi != pM[1].fi)
    chmin(ans, n - mM[1].se - pM[1].se);
  fin(ans);
}
