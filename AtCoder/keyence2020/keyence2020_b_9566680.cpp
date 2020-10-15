/*
問題文の引用元：https://atcoder.jp/contests/keyence2020/tasks/keyence2020_b
B - Robot Arms
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : ある工場では、数直線上に N 個のロボットが設置されています。ロボット i
は座標 X_i に設置されており、数直線の正負の方向にそれぞれ長さ L_i
の腕を伸ばすことができます。これらのロボットのうちいくつか (0 個以上)
を取り除き、残ったどの 2
つのロボットについても、腕が動く範囲が共通部分を持たないようにしたいと思います。ただし、各
i (1 \leq i \leq N) に対して、ロボット i の腕が動く範囲とは数直線上の座標が X_i
- L_i より大きく X_i + L_i
未満の部分を指します。取り除かずに残せるロボットの個数の最大値を求めてください。
制約1 \leq N \leq 100,0000 \leq X_i \leq 10^9 (1 \leq i \leq N)1 \leq L_i \leq
10^9 (1 \leq i \leq N)i \neq j のとき、X_i \neq
X_j入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NX_1
L_1X_2 L_2\vdotsX_N L_N出力残せるロボットの個数の最大値を出力せよ。



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
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  rep(i, n) {
    ll x, l;
    cin >> x >> l;
    v[i] = mp(l + x, x);
  }
  Sort(v);
  ll max = -INF - 100000LL;
  int rem = 0;

  // rep(i,n)cout<<v[i].first<<endl;

  rep(i, n) {
    // cout<<v[i].first<<" "<<2*v[i].second<<" "<<max<<endl;
    if (2 * v[i].second - v[i].first >= max) {
      max = v[i].first;
    } else {
      rem++;
    }
  }
  fin(n - rem);
}
