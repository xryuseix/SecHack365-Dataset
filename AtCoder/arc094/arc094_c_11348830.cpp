/*
問題文の引用元：https://atcoder.jp/contests/arc094/tasks/arc094_c
E - Tozan and GezanEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 700 点
問題文 : 非負整数からなる数列 A,B が与えられます。A,B の長さはともに N であり、A
の値の総和と B の値の総和は等しいです。A の i 項目は A_i であり、B の i 項目は
B_i です。とざん君とげざん君は、以下の操作を繰り返します。もし A,B
が列として等しいなら、繰り返しを終了するそうでない場合、まずとざん君が A
の正の要素を 1 つ選び、1 減らすその後、げざん君が B の正の要素を 1 つ選び、1
減らすその後、ペットの高橋君に飴を 1
つ食べさせるとざん君は繰り返しが終了するまでに高橋君に食べさせる飴の個数を最大に、げざん君は最小にしたいです。両者最適に操作を行ったとき、高橋君に食べさせる飴の個数を求めてください。
制約1 \leq N \leq 2 × 10^50 \leq A_i,B_i \leq 10^9(1\leq i\leq N)A,B
の値の総和は等しい入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。NA_1
B_1:A_N
B_N出力両者最適に操作を行ったとき、高橋君に食べさせる飴の個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc094/submissions/11348830
// 提出ID : 11348830
// 問題ID : arc094_c
// コンテストID : arc094
// ユーザID : xryuseix
// コード長 : 2347
// 実行時間 : 18



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
#define itn int;
#define endl '\n';
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
  ll sum = 0;
  ll minb = LLINF;
  bool issame = 1;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    if (a != b)
      issame = 0;
    if (a > b)
      chmin(minb, b);
    sum += a;
  }
  if (issame)
    fin(0);
  else
    fin(sum - minb);
}
