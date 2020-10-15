/*
問題文の引用元：https://atcoder.jp/contests/abc166/tasks/abc166_e
E - This Message Will Self-Destruct in 5sEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 500 点
問題文 : AtCoder 王国の優秀なエージェントであるあなたは、盗まれた極秘情報が
AlDebaran
王国の手に渡ることを阻止するため、取引現場であるパーティに潜入しました。パーティには
N 人の参加者がおり、それぞれ 1 から N までの番号がついています。参加者 i
の身長は A_i
です。あなたは事前の尋問によって、極秘情報を取引するのは以下の条件を満たす 2
人組であることを知っています。2 人の持つ番号の差の絶対値が、2
人の身長の和に等しい。N 人の参加者のうちから 2 人を選んでペアにする方法は
\frac{N(N-1)}{2}
通りありますが、このうち上の条件を満たすペアは何通りあるでしょう？なお、極秘情報の内容が何であるかはあなたの知るところではありません。
制約入力はすべて整数2 \leq N \leq 2 \times 10^51 \leq A_i \leq 10^9\ (1 \leq i
\leq N)入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 \dots
A_N出力条件を満たすペアの個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc166/submissions/12766503
// 提出ID : 12766503
// 問題ID : abc166_e
// コンテストID : abc166
// ユーザID : xryuseix
// コード長 : 2737
// 実行時間 : 147



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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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
  vi p(n);
  rep(i, n) {
    cin >> v[i];
    p[i] = v[i] + i;
    if (p[i] >= n)
      p[i] = -1;
  }
  mii s;
  rep(i, n) { s[v[i] - i]++; }
  ll ans = 0;
  rep(i, n) {
    if (p[i] > 0) {
      ans += s[-p[i]];
    }
  }
  fin(ans);
}
