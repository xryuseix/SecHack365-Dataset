/*
問題文の引用元：https://atcoder.jp/contests/abc133/tasks/abc133_b
B - Good DistanceEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : D 次元空間上に N 個の点があります。i 番目の点の座標は (X_{i1}, X_{i2},
..., X_{iD}) です。座標 (y_1, y_2, ..., y_D) の点と座標 (z_1, z_2, ..., z_D)
の点の距離は \sqrt{(y_1 - z_1)^2 + (y_2 - z_2)^2 + ... + (y_D - z_D)^2} です。i
番目の点と j 番目の点の距離が整数となるような組 (i, j) (i < j)
はいくつあるでしょうか。
制約入力は全て整数である。2 \leq N \leq 101 \leq D \leq 10-20 \leq X_{ij} \leq
20同じ座標の点は与えられない。すなわち、i \neq j ならば X_{ik} \neq X_{jk} なる
k が存在する。入力入力は以下の形式で標準入力から与えられる。N DX_{11} X_{12} ...
X_{1D}X_{21} X_{22} ... X_{2D}\vdotsX_{N1} X_{N2} ... X_{ND}出力i 番目の点と j
番目の点の距離が整数となるような組 (i, j) (i < j) の数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc133/submissions/6270297
// 提出ID : 6270297
// 問題ID : abc133_b
// コンテストID : abc133
// ユーザID : xryuseix
// コード長 : 1874
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
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
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, d;
  cin >> n >> d;
  vvi v(n, vi(d));
  rep(i, n) rep(j, d) cin >> v[i][j];
  int ans = 0;
  double tmp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      tmp = 0;
      for (int k = 0; k < d; k++) {
        tmp += (v[i][k] - v[j][k]) * (v[i][k] - v[j][k]);
      }
      tmp = sqrt(tmp);
      if (ceil(tmp) == floor(tmp))
        ans++;
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
