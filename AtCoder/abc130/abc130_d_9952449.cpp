/*
問題文の引用元：https://atcoder.jp/contests/abc130/tasks/abc130_d
D - Enough Array
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 長さ N の正整数列 A=a_1,a_2,…,a_{N} と整数 K が与えられます。A
の連続する部分列であって、以下の条件を満たすようなものは何個あるでしょうか。(条件)
連続部分列に含まれる全ての要素の値の和は、K
以上である。ただし、ある二つの連続部分列が列として同じでも、取り出された位置が異なるならそれらは別々に数えるものとします。出力が
32bit 整数型に収まらない場合があることに注意してください。
制約1 \leqq a_i \leqq 10^51 \leqq N \leqq 10^51 \leqq K \leqq
10^{10}入力入力は以下の形式で標準入力から与えられます。N Ka_1 a_2 ...
a_N出力条件を満たすような連続部分列の個数を出力してください。



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

  ll n, k;
  cin >> n >> k;
  vll v(n);
  rep(i, n) cin >> v[i];
  ll sum = 0, l = 0, r = 0;
  ll ans = 0;
  for (l = 0; l < n; l++) {
    while (sum < k && r < n) {
      sum += v[r];
      r++;
    }
    // cout<<l<<" "<<r<<" "<<sum<<endl;
    ll t = (n - r + 1);
    // cout<<t<<endl;
    if (sum >= k)
      ans += t;
    sum -= v[l];
  }
  fin(ans);
}