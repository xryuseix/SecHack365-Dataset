/*
問題文の引用元：https://atcoder.jp/contests/abc100/tasks/abc100_b
B - Ringo's Favorite Numbers
Time Limit : 2 sec / Memory Limit : 1000 MB
配点: 200 点
問題文 : 今日は, 記念すべき AtCoder Beginner Contest 100 が開催される. そのため,
高橋君はりんごさんに,
ある整数をプレゼントしようと思った.今日のコンテストは「AtCoder Beginner Contest
100」なので, りんごさんは 100 で ちょうど D
回割りきれる正の整数をプレゼントされると喜ぶ.  さて,
りんごさんがプレゼントされると喜ぶような整数のうち N
番目に小さいものを求めなさい.
制約D は 0, 1, 2 のいずれかであるN は 1 以上 100
以下の整数入力入力は以下の形式で標準入力から与えられる.  D N出力100 でちょうど D
回割りきれる正の整数の中で N 番目に小さいものを出力しなさい.



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
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
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

int main(void) {

  int d, n;
  cin >> d >> n;
  if (n == 100)
    n++;
  printf("%d\n", (int)(n * pow(100, d)));
}