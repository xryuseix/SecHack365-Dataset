/*
問題文の引用元：https://atcoder.jp/contests/abc133/tasks/abc133_d
D - Rain Flows into Dams
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 円形に N 個の山が連なっており、時計回りに山 1, 山 2, …, 山 N
と呼ばれます。N は奇数です。これらの山の間に N 個のダムがあり、ダム 1, ダム 2,
…, ダム N と呼ばれます。ダム i (1 \leq i \leq N) は山 i と山 i+1 の間にあります
(山 N+1 は山 1 のことを指します)。山 i (1 \leq i \leq N) に 2x
リットルの雨が降ると、ダム i-1 とダム i にそれぞれ x リットルずつ水が溜まります
(ダム 0 はダム N
のことを指します)。ある日、各山に非負の偶数リットルの雨が降りました。その結果、ダム
i (1 \leq i \leq N) には合計で A_i
リットルの水が溜まりました。各山に降った雨の量を求めてください。この問題の
制約下では解が一意に定まることが証明できます。
制約入力は全て整数である。3 \leq N \leq 10^5-1N は奇数である。0 \leq A_i \leq
10^9入力が表す状況は、各山に非負の偶数リットルの雨が降った際に発生しうる。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N出力山 1, 山 2, …, 山 N に降った雨の量を表す N
個の整数をこの順に出力せよ。



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

  int n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  vll a(1, 0);
  rep(i, n) {
    ll div = a[a.size() - 1] / 2;
    a.pb((v[i] - div) * 2);
  }
  vll b(1, a[a.size() - 1] / 2);
  rep(i, n) {
    ll div = b[b.size() - 1] / 2;
    b.pb((v[i] - div) * 2);
  }

  rep(i, n) {
    if (i != n - 1)
      cout << b[i] << " ";
    else
      cout << b[i];
  }
  cout << endl;
}