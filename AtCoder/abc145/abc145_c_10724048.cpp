/*
問題文の引用元：https://atcoder.jp/contests/abc145/tasks/abc145_c
C - Average LengthEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 座標平面上に N 個の町があります。町 i は、座標 ( x_i , y_i )
に位置しています。町 i と町 j の間の距離は
\sqrt{\left(x_i-x_j\right)^2+\left(y_i-y_j\right)^2} です。これらの町を全て 1
回ずつ訪れるとき、町を訪れる経路は全部で N! 通りあります。1
番目に訪れる町から出発し、2 番目に訪れる町、3
番目に訪れる町、\ldots、を経由し、N 番目に訪れる町に到着するまでの移動距離
(町から町への移動は直線移動とします) を、その経路の長さとします。これらの N!
通りの経路の長さの平均値を計算してください。
制約2 ≤ N ≤ 8-1000 ≤ x_i ≤ 1000-1000 ≤ y_i ≤ 1000\left(x_i, y_i\right) \neq
\left(x_j, y_j\right) ( i \neq j のとき)(21:12 追記)
入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。Nx_1
y_1:x_N
y_N出力経路の長さの平均値を出力せよ。出力は、ジャッジの出力との絶対誤差または相対誤差が
10^{-6} 以下のとき正解と判定される。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc145/submissions/10724048
// 提出ID : 10724048
// 問題ID : abc145_c
// コンテストID : abc145
// ユーザID : xryuseix
// コード長 : 2223
// 実行時間 : 5



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

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) v[i] = i;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  ld ans = 0;
  do {
    ld len = 0;
    rep(i, n - 1) len +=
        sqrt((x[v[i]] - x[v[i + 1]]) * (x[v[i]] - x[v[i + 1]]) +
             (y[v[i]] - y[v[i + 1]]) * (y[v[i]] - y[v[i + 1]]));
    ans += len;
  } while (next_permutation(all(v)));
  int kai = 1;
  rep(i, n) kai *= i + 1;
  ans /= kai;
  printf("%.7Lf\n", ans);
}
