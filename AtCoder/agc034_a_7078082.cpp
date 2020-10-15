/*
引用元：https://atcoder.jp/contests/agc034/tasks/agc034_a
A - Kenken RaceEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc034/submissions/7078082
// 提出ID : 7078082
// 問題ID : agc034_a
// コンテストID : agc034
// ユーザID : xryuseix
// コード長 : 2225
// 実行時間 : 2



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

  int n, a, b, c, d;
  string s;
  cin >> n >> a >> b >> c >> d >> s;
  a--;
  b--;
  c--;
  d--;
  if (c > d) {
    bool ch = false;
    for (int i = b - 1; i < min(n - 3, d); i++) {
      if (i >= c)
        break;
      if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
        ch = true;
        break;
      }
    }
    if (!ch) {
      fin("No");
      return 0;
    }
  }
  for (int i = a + 1; i < c - 1; i++) {
    if (s[i] == '#' && s[i + 1] == '#') {
      fin("No");
      return 0;
    }
  }
  for (int i = b; i < d - 1; i++) {
    if (s[i] == '#' && s[i + 1] == '#') {
      fin("No");
      return 0;
    }
  }
  fin("Yes");

  //////////////////////////////////////////////////////
  return 0;
}
