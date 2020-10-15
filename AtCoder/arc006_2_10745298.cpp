/*
引用元：https://atcoder.jp/contests/arc006/tasks/arc006_2
B - あみだくじEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/arc006/submissions/10745298
// 提出ID : 10745298
// 問題ID : arc006_2
// コンテストID : arc006
// ユーザID : xryuseix
// コード長 : 2514
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

struct pos {
  int x;
  int y;
};

int main() {

  int n, l;
  scanf("%d %d", &n, &l);
  vs s(l + 2);
  for (int i = 0; i < l + 2; i++) {
    getline(cin, s[i]);
  }
  // fin("AAA");
  pos p;
  rep(i, 2 * n - 1) if (s[l + 1][i] == 'o') {
    p.x = i;
    p.y = l + 1;
  }
  // fin("BBB");
  p.y--;
  while (1) {
    if (p.x + 2 < 2 * n - 1 && s[p.y][p.x + 1] == '-') {
      s[p.y][p.x + 1] = ' ';
      p.x += 2;
    } else if (p.x - 2 >= 0 && s[p.y][p.x - 1] == '-') {
      s[p.y][p.x - 1] = ' ';
      p.x -= 2;
    } else {
      p.y--;
      if (p.y <= 0) {
        fin(p.x / 2 + 1);
        return 0;
      }
    }
  }
}
