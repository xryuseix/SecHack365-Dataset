/*
問題文の引用元：https://atcoder.jp/contests/abc070/tasks/abc070_b
B - Two Switches
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : Alice と Bob
は、ロボットを制御するためのスイッチを1つずつ持っており、ロボットを動かしています。
Alice はロボットを動かし始めて A
秒後にスイッチを押し始め、ロボットを動かし始めて B 秒後にスイッチを離しました。
Bob はロボットを動かし始めて C 秒後にスイッチを押し始め、ロボットを動かし始めて
D 秒後にスイッチを離しました。  Alice と Bob
が、二人ともスイッチを押していた秒数を求めてください。
制約0≦A<B≦1000≦C<D≦100入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。
A B C D出力Alice と Bob が二人ともスイッチを押していた秒数を出力せよ。



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

int main(void) {

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << max(0, min(b, d) - max(a, c)) << endl;
}
