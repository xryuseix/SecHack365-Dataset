/*
問題文の引用元：https://atcoder.jp/contests/abc065/tasks/abc065_a
A - Expired?
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 高橋君は胃が強いので、賞味期限を X
日まで過ぎた食品を食べてもお腹を壊しません。賞味期限を X+1
日以上過ぎた食品を食べると、お腹を壊します。また、賞味期限を過ぎずに食べると、おいしく感じます。そうでない場合、おいしく感じません。高橋君は、賞味期限の
A 日前に食品を買ってきて、買ってから B
日後に食べました。高橋君が食品をおいしく感じた場合 delicious
を、おいしくは感じなかったがお腹は壊さなかった場合 safe を、お腹を壊した場合
dangerous を出力するプログラムを作成してください。
制約1 ≦ X,A,B ≦ 10^9入力入力は以下の形式で標準入力から与えられる。X A
B出力高橋君が食品をおいしく感じた場合 delicious
を、おいしくは感じなかったがお腹は壊さなかった場合 safe を、お腹を壊した場合
dangerous を出力せよ。



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

  int x, a, b;
  cin >> x >> a >> b;
  int pass = b - a;
  if (pass <= 0)
    fin("delicious");
  else if (pass <= x)
    fin("safe");
  else
    fin("dangerous");
}
