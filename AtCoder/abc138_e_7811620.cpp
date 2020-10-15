/*
引用元：https://atcoder.jp/contests/abc138/tasks/abc138_e
E - Strings of ImpurityEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc138/submissions/7811620
// 提出ID : 7811620
// 問題ID : abc138_e
// コンテストID : abc138
// ユーザID : xryuseix
// コード長 : 2114
// 実行時間 : 8



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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

  string s, t;
  cin >> s >> t;
  vvi is(26);
  rep(i, s.size()) is[s[i] - 'a'].push_back(i);
  rep(i, s.size()) is[s[i] - 'a'].push_back(i + s.size());

  ll ans = 0;
  int p = 0;

  for (int i = 0; i < t.size(); i++) {
    if (is[t[i] - 'a'].size() == 0) {
      cout << -1 << endl;
      return 0;
    }
    p = *lower_bound(is[t[i] - 'a'].begin(), is[t[i] - 'a'].end(), p) + 1;
    if (p >= (int)s.size()) {
      p -= (int)s.size();
      ans += (int)s.size();
    }
  }
  ans += p;
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
