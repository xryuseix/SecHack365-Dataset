/*
問題文の引用元：https://atcoder.jp/contests/abc105/tasks/abc105_c
C - Base -2 NumberEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点 : 300 点
問題文 : 整数 N が与えられるので、N の -2 進数表現を求めてください。ここで、S が
N の -2 進数表現であるとは、以下を全て満たすことです。S は 0 および 1
のみからなる文字列であるS = 0 でなければ S の先頭の文字は 1 であるS = S_k
S_{k-1} ... S_0 とすると、S_0 \times (-2)^0 + S_1 \times (-2)^1 + ... + S_k
\times (-2)^k = N が成り立つなお、任意の整数 M に対して M の -2
進数表現が一意に定まることが証明できます。
制約入力はすべて整数である-10^9 \leq N \leq
10^9入力入力は以下の形式で標準入力から与えられる。N出力N の -2
進数表現を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc105/submissions/7969359
// 提出ID : 7969359
// 問題ID : abc105_c
// コンテストID : abc105
// ユーザID : xryuseix
// コード長 : 1805
// 実行時間 : 1



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  string s = "";
  int n;
  cin >> n;
  while (n != 0) {
    if (n % 2 != 0) {
      s += '1';
      n--;
    } else {
      s += '0';
    }
    n /= -2;
  }
  reverse(s.begin(), s.end());
  if (s.size() == 0) {
    fin(0);
    return 0;
  }
  fin(s);
}
