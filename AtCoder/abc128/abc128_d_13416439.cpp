/*
問題文の引用元：https://atcoder.jp/contests/abc128/tasks/abc128_d
D - equeue
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : あなたは誕生日プレゼントとして友人から dequeue D を貰いました。D
は左右に長い筒であり、N 個の宝石が一列に詰められています。宝石の価値は左から順に
V_1, V_2, ..., V_N
です。負の価値の宝石が詰められている場合もあります。はじめ、あなたは 1
つも宝石を持っていません。あなたは、D に対して以下の 4 種類の操作から 1
つを選んで実行することを K 回まで行うことができます。操作 A: D
に詰められた宝石のうち、左端の宝石を取り出して手に入れる。D
が空の場合、この操作を行えない。操作 B: D
に詰められた宝石のうち、右端の宝石を取り出して手に入れる。D
が空の場合、この操作を行えない。操作 C: 持っている宝石を 1 つ選んで D
の左端に詰める。宝石を持っていない場合、この操作を行えない。操作 D:
持っている宝石を 1 つ選んで D
の右端に詰める。宝石を持っていない場合、この操作を行えない。操作終了後に持っている宝石の価値の合計の最大値を求めてください。
制約入力は全て整数である。1 \leq N \leq 501 \leq K \leq 100-10^7 \leq V_i \leq
10^7入力入力は以下の形式で標準入力から与えられる。N KV_1 V_2 ...
V_N出力操作終了後に持っている宝石の価値の合計の最大値を出力せよ。



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

  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  int ans = -INF;
  for (int l = 0; l <= k; l++) {
    for (int r = 0; r <= k; r++) {
      if (l + r > n || l + r > k)
        continue;
      int rest = k - l - r;
      vi w;
      int sum = 0;
      for (int i = 0; i < l; i++) {
        w.pb(v[i]);
        sum += v[i];
      }
      for (int i = 0; i < r; i++) {
        w.pb(v[n - i - 1]);
        sum += v[n - 1 - i];
      }
      Sort(w);
      for (int i = 0; i < rest && i < w.size(); i++) {
        if (w[i] > 0)
          break;
        sum -= w[i];
      }
      chmax(ans, sum);
    }
  }
  fin(max(ans, 0));
}
