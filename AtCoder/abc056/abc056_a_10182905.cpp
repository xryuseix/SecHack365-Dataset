/*
問題文の引用元：https://atcoder.jp/contests/abc056/tasks/abc056_a
A - HonestOrDishonest
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
シカのAtCoDeerくんとTopCoDeerくんが「正直者か嘘つきか」ゲームをしています。このゲームでは、正直者は常にほんとうのことを言い、嘘つきは常に嘘を言います。文字
a と b が入力として与えられます。これらはそれぞれ H か D のどちらかです。a=H
のとき、AtCoDeerくんは正直者です。a=D のとき、AtCoDeerくんは嘘つきです。b=H
のとき、AtCoDeerくんは「TopCoDeerくんは正直者だ」と発言しています。b=D
のとき、AtCoDeerくんは「TopCoDeerくんは嘘つきだ」と発言しています。これらから判断して、TopCoDeerくんが正直者かどうか判定してください。
制約a=H または Db=H または D入力入力は以下の形式で標準入力から与えられる。a
b出力TopCoDeerくんが正直者なら H を、嘘つきなら D を出力せよ。



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

  char a, b;
  cin >> a >> b;
  if (a == b)
    fin('H');
  else
    fin('D');
}
