/*
問題文の引用元：https://atcoder.jp/contests/arc086/tasks/arc086_a
C - Not so Diverse
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 高橋君は，N 個のボールを持っています．最初，i 番目のボールには，整数
A_i
が書かれています．高橋君は，いくつかのボールに書かれている整数を書き換えて，N
個のボールに書かれている整数が K
種類以下になるようにしたいです．高橋君は，少なくとも何個のボールの整数を書き換える必要があるでしょうか？
制約1 \leq K \leq N \leq 2000001 \leq A_i \leq
N与えられる数値はすべて整数入力入力は以下の形式で標準入力から与えられる。N KA_1
A_2 ...
A_N出力高橋君が，少なくとも何個のボールの整数を書き換える必要があるかを出力せよ．



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

  int n, k;
  cin >> n >> k;
  map<int, int> m;
  rep(i, n) {
    int a;
    cin >> a;
    m[a]++;
  }
  vi v;
  irep(i, m) { v.pb(i->second); }
  Sort(v);
  ll ans = 0;
  for (int i = 0; i < max(0, (int)v.size() - k); i++) {
    ans += v[i];
  }
  fin(ans);
}
