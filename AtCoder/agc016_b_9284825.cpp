/*
引用元：https://atcoder.jp/contests/agc016/tasks/agc016_b
B - Colorful HatsEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc016/submissions/9284825
// 提出ID : 9284825
// 問題ID : agc016_b
// コンテストID : agc016
// ユーザID : xryuseix
// コード長 : 2147
// 実行時間 : 31



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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  if (v[n - 1] - v[0] > 1) {
    fin("No");
    return 0;
  } else if (v[n - 1] - v[0] == 1) {
    int p, q;
    rep(i, n - 1) {
      if (v[i] != v[i + 1]) {
        q = i + 1;
        p = n - q;
        break;
      }
    }
    if (v[n - 1] < q + 1 || v[n - 1] > p / 2 + q)
      fin("No");
    else
      fin("Yes");

  } else { // max==min
    if (n == v[0] + 1 || n / 2 >= v[0])
      fin("Yes");
    else
      fin("No");
  }
}
