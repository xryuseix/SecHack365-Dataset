/*
問題文の引用元：https://atcoder.jp/contests/abc127/tasks/abc127_b
B - Algae
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : ある池に生えている藻類は、以下のように成長します。西暦 i
年になる瞬間に生えている重さの合計を x_i グラムとすると、i≥2000
に対して、以下の式が成り立ちます:x_{i+1} = rx_i - Dr, D, x_{2000}
が与えられます。x_{2001}, ..., x_{2010} を計算し、順に出力してください。
制約2 ≤ r ≤ 51 ≤ D ≤ 100D < x_{2000} ≤
200入力はすべて整数入力入力は以下の形式で標準入力から与えられる。r D
x_{2000}出力10 行出力せよ。i 行目 (1 ≤ i ≤ 10) には x_{2000+i}
を整数で出力せよ。



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

  ll r, d, x;
  cin >> r >> d >> x;
  rep(i, 10) {
    x = r * x - d;
    fin(x);
  }
}
