/*
問題文の引用元：https://atcoder.jp/contests/abc134/tasks/abc134_c
C - Exception HandlingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 長さ N の数列 A_1, A_2, ..., A_N が与えられます。1 以上 N 以下の各整数
i に対し、次の問いに答えてください。数列中の A_i を除く N - 1
個の要素のうちの最大の値を求めよ。
制約2 \leq N \leq 2000001 \leq A_i \leq
200000入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。NA_1:A_N出力N
行出力せよ。i 行目 (1 \leq i \leq N) に、数列中の A_i を除く N - 1
個の要素のうちの最大の値を出力すること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc134/submissions/6452300
// 提出ID : 6452300
// 問題ID : abc134_c
// コンテストID : abc134
// ユーザID : xryuseix
// コード長 : 1739
// 実行時間 : 331



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) {
    cin >> a[i];
    b[i] = a[i];
  }
  Sort(b);
  int omax = b[n - 1], tmax = b[n - 2];
  for (int i = 0; i < n; i++) {
    if (a[i] == omax)
      cout << tmax << endl;
    else
      cout << omax << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
