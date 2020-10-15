/*
問題文の引用元：https://atcoder.jp/contests/abc136/tasks/abc136_c
C - Build Stairs
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 左右一列に N 個のマスが並んでおり、左から i 番目のマスの高さは H_i
です。あなたは各マスについて 1 度ずつ次のいずれかの操作を行います。マスの高さを
1
低くする。何もしない。操作をうまく行うことでマスの高さを左から右に向かって単調非減少にできるか求めてください。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq H_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NH_1 H_2 ...
H_N出力マスの高さを左から右に向かって単調非減少にできるなら Yes、そうでないなら
No を出力せよ。



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

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  v[0]--;
  for (int i = 1; i < n; i++) {
    if (v[i - 1] < v[i])
      v[i]--;
  }
  rep(i, n - 1) {
    if (v[i] > v[i + 1]) {
      fin("No");
      return 0;
    }
  }
  fin("Yes");
}
