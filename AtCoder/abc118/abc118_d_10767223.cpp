/*
問題文の引用元：https://atcoder.jp/contests/abc118/tasks/abc118_d
D - Match MatchingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : ちょうど N
本のマッチ棒を使って作れる整数の中で最大のものを求めてください。ただし、以下の条件を満たさなければなりません。作る整数の各桁は、1
から 9 までの数字のうち A_1, A_2, ..., A_M (1 \leq A_i \leq 9)
のいずれかでなければならない。数字 1, 2, 3, 4, 5, 6, 7, 8, 9 を 1
つ作るには、それぞれちょうど 2, 5, 5, 4, 5, 6, 3, 7, 6 本のマッチ棒を使う。
制約入力は全て整数である。2 \leq N \leq 10^41 \leq M \leq 91 \leq A_i \leq 9A_i
は全て異なる。ちょうど N
本のマッチ棒を使って条件を満たすように作れる整数が存在する。入力入力は以下の形式で標準入力から与えられる。N
MA_1 A_2 ... A_M出力
問題文 : の条件下でちょうど N 本のマッチ棒を使って作れる整数の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc118/submissions/10767223
// 提出ID : 10767223
// 問題ID : abc118_d
// コンテストID : abc118
// ユーザID : xryuseix
// コード長 : 2568
// 実行時間 : 53



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

int main() {

  int n, m;
  cin >> n >> m;
  int match[] = {-1, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  vs dp(n + 10, "");
  vi a(m);
  rep(i, m) {
    int A;
    cin >> A;
    a[i] = A;
  }
  for (int i = n; i > 0; i--) {
    if (i != n && !dp[i].size())
      continue;
    rep(j, m) {
      int need = match[a[j]];
      if (i - need < 0)
        continue;
      if (dp[i].size() + 1 < dp[i - need].size())
        continue;
      if (dp[i].size() + 1 == dp[i - need].size()) {
        chmax(dp[i - need], dp[i] + (char)('0' + a[j]));
      } else {
        dp[i - need] = dp[i] + (char)('0' + a[j]);
      }
    }
  }

  fin(dp[0]);
  // cout<<"========"<<endl;
  // rep(i,n)cout<<i<<" "<<dp[i]<<endl;
}
// 5,3,7,6
