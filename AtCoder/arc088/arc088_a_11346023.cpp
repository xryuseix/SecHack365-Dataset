/*
問題文の引用元：https://atcoder.jp/contests/arc088/tasks/arc088_a
C - Multiple GiftEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
高橋君は、日頃の感謝を込めて、お母さんに数列をプレゼントすることにしました。お母さんにプレゼントする数列
A は、以下の条件を満たす必要があります。A は X 以上 Y 以下の整数からなるすべての
1\leq i \leq |A|-1 に対し、A_{i+1} は A_i の倍数であり、かつ A_{i+1} は A_i
より真に大きい高橋君がお母さんにプレゼントできる数列の長さの最大値を求めてください。
制約1 \leq X \leq Y \leq
10^{18}入力は全て整数である入力入力は以下の形式で標準入力から与えられる。X
Y出力数列の長さの最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc088/submissions/11346023
// 提出ID : 11346023
// 問題ID : arc088_a
// コンテストID : arc088
// ユーザID : xryuseix
// コード長 : 2201
// 実行時間 : 1



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

int main() {

  ll x, y;
  cin >> x >> y;
  int ans = 1;
  while (x * 2 <= y) {
    ans++;
    x *= 2;
  }
  fin(ans);
}
