/*
問題文の引用元：https://atcoder.jp/contests/abc145/tasks/abc145_d
D - KnightEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 二次元グリッドの原点 (0,0)
にチェスのナイトの駒があります。ナイトの駒はマス (i,j) にあるとき (i+1,j+2) か
(i+2, j+1) のどちらかのマスにのみ動かすことができます。ナイトの駒をマス (X,Y)
まで移動させる方法は何通りありますか？10^9+7 で割った余りを求めてください。
制約1 \leq X \leq 10^61 \leq Y \leq
10^6入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。X
Y出力ナイトの駒を (0,0) から (X,Y) まで移動させる方法の数を、10^9+7
で割った余りを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc145/submissions/10936577
// 提出ID : 10936577
// 問題ID : abc145_d
// コンテストID : abc145
// ユーザID : xryuseix
// コード長 : 2654
// 実行時間 : 8



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

// (a/b)%P の場合は，(a%P)*modinv(b)%P とする
ll modinv(ll a) {
  ll b = MOD, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= MOD;
  if (u < 0)
    u += MOD;
  return u;
}

ll kai(int a) {
  ll res = 1;
  for (ll i = 1; i <= a; i++) {
    res *= i;
    res %= MOD;
  }
  return res;
}

int main() {
  int x, y;
  cin >> x >> y;
  if (x > y)
    swap(x, y);
  if (x * 2 == y) {
    fin(1);
    return 0;
  }
  ll a = 0, b = 0;
  while (1) {
    if (x - 2 < 0) {
      fin(0);
      return 0;
    }
    x -= 2;
    y--;
    a++;
    if (2 * x == y) {
      break;
    }
  }

  b += x;
  fin(kai(a + b) % MOD * modinv(kai(a) * kai(b)) % MOD);
  // cout<<a<<" "<<b<<endl;
}
