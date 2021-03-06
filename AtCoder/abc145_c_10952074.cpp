/*
引用元：https://atcoder.jp/contests/abc145/tasks/abc145_c
C - Average LengthEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc145/submissions/10952074
// 提出ID : 10952074
// 問題ID : abc145_c
// コンテストID : abc145
// ユーザID : xryuseix
// コード長 : 2340
// 実行時間 : 13



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
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) v[i] = i;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  ld ans = 0;
  do {
    ld sum = 0;
    rep(i, n - 1) {
      sum += sqrt(pow(abs(x[v[i]] - x[v[i + 1]]), 2) +
                  pow(abs(y[v[i]] - y[v[i + 1]]), 2));
      // if(i==1)cout<<sqrt(pow(abs(x[v[i]]-x[v[i+1]]),2)+pow(abs(y[v[i]]-y[v[i+1]]),2))<<endl;
    }
    ans += sum;
  } while (next_permutation(all(v)));
  int kai = 1;
  rep(i, n) kai *= i + 1;
  printf("%.6Lf\n", (ld)(ans) / kai);
}
