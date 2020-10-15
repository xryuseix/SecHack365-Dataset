/*
問題文の引用元：https://atcoder.jp/contests/abc175/tasks/abc175_b
B - Making TriangleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 1, \cdots, N の番号がついた N 本の棒があります。棒 i (1 \leq i \leq N)
の長さは L_i です。このうち、三角形を作ることのできるような長さの異なる 3
本の棒を選ぶ方法は何通りあるでしょうか。つまり、3 つの整数 1 \leq i < j < k \leq
N の組であって次の 2 つの条件の両方を満たすものの個数を求めてください。L_i, L_j,
L_k がすべて異なる3 辺の長さが L_i, L_j, L_k であるような三角形が存在する
制約1 \leq N \leq 1001 \leq L_i \leq
10^9入力は全て整数である入力入力は以下の形式で標準入力から与えられる。NL_1 L_2
\cdots L_N出力三角形を作ることのできるような、長さの異なる 3
本の棒を選ぶ方法の個数を出力せよ。



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
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  int ans = 0;
  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (v[i] == v[j])
          continue;
        if (v[i] == v[k])
          continue;
        if (v[k] == v[j])
          continue;
        if (v[i] + v[j] > v[k] && v[i] + v[k] > v[j] && v[k] + v[j] > v[i]) {
          ans++;
          // cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
          // cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
          // cout<<endl;
        }
      }
    }
  }
  fin(ans);
}
