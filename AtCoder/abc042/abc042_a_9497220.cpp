/*
問題文の引用元：https://atcoder.jp/contests/abc042/tasks/abc042_a
A - 和風いろはちゃんイージー / Iroha and Haiku (ABC Edition)
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
日本の誇る美しいリズムとして、五七五というものがあります。いろはちゃんは五七五が大好きです。3
つの文節の並びの長さがそれぞれ 5,7,5 となるようにこの順番で並んでいるとき、その
3 つの文節の並びは五七五であると言います。並び替えたい 3
つの文節の長さを表す整数 A,B,C
が与えられるので、それらの文節を並び替えて五七五にできるか判定してください。
制約1≦A,B,C≦10入力入力は以下の形式で標準入力から与えられる。A B
C出力文節の並びを五七五にすることができるなら YES 、そうでないなら NO
を出力せよ。



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

  int a, b, c;
  cin >> a >> b >> c;
  if (a > b)
    swap(a, b);
  if (b > c)
    swap(b, c);
  if (a > b)
    swap(a, b);
  if (a == 5 && b == 5 && c == 7)
    fin("YES");
  else
    fin("NO");
}
