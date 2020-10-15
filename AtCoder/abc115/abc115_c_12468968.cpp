/*
問題文の引用元：https://atcoder.jp/contests/abc115/tasks/abc115_c
C - Christmas EveEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : とある世界では、今日はクリスマスイブです。高羽氏の庭には N
本の木が植えられています。i 本目の木 (1 \leq i \leq N) の高さは h_i
メートルです。彼は、これらの木のうち K
本を選んで電飾を施すことにしました。より美しい光景をつくるために、できるだけ近い高さの木を飾り付けたいです。より具体的には、飾り付ける木のうち最も高いものの高さを
h_{max} メートル、最も低いものの高さを h_{min} メートルとすると、h_{max} -
h_{min} が小さいほど好ましいです。h_{max} - h_{min}
は最小でいくつにすることができるでしょうか？
制約2 \leq K < N \leq 10^51 \leq h_i \leq 10^9h_i
は整数である。入力入力は以下の形式で標準入力から与えられる。N
Kh_1h_2:h_N出力h_{max} - h_{min} としてありうる最小の値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc115/submissions/12468968
// 提出ID : 12468968
// 問題ID : abc115_c
// コンテストID : abc115
// ユーザID : xryuseix
// コード長 : 2569
// 実行時間 : 47



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

int main() {

  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  int ans = INF;
  rep(i, n) {
    if (i + k - 1 == n)
      break;
    chmin(ans, v[i + k - 1] - v[i]);
  }
  fin(ans);
}