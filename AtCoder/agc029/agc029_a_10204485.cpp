/*
問題文の引用元：https://atcoder.jp/contests/agc029/tasks/agc029_a
A - Irreversible operation
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 個のオセロの石が一列に並んでいます。それぞれの石の状態は長さ N
の文字列 S によって表されており、S_i=B のとき左から i
番目の石の表面は黒色、S_i=W のとき左から i
番目の石の表面は白色となっています。ここで、以下の操作を行うことを考えます。左から
i 番目の石の表面が黒色、左から i+1 番目の石の表面が白色であるような i (1 \leq i
< N) を一つ選び、  その 2 つの石をともに裏返す。つまり、左から i
番目の石の表面が白色、左から i+1
番目の石の表面が黒色になるようにする。最大で何回この操作を行うことができるか求めてください。
制約1 \leq |S| \leq 2\times 10^5S_i=B または
W入力入力は以下の形式で標準入力から与えられる。S出力先の操作を行うことができる回数の最大値を出力せよ。



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

  string s;
  cin >> s;
  ll ans = 0;
  vll csum(s.size(), 0);
  if (s[0] == 'B')
    csum[0]++;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == 'B') {
      csum[i] = csum[i - 1] + 1;
    } else {
      csum[i] = csum[i - 1];
    }
  }
  rep(i, s.size()) {
    if (s[i] == 'W') {
      ans += csum[i];
    }
  }

  fin(ans);
}
