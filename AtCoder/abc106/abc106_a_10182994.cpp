/*
問題文の引用元：https://atcoder.jp/contests/abc106/tasks/abc106_a
A - Garden
Time Limit : 2 sec / Memory Limit : 1000 MB﻿
配点: 100 点
問題文 : 縦 A ヤード、横 B ヤードの畑がある. 農夫ジョンは, 畑の内部に,
畑の上端と下端を結ぶ縦方向の幅 1 ヤードの道, 畑の左端と畑の右端を結ぶ横方向の幅
1 ヤードの道を作った. 畑は下図のようになっている. (灰色の部分が道)さて,
道を除いた畑の面積は, 何平方ヤードだろうか? 求めなさい.
注意道の位置が変わっても, 道を除く畑の面積が変わらないことが証明できます.
制約A は 2 以上 100 以下の整数B は 2 以上 100
以下の整数入力入力は以下の形式で標準入力から与えられる.  A
B出力道を除いた畑の面積 (平方ヤード) を出力しなさい.



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
#define STI(s) atoi(s.c_str())
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

int main(void) {

  int a, b;
  cin >> a >> b;
  a--;
  b--;
  cout << a *b << endl;
}
