/*
問題文の引用元：https://atcoder.jp/contests/abc167/tasks/abc167_d
D - Teleporter
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 400 点
問題文 : 高橋王国には N 個の町があります。町は 1 から N
まで番号が振られています。それぞれの町にはテレポーターが 1
台ずつ設置されています。町 i (1 \leq i \leq N) のテレポーターの転送先は町 A_i
です。高橋王は正の整数 K が好きです。わがままな高橋王は、町 1
から出発してテレポーターをちょうど K
回使うと、どの町に到着するかが知りたいです。高橋王のために、これを求めるプログラムを作成してください。
制約2 \leq N \leq 2 \times 10^51 \leq A_i \leq N1 \leq K \leq
10^{18}入力入力は以下の形式で標準入力から与えられる。N KA_1 A_2 \dots A_N出力町
1 から出発してテレポーターをちょうど K 回使ったとき到着する町の番号を出力せよ。



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

  ll n, k;
  cin >> n >> k;
  const int MAX = 63;
  vvi doubling(MAX, vi(n));
  vi v(n);
  rep(i, n) {
    cin >> doubling[0][i];
    doubling[0][i]--;
  }
  for (int i = 1; i < MAX; i++) {
    rep(j, n) { doubling[i][j] = doubling[i - 1][doubling[i - 1][j]]; }
  }
  int pos = 0;
  for (int i = MAX - 1; i >= 0; i--) {
    if ((1LL << i) & k) {
      pos = doubling[i][pos];
    }
  }
  cout << pos + 1 << endl;
}