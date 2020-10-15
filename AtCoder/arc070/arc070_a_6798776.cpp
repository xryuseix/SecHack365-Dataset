/*
問題文の引用元：https://atcoder.jp/contests/arc070/tasks/arc070_a
C - Go HomeEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 無限に左右に伸びている数直線上の 0 の地点に時刻 0
にカンガルーがいます。カンガルーは時刻 i-1 から i
にかけて、なにもしないか、もしくは長さがちょうど i
のジャンプを、左右どちらかの方向を選んで行えます。つまり、時刻 i-1 に座標 x
にいたとすると、時刻 i には x-i, x, x+i
のどれかに存在することが出来ます。カンガルーの家は座標 X
にあります。カンガルーはできるだけ早く座標 X
まで移動しようとしています。カンガルーが座標 X
に到着する時刻の最小値を求めてください。
制約X
は整数1≦X≦10^9入力入力は以下の形式で標準入力から与えられる。X出力カンガルーが座標
X に到着する時刻の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc070/submissions/6798776
// 提出ID : 6798776
// 問題ID : arc070_a
// コンテストID : arc070
// ユーザID : xryuseix
// コード長 : 1683
// 実行時間 : 1



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

  int x;
  cin >> x;

  for (int i = 1; i < 100000; i++) {
    if ((ll)i * (i + 1) / 2 >= x) {
      cout << i << endl;
      return 0;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}