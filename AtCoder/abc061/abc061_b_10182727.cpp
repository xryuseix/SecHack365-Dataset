/*
問題文の引用元：https://atcoder.jp/contests/abc061/tasks/abc061_b
B - Counting Roads
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : N 個の都市があり、M 本の道路があります。i(1≦i≦M) 番目の道路は、都市 a_i
と 都市 b_i (1≦a_i,b_i≦N) を双方向に結んでいます。 同じ 2
つの都市を結ぶ道路は、1 本とは限りません。
各都市から他の都市に向けて、何本の道路が伸びているか求めてください。
制約2≦N,M≦501≦a_i,b_i≦N a_i ≠ b_i 入力は全て整数である。
入力入力は以下の形式で標準入力から与えられる。  N Ma_1 b_1:  a_M b_M出力答えを N
行に出力せよ。 i(1≦i≦N) 行目には、都市 i
から他の都市に向けて、何本の道路が伸びているかを出力せよ。



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

  int n, m;
  cin >> n >> m;
  vvi v(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    v[a - 1].pb(b - 1);
    v[b - 1].pb(a - 1);
  }
  rep(i, n) cout << v[i].size() << endl;
}
