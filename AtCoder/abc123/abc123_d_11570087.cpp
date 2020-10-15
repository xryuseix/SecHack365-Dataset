/*
問題文の引用元：https://atcoder.jp/contests/abc123/tasks/abc123_d
D - Cake 123Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点: 400 点
問題文 : AtCoder
洋菓子店は数字の形をしたキャンドルがついたケーキを販売しています。ここには 1, 2,
3 の形をしたキャンドルがついたケーキがそれぞれ X 種類、Y 種類、Z
種類あります。それぞれのケーキには「美味しさ」という整数の値が以下のように割り当てられています。
1 の形のキャンドルがついたケーキの美味しさはそれぞれ A_1, A_2, ..., A_X2
の形のキャンドルがついたケーキの美味しさはそれぞれ B_1, B_2, ..., B_Y3
の形のキャンドルがついたケーキの美味しさはそれぞれ C_1, C_2, ..., C_Z高橋君は
ABC 123 を記念するために、1, 2, 3 の形のキャンドルがついたケーキを 1
つずつ買うことにしました。そのようにケーキを買う方法は X \times Y \times Z
通りあります。  これらの選び方を 3
つのケーキの美味しさの合計が大きい順に並べたとき、1, 2, ..., K
番目の選び方でのケーキの美味しさの合計をそれぞれ出力してください。
制約1 \leq X \leq 1 \ 0001 \leq Y \leq 1 \ 0001 \leq Z \leq 1 \ 0001 \leq K \leq
\min(3 \ 000, X \times Y \times Z)1 \leq A_i \leq 10 \ 000 \ 000 \ 0001 \leq B_i
\leq 10 \ 000 \ 000 \ 0001 \leq C_i \leq 10 \ 000 \ 000 \
000入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。
X Y Z KA_1 \ A_2 \ A_3 \ ... \ A_XB_1 \ B_2 \ B_3 \ ... \ B_YC_1 \ C_2 \ C_3 \
... \ C_Z出力i 行目に、
問題文 : 中の i 番目の値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc123/submissions/11570087
// 提出ID : 11570087
// 問題ID : abc123_d
// コンテストID : abc123
// ユーザID : xryuseix
// コード長 : 2606
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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <random>
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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
#define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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
  ll x, y, z, k;
  cin >> x >> y >> z >> k;
  vll a(x), b(y), c(z);
  rep(i, x) cin >> a[i];
  rep(i, y) cin >> b[i];
  rep(i, z) cin >> c[i];
  vll ab;
  rep(i, x) rep(j, y) ab.pb(a[i] + b[j]);
  Rort(ab);
  Rort(c);
  vll ans;
  rep(i, min(k, (ll)ab.size())) {
    rep(j, min(k, (ll)c.size())) { ans.pb(ab[i] + c[j]); }
  }
  Rort(ans);
  rep(i, k) fin(ans[i]);
}
