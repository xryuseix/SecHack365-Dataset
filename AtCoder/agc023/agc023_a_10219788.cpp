/*
問題文の引用元：https://atcoder.jp/contests/agc023/tasks/agc023_a
A - Zero-Sum Ranges
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 長さ N の整数列 A があります。A の 空でない 連続する
部分列であって、その総和が 0
になるものの個数を求めてください。ただし、ここで数えるのは 部分列の取り出し方
であることに注意してください。つまり、ある 2
つの部分列が列として同じでも、取り出した位置が異なるならば、それらは別々に数えるものとします。
制約1 \leq N \leq 2 \times 10^5-10^9 \leq A_i \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N出力A の空でない連続する部分列であって、その総和が 0
になるものの個数を出力せよ。



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
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
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

int main(void) {

  ll n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  ll csum[n + 1];
  csum[0] = 0;
  rep(i, n) csum[i + 1] = csum[i] + v[i];
  map<ll, ll> m;
  ll ans = 0;
  for (int i = n; i >= 0; i--) {
    ans += m[csum[i]];
    m[csum[i]]++;
  }
  fin(ans);
}