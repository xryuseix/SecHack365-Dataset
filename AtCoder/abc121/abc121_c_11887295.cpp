/*
問題文の引用元：https://atcoder.jp/contests/abc121/tasks/abc121_c
C - Energy Drink CollectorEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 栄養ドリンクにレーティング上昇効果があると聞いた高橋くんは、M
本の栄養ドリンクを買い集めることにしました。栄養ドリンクが売られている店は N
軒あり、i 軒目の店では 1 本 A_i 円の栄養ドリンクを B_i
本まで買うことができます。最小で何円あれば M
本の栄養ドリンクを買い集めることができるでしょうか。なお、与えられる入力では、十分なお金があれば
M 本の栄養ドリンクを買い集められることが保証されます。
制約入力は全て整数である。1 \leq N, M \leq 10^51 \leq A_i \leq 10^91 \leq B_i
\leq 10^5B_1 + ... + B_N \geq M入力入力は以下の形式で標準入力から与えられる。N
MA_1 B_1A_2 B_2\vdotsA_N B_N出力M
本の栄養ドリンクを買い集めるのに必要な最小の金額を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc121/submissions/11887295
// 提出ID : 11887295
// 問題ID : abc121_c
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 2774
// 実行時間 : 77



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

  int n, m;
  cin >> n >> m;
  vpii v(n);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v[i] = mp(a, b);
  }
  Sort(v);
  ll ans = 0;
  int buy = 0;
  for (int i = 0; i < n; i++) {
    if (buy == m)
      break;
    if (m - buy >= v[i].se) {
      ans += 1LL * v[i].se * v[i].fi;
      buy += v[i].se;
    } else {
      ans += (m - buy) * 1LL * v[i].fi;
      break;
    }
  }
  fin(ans);
}
