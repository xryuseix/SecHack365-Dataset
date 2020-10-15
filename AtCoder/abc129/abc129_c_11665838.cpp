/*
問題文の引用元：https://atcoder.jp/contests/abc129/tasks/abc129_c
C - Typical StairsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 段の階段があります。高橋君は現在、上り口(0
段目)にいます。高橋君は一歩で 1 段か 2
段上ることができます。ただし、a_1,a_2,a_3,....a_M
段目の床は壊れており、その段に足を踏み入れることは危険です。壊れている床を踏まないようにしながら、最上段(N
段目)にたどりつくまでの移動方法は何通りあるでしょうか？総数を 1,000,000,007
で割った余りを求めてください。
制約1 \leqq N \leqq 10^50 \leqq M \leqq N-11 \leqq a_1 < a_2  <  ...  < a_M
\leqq N-1入力入力は以下の形式で標準入力から与えられます。N Ma_1a_2 . .
.a_M出力条件を満たすような移動方法の総数を、1,000,000,007
で割った余りを出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc129/submissions/11665838
// 提出ID : 11665838
// 問題ID : abc129_c
// コンテストID : abc129
// ユーザID : xryuseix
// コード長 : 2625
// 実行時間 : 29



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
#include <random>
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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
#define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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

  int n, m;
  cin >> n >> m;
  vll dp(n + 10);
  vi v(m);
  rep(i, m) {
    cin >> v[i];
    dp[v[i]] = -1;
  }
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    if (dp[i] == -1)
      continue;
    if (dp[i + 1] != -1) {
      dp[i + 1] += dp[i];
      dp[i + 1] %= MOD;
    }
    if (dp[i + 2] != -1) {
      dp[i + 2] += dp[i];
      dp[i + 2] %= MOD;
    }
  }
  fin(dp[n]);
}
