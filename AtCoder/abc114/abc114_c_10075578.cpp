/*
問題文の引用元：https://atcoder.jp/contests/abc114/tasks/abc114_c
C - 755
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 整数 N が与えられます。1 以上 N 以下の整数のうち、七五三数
は何個あるでしょうか？ここで、七五三数とは以下の条件を満たす正の整数です。十進法で表記したとき、数字
7, 5, 3 がそれぞれ 1 回以上現れ、これら以外の数字は現れない。
制約1 \leq N < 10^9N
は整数である。入力入力は以下の形式で標準入力から与えられる。N出力1 以上 N
以下の七五三数の個数を出力せよ。



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

ll over = 0;

bool is375(ll n) {
  bool a = 0, b = 0, c = 0;
  while (n > 0) {
    if (n % 10 == 3)
      a = 1;
    if (n % 10 == 7)
      b = 1;
    if (n % 10 == 5)
      c = 1;
    n /= 10;
  }
  return a && b && c;
}
set<ll> s;

void dfs(ll num, ll n) {
  ll next = num * 10 + 3;
  // cout<<num<<endl;
  if (next <= n) {
    if (!s.count(next)) {
      s.insert(next);
      dfs(next, n);
    }
  } else {
    if (is375(num)) {
      over++;
      return;
    }
  }
  next += 2;
  if (next <= n) {
    if (!s.count(next)) {
      s.insert(next);
      dfs(next, n);
    }
  } else {
    if (is375(num)) {
      over++;
      return;
    }
  }
  next += 2;
  if (next <= n) {
    if (!s.count(next)) {
      s.insert(next);
      dfs(next, n);
    }
  } else {
    if (is375(num)) {
      over++;
      return;
    }
  }
  if (is375(num))
    over++;
  return;
}

int main(void) {

  ll n;
  cin >> n;
  dfs(3LL, n);
  dfs(5LL, n);
  dfs(7LL, n);
  fin(over);
}
