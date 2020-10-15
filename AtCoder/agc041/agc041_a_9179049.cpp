/*
問題文の引用元：https://atcoder.jp/contests/agc041/tasks/agc041_a
A - Table Tennis TrainingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 2N 人の卓球選手が、1 から N までの番号がついた N
台の卓で実戦練習を行います。練習は複数の ラウンド
からなります。各ラウンドでは、選手たちは 1 卓につき 1 ペアの合計 N
ペアに分かれます。そして、各ペアの選手同士で試合を行い、1 人が勝利してもう 1
人が敗北します。卓 X で勝利した選手は、次のラウンドでは卓 X-1
で試合を行います。ただし、卓 1 で勝利した選手は卓 1 に留まります。同様に、卓 X
で敗北した選手は、次のラウンドでは卓 X+1 で試合を行います。ただし、卓 N
で敗北した選手は卓 N に留まります。ある 2
人の選手は友達同士で、最初のラウンドの試合を異なる卓 A, B
で行います。彼らは十分な腕前を持ち、各試合での自分の勝敗を自由に操れるとします。この
2 人同士で試合を行えるまでに、最小で何回のラウンドが必要でしょうか？
制約2 \leq N \leq 10^{18}1 \leq A < B \leq
N入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。N
A B出力友達の 2 人同士で試合を行えるまでに必要な最小のラウンド数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc041/submissions/9179049
// 提出ID : 9179049
// 問題ID : agc041_a
// コンテストID : agc041
// ユーザID : xryuseix
// コード長 : 1885
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

  ll n, a, b;
  cin >> n >> a >> b;
  if (a % 2 == b % 2) {
    cout << (b - a) / 2 << endl;
    return 0;
  }
  ll ans = LLINF;
  ll hasi = a - 1 + 1;
  ans = min(ans, hasi + (b - hasi) / 2);
  hasi = n - b + 1;
  ans = min(hasi + (n - (a + hasi)) / 2, ans);
  fin(ans);
}
