/*
問題文の引用元：https://atcoder.jp/contests/abc150/tasks/abc150_d
D - Semi Common Multiple
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点 : 400 点
問題文 : 長さ N の偶数からなる正の整数列 A= {a_1,a_2,...,a_N} と、整数 M
が与えられます。任意の k(1 \leq k \leq N) に対して以下の条件を満たす正の整数 X
を A の「半公倍数」と定義します。X= a_k \times (p+0.5) を満たす負でない整数 p
が存在する。1 以上 M 以下の整数のうちの A の半公倍数の個数を求めてください。
制約1 \leq N \leq 10^51 \leq M \leq 10^92 \leq a_i \leq 10^9a_i
は偶数である。入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。N
Ma_1 a_2 ... a_N出力1 以上 M 以下の整数のうちの A
の半公倍数の個数を出力せよ。48281



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
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

ll div(ll n) {
  ll res = 0;
  while (n % 2 == 0) {
    res++;
    n /= 2;
  }
  return res;
}

// gcdも呼ぶ！！！
// lcmも呼ぶ！！！
// gcdも呼ぶ！！！
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main(void) {

  ll n, m;
  scanf("%lld %lld", &n, &m);
  vll v(n);
  rep(i, n) {
    scanf("%lld", &v[i]);
    if (v[i] % 2 == 1) {
      fin(0);
      return 0;
    }
    v[i] /= 2;
  }

  ll t = div(v[0]);
  rep(i, n) {
    if (t != div(v[i])) {
      fin(0);
      return 0;
    }
    v[i] >>= t;
  }

  m >>= t;

  ll l = v[0];
  for (int i = 1; i < n; i++) {
    l = lcm(l, v[i]);
    if (l > m) {
      fin(0);
      return 0;
    }
  }
  m /= l;

  fin((m + 1) / 2);
}
