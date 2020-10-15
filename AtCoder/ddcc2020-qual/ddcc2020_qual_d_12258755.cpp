/*
問題文の引用元：https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_d
D - Digit Sum ReplaceEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点: 500 点
問題文 : DDCC 20XX の予選には，N
人のプログラマーが参加する予定です．しかし，会場の都合上，本戦には 9
人までしか参加できません．
そこで，予選を何ラウンドかに分けて勝ち抜き方式で行うことにしました．これは，以下のルールに従って行われます．
最初のラウンドには N 人全員が参加する．あるラウンドに X \ (X \geq 10)
人が参加するとき，次のラウンドに勝ち残る人数を以下のように決定する．X
の十進表記において，ある連続する 2
桁を選び，それらをその和で置き換えて得られる数を勝ち残る人数とする．例えば，X =
2378 のとき，勝ち残る人数は 578 (2,3 を選んだ場合)，2108 (3,7
を選んだ場合)，2315 (7,8 を選んだ場合) 人のいずれかとなる．X = 100
のときは，どちらの 2 桁を選んだとしても勝ち残る人数は 10
人となる．勝ち残った人数が 9 人以下となったら，予選を終了する．DDCC 20XX
の運営リーダーであるりんごさんは，できるだけ多くの予選ラウンドを開催したいです．最大で何ラウンドの予選を開催できるか求めてください．
ただし，参加者数 N は非常に多くなる場合があるので，2 つの整数列 d_1, \ldots,
d_M，c_1, \ldots, c_M として与えられます．これは，N が十進表記において c_1 + c_2
+ \ldots + c_M 桁の数であり，その先頭の c_1 桁の数字がいずれも d_1，続く c_2
桁の数字がいずれも d_2，\ldots，最後の c_M 桁の数字がいずれも d_M
であることを表します．
制約1 \leq M \leq 2000000 \leq d_i \leq 9d_1 \neq 0d_i \neq d_{i+1}c_i \geq 12
\leq c_1 + \ldots + c_M \leq
10^{15}入力入力は以下の形式で標準入力から与えられます.  Md_1 c_1d_2 c_2:d_M
c_M出力予選ラウンドの数の最大値を出力してください．
// ソースコードの引用元 :
https://atcoder.jp/contests/ddcc2020-qual/submissions/12258755
// 提出ID : 12258755
// 問題ID : ddcc2020_qual_d
// コンテストID : ddcc2020-qual
// ユーザID : xryuseix
// コード長 : 2576
// 実行時間 : 117



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
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
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
// #define endl '\n';
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
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

  int m;
  cin >> m;
  ll ans = 0;
  ll t = 0;
  ll num = 0;
  rep(i, m) {
    ll d, c;
    cin >> d >> c;
    ans += (d * c + t);
    num += c;
  }
  fin(((ans % 9 == 0) ? ans / 9 - 1 : ans / 9) + (num - 1));
}
