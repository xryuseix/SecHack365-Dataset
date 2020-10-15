/*
問題文の引用元：https://atcoder.jp/contests/abc138/tasks/abc138_c
C - AlchemistEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : あなたは鍋と N 個の具材を持っています。各具材は 価値
と呼ばれる実数の値を持ち、i 個目 (1 \leq i \leq N) の具材の価値は v_i です。2
個の具材を鍋に入れると、それらは消滅して新たに 1
個の具材が生成されます。この新たな具材の価値は元の 2 個の具材の価値を x, y
として (x + y) / 2
であり、この具材を再び鍋に入れることもできます。この具材の合成を N - 1
回行うと、最後に 1
個の具材が残ります。この具材の価値として考えられる最大の値を求めてください。
制約2 \leq N \leq 501 \leq v_i \leq
1000入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。Nv_1
v_2 \ldots v_N出力最後に残る 1 個の具材の価値として考えられる最大の値を表す小数
(または整数) を出力せよ。出力は、ジャッジの出力との絶対誤差または相対誤差が
10^{-5} 以下のとき正解と判定される。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc138/submissions/11665664
// 提出ID : 11665664
// 問題ID : abc138_c
// コンテストID : abc138
// ユーザID : xryuseix
// コード長 : 2365
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
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
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
#define endl '\n';
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

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  double ans = v[0];
  rep(i, n - 1) ans = (ans + v[i + 1]) / 2;
  fin(ans);
}
