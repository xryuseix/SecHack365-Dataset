/*
問題文の引用元：https://atcoder.jp/contests/tkppc4-2/tasks/tkppc4_2_a
A - Jumping!!Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 200 点
問題文 :                 座標平面上にAliceがいます。彼女のいる座標は (0,0)
です。                彼女は「桂馬飛び」のみで座標 (x,y)
に行けるでしょうか。行ける場合は、最小で何回の桂馬飛びで行けるのかを求めてください。
なお、1 回の「桂馬飛び」とは以下の移動のことを指します。                座標
(a,b) にいる時、座標 (a+1,b+2) または (a-1,b+2) に移動する。
制約                                            入力は全て整数である。
-10^5 \leq x, y \leq 10^5
入力                    入力は以下の形式で標準入力から与えられます。
x y
出力                    座標 (x,y)
に行ける場合は、最小で何回の桂馬飛びをするかを出力してください。行けない場合は
-1 を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/tkppc4-2/submissions/7046248
// 提出ID : 7046248
// 問題ID : tkppc4_2_a
// コンテストID : tkppc4-2
// ユーザID : xryuseix
// コード長 : 1851
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

  int x, y;
  cin >> x >> y;
  y -= abs(x) * 2;
  int co = 0;
  co += abs(x);
  if (y < 0) {
    fin("-1");
    return 0;
  }
  if (y == 0) {
    fin(co);
    return 0;
  }
  if (y % 4 == 0) {
    co += y / 4 * 2;
    fin(co);
    return 0;
  } else {
    fin(-1);
    return 0;
  }

  //////////////////////////////////////////////////////
  return 0;
}
