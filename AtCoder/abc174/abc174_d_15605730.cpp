/*
問題文の引用元：https://atcoder.jp/contests/abc174/tasks/abc174_d
D - Alter Altar
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 祭壇に、左から右へと一列に並ぶ N 個の石が祀られています。左から i 個目
(1 \leq i \leq N) の石の色は文字 c_i として与えられ、c_i が R のとき赤、W
のとき白です。あなたは、以下の二種の操作を任意の順に何度でも行うことができます。石を
2 個選び (隣り合っていなくてもよい)、それらを入れ替える。石を 1
個選び、その石の色を変える
(赤なら白に、白なら赤に)。占い師によると、赤い石の左隣に置かれた白い石は災いを招きます。そのような白い石がない状態に至るには、最小で何回の操作が必要でしょうか。
制約2 \leq N \leq 200000c_i は R または
W入力入力は以下の形式で標準入力から与えられる。Nc_{1}c_{2}...c_{N}出力必要な最小の操作回数を表す整数を出力せよ。



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
constexpr ll MOD = 998244353; // 1000000007;
constexpr ld EPS = 1e-11;

int main() {

  int ans = 0;
  int n;

  cin >> n;
  string s;
  cin >> s;
  int r = n - 1;
  for (int i = 0; i < n && i < r; i++) {
    if (s[i] == 'R')
      continue;
    while (r >= 0 && s[r] == 'W') {
      r--;
    }
    if (i < r) {
      swap(s[i], s[r]);
      ans++;
    }
  }
  fin(ans);
}
