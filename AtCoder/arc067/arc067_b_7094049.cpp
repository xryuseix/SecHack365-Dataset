/*
問題文の引用元：https://atcoder.jp/contests/arc067/tasks/arc067_b
D - Walk and TeleportEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 500 点
問題文 : 東西方向にのびる直線上に、N 個の町があります。町には、西から順に 1 から
N
までの番号がついています。直線上には座標が設定されていて、東に行くほど座標が大きくなります。町
i の座標は X_i です。あなたは今、町 1
にいて、これからほかの全ての町を訪れたいです。移動する手段は次の 2
種類あります。直線上を歩いて移動する。東西どちらに歩いても、1
移動する度に疲労度が A
上がります。好きな場所へテレポートする。テレポートをすると、移動した距離によらず疲労度が
B 上がります。この 2
種類の移動を繰り返して全ての町を最適に回った時、疲労度の上昇値の合計の最小値がいくつになるか求めてください。
制約入力は全て整数である2≦N≦10^51≦X_i≦10^9全ての
i(1≦i≦N-1)　について、X_i<X_{i+1}　が成り立つ1≦A≦10^91≦B≦10^9入力入力は以下の形式で標準入力から与えられる。N
A BX_1 X_2 ...
X_N出力全ての町を最適に回った時、疲労度の上昇値の合計の最小値がいくつになるかを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc067/submissions/7094049
// 提出ID : 7094049
// 問題ID : arc067_b
// コンテストID : arc067
// ユーザID : xryuseix
// コード長 : 1692
// 実行時間 : 11



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll n, a, b;
  cin >> n >> a >> b;
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans += min(a * (v[i + 1] - v[i]), b);
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
