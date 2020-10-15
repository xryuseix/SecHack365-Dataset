/*
問題文の引用元：https://atcoder.jp/contests/agc021/tasks/agc021_a
A - Digit Sum 2Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : N 以下の正の整数の 10 進法での各桁の和の最大値を求めてください。
制約1\leq N \leq 10^{16}N
は整数である入力入力は以下の形式で標準入力から与えられる。N出力N
以下の正の整数の 10 進法での各桁の和の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/agc021/submissions/10994444
// 提出ID : 10994444
// 問題ID : agc021_a
// コンテストID : agc021
// ユーザID : xryuseix
// コード長 : 2772
// 実行時間 : 5



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
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

int main() {

  string n;
  cin >> n;
  vector<vector<vector<bool>>> dp(
      30, vector<vector<bool>>(2, vector<bool>(1010, false)));
  dp[0][0][0] = 1;
  for (int i = 0; i < n.size(); i++) {
    rep(y, 2) {
      for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 1010; k++) {
          int ni = i + 1;
          int ny = y;
          int nk = k + j;
          if (!y && j > n[i] - '0') {
            continue;
          } else if (!y && j < n[i] - '0') {
            ny = 1;
          }
          if (!dp[i][y][k])
            continue;
          dp[ni][ny][nk] = dp[ni][ny][nk] | dp[i][y][k];
        }
      }
    }
  }
  int ans = 0;
  rep(i, 1010) rep(j, 2) chmax(ans, (dp[n.size()][j][i] ? i : 0));
  fin(ans);
  // rep(i,7){
  //     rep(k,2){
  //         cout<<dp[i][k]<<" ";
  //     }
  //     cout<<endl;
  // }
}
