/*
問題文の引用元：https://atcoder.jp/contests/abc144/tasks/abc144_c
C - Walk on Multiplication TableEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 高橋君は無限に広い掛け算表の上にいます。掛け算表のマス (i,j) には整数 i
\times j が書かれており、高橋君は最初 (1,1) にいます。高橋君は 1 回の移動で
(i,j) から (i+1,j) か (i,j+1) のどちらかにのみ移ることができます。整数 N
が与えられるので、N
が書かれているマスに到達するまでに必要な移動回数の最小値を求めてください。
制約2 \leq N \leq 10^{12}N
は整数である。入力入力は以下の形式で標準入力から与えられる。N出力整数 N
が書かれているマスに到達するまでに必要な移動回数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc144/submissions/8179502
// 提出ID : 8179502
// 問題ID : abc144_c
// コンテストID : abc144
// ユーザID : xryuseix
// コード長 : 2009
// 実行時間 : 12



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
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
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
const ll LLINF = 1LL << 62;

vector<ll> enum_div(ll n) {
  vector<ll> ret;
  for (ll i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i != 1 && i * i != n) {
        ret.push_back(n / i);
      }
    }
  }
  return ret;
}

int main(void) {

  ll n;
  cin >> n;

  vector<ll> v = enum_div(n);
  v.push_back(1);
  ll ans = LLINF;
  for (int i = 0; i < v.size(); i++) {
    ans = min(ans, n / v[i] + v[i] - 2);
  }

  fin(ans);
}
