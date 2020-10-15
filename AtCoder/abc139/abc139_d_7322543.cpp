/*
問題文の引用元：https://atcoder.jp/contests/abc139/tasks/abc139_d
D - ModSumEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 整数 N に対して、\{1, 2, ..., N\} を並べ替えた数列 \{P_1, P_2, ...,
P_N\} を選びます。そして、各 i=1,2,...,N について、i を P_i で割った余りを M_i
とします。M_1 + M_2 + \cdots + M_N の最大値を求めてください。
制約N は 1 \leq N \leq 10^9
を満たす整数である。入力入力は以下の形式で標準入力から与えられる。N出力M_1 + M_2
+ \cdots + M_N の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc139/submissions/7322543
// 提出ID : 7322543
// 問題ID : abc139_d
// コンテストID : abc139
// ユーザID : xryuseix
// コード長 : 1615
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

  ll n;
  cin >> n;
  cout << n *(n - 1) / 2 << endl;

  //////////////////////////////////////////////////////
  return 0;
}