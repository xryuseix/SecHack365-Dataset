/*
問題文の引用元：https://atcoder.jp/contests/abc105/tasks/abc105_d
D - Candy DistributionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 個の箱が左右一列に並んでおり、左から i 番目の箱には A_i
個のお菓子が入っています。あなたは、連続したいくつかの箱からお菓子を取り出して M
人の子供たちに均等に配りたいと考えています。そこで、以下を満たす組 (l, r)
の総数を求めてください。l, r はともに整数であり 1 \leq l \leq r \leq N
を満たすA_l + A_{l+1} + ... + A_r は M の倍数である
制約入力は全て整数である1 \leq N \leq 10^52 \leq M \leq 10^91 \leq A_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。N MA_1 A_2 ...
A_N出力条件を満たす組 (l, r) の総数を出力せよ。出力の際には、出力が 32
ビットの整数型に収まらない可能性があることに注意せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc105/submissions/8415830
// 提出ID : 8415830
// 問題ID : abc105_d
// コンテストID : abc105
// ユーザID : xryuseix
// コード長 : 1887
// 実行時間 : 64



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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  ll n, m;
  cin >> n >> m;
  vll v(n);
  rep(i, n) cin >> v[i];
  vll csum(n + 1, 0);
  for (int i = 1; i < n + 1; i++) {
    csum[i] = csum[i - 1] + v[i - 1];
  }
  map<ll, ll> ma;
  ll ans = 0;
  for (int i = 0; i <= n; i++) {
    ans += ma[csum[i] % m];
    ma[csum[i] % m]++;
  }

  fin(ans);
}
