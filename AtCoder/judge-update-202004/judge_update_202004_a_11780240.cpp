/*
問題文の引用元：https://atcoder.jp/contests/judge-update-202004/tasks/judge_update_202004_a
A - Walking TakahashiEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 数直線上で生活している高橋君は、いま座標 S にいます。座標が L 以上 R
以下の区間は日当たりが良いです。日に当たりたい高橋君は座標が L 以上 R
以下になるまで次のような移動を繰り返します。現在の座標を X として、L \leq X \leq
R のとき移動をやめる。X が L 未満のとき、X + 1 に移動する。X が R
より大きいとき、X - 1
に移動する。高橋君が最終的に移動をやめる座標を求めてください。
制約-100 \leq S \leq 100-100 \leq L \leq R \leq
100入力は全て整数である入力入力は以下の形式で標準入力から与えられる。S L
R出力高橋君が最終的に移動をやめる座標を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/judge-update-202004/submissions/11780240
// 提出ID : 11780240
// 問題ID : judge_update_202004_a
// コンテストID : judge-update-202004
// ユーザID : xryuseix
// コード長 : 2350
// 実行時間 : 6



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

  int s, l, r;
  cin >> s >> l >> r;
  if (l <= s && s <= r)
    fin(s);
  else if (s >= r)
    fin(r);
  else
    fin(l);
}
