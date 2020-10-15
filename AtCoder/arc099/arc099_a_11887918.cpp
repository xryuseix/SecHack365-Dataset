/*
問題文の引用元：https://atcoder.jp/contests/arc099/tasks/arc099_a
C - MinimizationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 長さ N の数列 A_1, A_2, ..., A_N があります．最初，この数列の要素は 1,
2, ..., N
を並び替えたものになっています．スヌケ君は，この数列に対して次の操作を行うことができます．数列のうち，連続した
K
個の要素を選ぶ．その後，選んだ要素それぞれの値を，選んだ要素の中の最小値で置き換える．スヌケ君は，上の操作を何回か繰り返すことで，この数列の要素をすべて等しくしたいです．必要な操作の回数の最小値を求めてください．この問題の
制約の下，このようなことは必ず可能であることが証明できます．
制約2 \leq K \leq N \leq 100000A_1, A_2, ..., A_N は 1, 2, ..., N
の並び替え入力入力は以下の形式で標準入力から与えられる．N KA_1 A_2 ...
A_N出力必要な操作の回数の最小値を出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/arc099/submissions/11887918
// 提出ID : 11887918
// 問題ID : arc099_a
// コンテストID : arc099
// ユーザID : xryuseix
// コード長 : 2515
// 実行時間 : 29



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
  vi v(n);
  rep(i, n) { cin >> v[i]; }
  int ans = 0;
  n -= m;
  ans++;
  ans += ceil(n / (double)(m - 1));
  fin(ans);
}
