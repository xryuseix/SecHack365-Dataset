/*
問題文の引用元：https://atcoder.jp/contests/abc140/tasks/abc140_b
B - BuffetEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋くんは N 種類の料理が食べ放題のビュッフェに行き、全種類の料理 (料理
1, 料理 2, \ldots, 料理 N) を 1 度ずつ食べました。高橋くんが i (1 \leq i \leq N)
番目に食べた料理は料理 A_i でした。高橋くんは、料理 i (1 \leq i \leq N)
を食べると満足度 B_i を得ます。また、料理 i (1 \leq i \leq N - 1)
を食べた直後に料理 i+1 を食べると満足度 C_i
を追加で得ます。高橋くんが得た満足度の合計を求めてください。
制約入力は全て整数である。2 \leq N \leq 201 \leq A_i \leq NA_1, A_2, ..., A_N
は全て異なる。1 \leq B_i \leq 501 \leq C_i \leq
50入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ... A_NB_1 B_2 ...
B_NC_1 C_2 ... C_{N-1}出力高橋くんが得た満足度の合計を整数で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc140/submissions/7382979
// 提出ID : 7382979
// 問題ID : abc140_b
// コンテストID : abc140
// ユーザID : xryuseix
// コード長 : 1880
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vi a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n - 1) cin >> c[i];
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += b[a[i] - 1];
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] + 1 == a[i + 1]) {
      ans += c[a[i] - 1];
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}