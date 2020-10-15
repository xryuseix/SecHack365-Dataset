/*
問題文の引用元：https://atcoder.jp/contests/abc074/tasks/abc074_b
B - Collecting Balls (Easy Version)
Time Limit : 2 sec / Memory Limit : 256 MB
配点: 200 点
問題文 : xy 平面上に N 個のボールがあります。このうち i 番目のボールの位置は
(x_i, i) です。したがって、N 本の直線 y = 1, y = 2, ..., y = N の上にそれぞれ 1
個ずつボールがあることになります。すぬけ君は、これらのボールを回収するために、タイプ
A, B のロボットを N 台ずつ用意しました。さらに、タイプ A のロボットのうち i
台目のものを位置 (0, i) に、タイプ B のロボットのうち i 台目のものを位置 (K, i)
に設置しました。したがって、N 本の直線 y = 1, y = 2, ..., y = N の上にそれぞれ 1
台のタイプ A のロボットと、1 台のタイプ B
のロボットが設置されたことになります。それぞれのタイプのロボットは起動されると以下のように動作します。タイプ
A のロボットは、位置 (0, a) で起動されると、直線 y = a
上にあるボールの位置まで移動し、ボールを回収してもとの位置 (0, a)
に戻って停止する。そのようなボールが存在しない場合は何もせずに停止する。タイプ B
のロボットは、位置 (K, b) で起動されると、直線 y = b
上にあるボールの位置まで移動し、ボールを回収してもとの位置 (K, b)
に戻って停止する。そのようなボールが存在しない場合は何もせずに停止する。これら
2N
台のロボットのうちいくつかを起動してボールをすべて回収するとき、ロボットの移動距離の総和として考えられる値のうち最小のものを求めてください。
制約1≦N≦1001≦K≦1000 < x_i <
K入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NKx_1
x_2 ...
x_N出力ロボットの移動距離の総和として考えられる値のうち最小のものを出力せよ。



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

  int n, k;
  cin >> n >> k;
  int ans = 0;
  rep(i, n) {
    int x;
    cin >> x;
    ans += 2 * (min(abs(k - x), abs(x)));
  }
  fin(ans);
}
