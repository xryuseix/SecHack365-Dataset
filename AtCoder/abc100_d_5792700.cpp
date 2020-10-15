/*
引用元：https://atcoder.jp/contests/abc100/tasks/abc100_d
D - Patisserie ABCEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc100/submissions/5792700
// 提出ID : 5792700
// 問題ID : abc100_d
// コンテストID : abc100
// ユーザID : xryuseix
// コード長 : 1725
// 実行時間 : 2



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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  ll n, i, ans = 0, m, a, b, c, j;
  cin >> n >> m;
  vector<vector<ll>> v(8, vector<ll>(n, 0));
  ll maxans = 0;
  rep(i, n) {
    cin >> a >> b >> c;
    v[0][i] = a + b + c;
    v[1][i] = a + b - c;
    v[2][i] = a - b + c;
    v[3][i] = a - b - c;
    v[4][i] = -1 * a + b + c;
    v[5][i] = -1 * a + b - c;
    v[6][i] = -1 * a - b + c;
    v[7][i] = -1 * a - b - c;
  }
  for (j = 0; j < 8; j++) {
    ans = 0;
    sort(v[j].rbegin(), v[j].rend());

    rep(i, m) { ans += v[j][i]; }
    maxans = max(ans, maxans);
  }

  cout << maxans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
