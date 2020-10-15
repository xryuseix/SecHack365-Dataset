/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_b
B - Frog 2Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : N 個の足場があります。足場には 1, 2, \ldots, N
と番号が振られています。各 i (1 \leq i \leq N) について、足場 i の高さは h_i
です。最初、足場 1 にカエルがいます。カエルは次の行動を何回か繰り返し、足場 N
まで辿り着こうとしています。足場 i にいるとき、足場 i + 1, i + 2, \ldots, i + K
のどれかへジャンプする。 このとき、ジャンプ先の足場を j とすると、コスト |h_i -
h_j| を支払う。カエルが足場 N
に辿り着くまでに支払うコストの総和の最小値を求めてください。
制約入力はすべて整数である。2 \leq N \leq 10^51 \leq K \leq 1001 \leq h_i \leq
10^4入力入力は以下の形式で標準入力から与えられる。N Kh_1 h_2 \ldots
h_N出力カエルが支払うコストの総和の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/6224217
// 提出ID : 6224217
// 問題ID : dp_b
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 1704
// 実行時間 : 28



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, k;
  cin >> n >> k;
  vi h(n + 1), dp(n + 1, INF);
  rep(i, n) cin >> h[i + 1];
  dp[0] = 0;
  dp[1] = 0;
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      if (i - j < 1)
        break;
      chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
    }
  }
  cout << dp[n] << endl;

  //////////////////////////////////////////////////////
  return 0;
}
