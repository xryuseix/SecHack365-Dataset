/*
引用元：https://atcoder.jp/contests/abc137/tasks/abc137_d
D - Summer VacationEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc137/submissions/6824039
// 提出ID : 6824039
// 問題ID : abc137_d
// コンテストID : abc137
// ユーザID : xryuseix
// コード長 : 2029
// 実行時間 : 33



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

  int n, m;
  cin >> n >> m;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  vpii v(n);
  rep(i, n) v[i] = mp(a[i], b[i]);
  Sort(v);
  priority_queue<int> pq;
  vll dp(m + 1, 0);

  int day = 0;
  for (int i = 1; i <= m; i++) {
    while (day < n && v[day].first <= i) {
      pq.push(v[day].second);
      day++;
    }
    if (!pq.empty()) {
      dp[i] = dp[i - 1] + pq.top();
      pq.pop();
    } else
      dp[i] = dp[i - 1];
  }
  fin(dp[m]);

  //////////////////////////////////////////////////////
  return 0;
}
