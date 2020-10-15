/*
問題文の引用元：https://atcoder.jp/contests/arc004/tasks/arc004_2
B - 2点間距離の最大と最小 ( Maximum and Minimum )
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 平面上に N+1 個の点があり、それぞれ 0 から N
までの番号が付けられています。それぞれの点の位置はわかりませんが、0 以上 N
未満の整数 i について、i 番の点と i+1 番の点の距離 d_i はわかっています。0
番の点と N
番の点の距離としてとりうる値の最大と最小を求めてください。入力入力は以下の形式で標準入力から与えられる。Nd_{0}d_{1}:d_{N-1}入力は
N+1 行からなる。1 行目には点の番号の最大を表す整数 N(1≦N≦500) が与えられる。2
行目から N+1行目までの i+2 行目 (0 ≦ i < N)には、i 番と i+1
番の点の距離を表す整数 d_i(1≦d_i≦30,000)
が与えられる。出力出力は標準出力に出力し、2 行からなる。1 行目には、0 番の点と N
番の点の距離としてとりうる最大値を出力せよ。2 行目には、0 番の点と N
番の点の距離としてとりうる最小値を出力せよ。誤差は絶対誤差あるいは相対誤差の少なくとも片方が
10^{-3} 以下であれば許容する。なお、最後には改行を出力せよ。



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
  ll sum = 0;
  vi v(n);
  rep(i, n) {
    cin >> v[i];
    sum += v[i];
  }
  cout << sum << endl;
  Sort(v);
  int n_sum = sum - v[n - 1];
  if (n_sum >= v[n - 1])
    fin(0);
  else {
    fin(v[n - 1] - n_sum);
  }
}
