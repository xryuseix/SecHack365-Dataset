/*
問題文の引用元：https://atcoder.jp/contests/agc010/tasks/agc010_a
A - Addition
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 黒板に N 個の整数が書かれています。i 番目の整数は A_i
です。これらの数に対して、高橋君は以下の操作を繰り返します。偶奇が等しい 2
つの数 A_i,A_j を一組選び、それらを黒板から消す。その後、二つの数の和 A_i+A_j
を黒板に書く。最終的に黒板に数が 1
つだけ残るようにできるかどうか判定して下さい。
制約2 ≦ N ≦ 10^51 ≦ A_i ≦ 10^9A_i
は整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 … A_N出力黒板に数 1
つだけ残るようにできるなら YES を、そうでないなら NO を出力せよ。



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

  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  int odd = 0;
  int even = 0;
  rep(i, n) {
    if (a[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  if (odd % 2 == 1)
    fin("NO");
  else {
    fin("YES");
  }
}
