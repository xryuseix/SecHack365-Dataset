/*
問題文の引用元：https://atcoder.jp/contests/abc115/tasks/abc115_d
D - Christmas
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 :
とある世界では、今日はクリスマスです。高羽氏のパーティで、彼は多次元バーガーを作ることにしました。レベル
L バーガー (L は 0 以上の整数) とは次のようなものです。レベル 0
バーガーとは、パティ 1 枚である。レベル L バーガー (L \geq 1) とは、バン 1
枚、レベル L-1 バーガー、パティ 1 枚、レベル L-1 バーガー、バン 1
枚、をこの順に下から積み重ねたものである。例えば、パティを P、バンを B
で表すと、レベル 1 バーガーは BPPPB (を 90 度回転したもの)、レベル 2 バーガーは
BBPPPBPBPPPBB といった見た目になります。高羽氏が作るのはレベル N
バーガーです。ダックスフンドのルンルンは、このバーガーの下から X 層を食べます
(パティまたはバン 1 枚を 1 層とします)。ルンルンはパティを何枚食べるでしょうか？
制約1 \leq N \leq 501 \leq X \leq ( レベル N バーガーの層の総数 )N, X
は整数である。入力入力は以下の形式で標準入力から与えられる。N X出力レベル N
バーガーの下から X 層に含まれるパティの枚数を出力せよ。



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

ll rec(ll n, ll x) {
  if (n == 0)
    return 1;
  ll len = (1LL << (n + 1)) - 3; // レベルn-1のバーガーの長さ
  ll num = (1LL << n) - 1;       // レベルn-1に含まれるP
  if (x == 1)
    return 0;
  if (x <= len + 1)
    return rec(n - 1, x - 1);
  if (x == len + 2)
    return 1 + num;
  else if (x <= 2 * (len + 1))
    return 1 + num + rec(n - 1, x - len - 2);
  else
    return 2 * num + 1;
}

int main(void) {

  ll n, x;
  cin >> n >> x;
  cout << rec(n, x) << endl;
}
