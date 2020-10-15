/*
問題文の引用元：https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b
B - Nice ShoppingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 :
あなたは、冷蔵庫と電子レンジを買うために、とある家電量販店に来ました。この家電量販店では、
A 種類の冷蔵庫と B 種類の電子レンジが販売されています。 i 番目( 1 \le i \le A
)の冷蔵庫の値段は a_i 円であり、 j 番目( 1 \le j \le B )の電子レンジの値段は b_j
円です。また、あなたは M 種類の割引券を所持しており、 i 番目 ( 1 \le i \le M
)の割引券では、 x_i 番目の冷蔵庫と y_i 番目の電子レンジを同時に買うと、
支払総額が c_i
円安くなります。ただし、複数の割引券を同時に使うことはできません。さて、あなたは冷蔵庫と電子レンジをちょうど
1 台ずつ買おうと思っています。かかる金額の最小値を求めてください。
制約入力は全て整数 1 \le A \le 10^5  1 \le B \le 10^5  1 \le M \le 10^5  1 \le
a_i , b_i , c_i \le 10^5  1 \le x_i \le A  1 \le y_i \le B  c_i \le a_{x_i} +
b_{y_i} 入力入力は以下の形式で標準入力から与えられる。A B Ma_1 a_2 ... a_Ab_1
b_2 ... b_Bx_1 y_1 c_1\vdotsx_M y_M c_M出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/hitachi2020/submissions/10699685
// 提出ID : 10699685
// 問題ID : hitachi2020_b
// コンテストID : hitachi2020
// ユーザID : xryuseix
// コード長 : 2200
// 実行時間 : 140



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

  int ans = INF;
  int a, b, m;
  cin >> a >> b >> m;
  vi A(a), B(b);
  rep(i, a) cin >> A[i];
  rep(i, b) cin >> B[i];
  vi x(m), y(m), c(m);
  rep(i, m) cin >> x[i] >> y[i] >> c[i];
  int mina = INF, minb = INF;
  rep(i, a) chmin(mina, A[i]);
  rep(i, b) chmin(minb, B[i]);
  chmin(ans, mina + minb);
  rep(i, m) { chmin(ans, A[x[i] - 1] + B[y[i] - 1] - c[i]); }
  fin(ans);
}
