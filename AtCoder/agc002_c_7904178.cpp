/*
引用元：https://atcoder.jp/contests/agc002/tasks/agc002_c
C - Knot PuzzleEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc002/submissions/7904178
// 提出ID : 7904178
// 問題ID : agc002_c
// コンテストID : agc002
// ユーザID : xryuseix
// コード長 : 2523
// 実行時間 : 201



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
#define PI acos(-1)
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n, L;
  cin >> n >> L;
  vi a(n);
  int pos = -1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] + a[i + 1] >= L) {
      pos = i + 1;
      break;
    }
  }
  if (pos == -1) {
    cout << "Impossible" << endl;
    return 0;
  }
  cout << "Possible" << endl;

  for (int i = 0; i < pos - 1; i++) {
    cout << i + 1 << endl;
  }
  for (int i = n - 1; i >= pos + 1; i--) {
    cout << i << endl;
  }
  cout << pos << endl;
}
