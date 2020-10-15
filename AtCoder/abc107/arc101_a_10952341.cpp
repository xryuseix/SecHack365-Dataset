/*
問題文の引用元：https://atcoder.jp/contests/abc107/tasks/arc101_a
C - CandlesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 数直線上に N 本のろうそくが置かれています。左から i
番目のろうそくは座標 x_i に置かれています。ただし、x_1 < x_2 < ... < x_N
が成り立ちます。最初、どのろうそくにも火が付いていません。すぬけ君は、N 本のうち
K 本のろうそくに火を付けることにしました。今、すぬけ君は座標 0
にいます。すぬけ君は、数直線上を左右に速度 1
で移動することができます。また、自分と同じ座標のろうそくに火を付けることができます。このとき、火を付けるのに掛かる時間は無視できます。K
本のろうそくに火を付けるのに必要な最小の時間を求めてください。
制約1 \leq N \leq 10^51 \leq K \leq Nx_i は整数である。|x_i| \leq 10^8x_1 < x_2
< ... < x_N入力入力は以下の形式で標準入力から与えられる。N Kx_1 x_2 ... x_N出力K
本のろうそくに火を付けるのに必要な最小の時間を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc107/submissions/10952341
// 提出ID : 10952341
// 問題ID : arc101_a
// コンテストID : abc107
// ユーザID : xryuseix
// コード長 : 2120
// 実行時間 : 41



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
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
  ll ans = LLINF;
  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];

  for (int i = 0; i < n - k + 1; i++) {
    ll t;
    t = v[k + i - 1] - v[i];
    t += min(abs(v[i]), abs(v[k + i - 1]));
    // cout<<i<<" "<<t<<endl;
    chmin(ans, t);
  }
  fin(ans);
}
