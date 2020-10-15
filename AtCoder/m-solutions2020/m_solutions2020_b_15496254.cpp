/*
問題文の引用元：https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_b
B - Magic 2
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 200 点
問題文 : M 君は、以下の 3 枚のカードを持っています。  整数 A
が書かれた赤のカード整数 B が書かれた緑のカード整数 C
が書かれた青のカード彼は天才的な魔術師なので、以下の操作を K
回まで行うことができます。  3 枚のうちいずれか 1
枚のカードを選び、書かれた整数を 2
倍する。操作を行った後、以下の条件が同時に満たされれば、魔術は成功です。
緑のカードに書かれている整数は、赤のカードに書かれている整数より真に大きい。青のカードに書かれている整数は、緑のカードに書かれている整数より真に大きい。魔術を成功させることができるかどうか判定してください。
制約1 \leq A, B, C \leq 71 \leq K \leq
7入力はすべて整数入力入力は以下の形式で標準入力から与えられます。  A B
CK出力魔術を成功させることができる場合は、Yes
と出力してください。そうでない場合は、No と出力してください。



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
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans = 0;
  while (a >= b) {
    ans++;
    b *= 2;
  }
  while (b >= c) {
    ans++;
    c *= 2;
  }
  Yn(ans <= k);
}
