/*
問題文の引用元：https://atcoder.jp/contests/abc071/tasks/arc081_a
C - Make a Rectangle
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 太さが無視できる棒が N 本あります．i 番目の棒の長さは A_i
です．すぬけ君は，これらの棒から 4
本の異なる棒を選び，それらの棒を辺として長方形（正方形を含む）を作りたいです．作ることができる最大の長方形の面積を求めてください．
制約4 \leq N \leq 10^51 \leq A_i \leq 10^9A_i
は整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力すぬけ君が作ることのできる最大の長方形の面積を出力せよ．ただし，長方形を作れない場合は，0
を出力せよ．



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

  ll a = -1, b = -1;
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  for (int i = n - 2; i >= 0; i--) {
    if (v[i] == v[i + 1]) {
      if (a == -1) {
        a = v[i];
        i--;
      } else {
        b = v[i];
        break;
      }
    }
  }
  if (a == -1 || b == -1)
    fin(0);
  else
    fin(a * b);
}
