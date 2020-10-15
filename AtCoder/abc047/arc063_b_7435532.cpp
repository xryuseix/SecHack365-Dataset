/*
問題文の引用元：https://atcoder.jp/contests/abc047/tasks/arc063_b
D - An Invisible HandEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : N 個の町が一直線上に並んでいます。行商人の高橋君は町 1
から出発し、リンゴの売買をしながら町 N へと向かいます。はじめ高橋君は町 1
におり、リンゴを 1
つも持っていません。高橋君は次のいずれかの行動を繰り返し行います。移動: 町 i (i
< N) にいるとき、町 i + 1 へ移動する。リンゴの売買:
リンゴを好きな個数だけ売買する。ここで、町 i (1 ≦ i ≦ N)
ではリンゴの買値も売値もともに A_i 円とする。ここで A_i は相異なる整数です。1
つの町で売買するリンゴの個数に制限はありませんが、旅の中で売買するリンゴの個数は合計で
(買う個数と売る個数を合わせて) T
個以下にしなくてはなりません。高橋君は旅の利益、すなわちリンゴを売った代金から買った代金を引いた値を最大にするように旅をするとします。旅が終わったときに持っていたリンゴの価値は考えず、旅の中で売買した金額だけを考えます。この旅に先立って、青木君は任意の町
i に対して A_i を好きな非負整数 A_i'
に変えるという操作を好きなだけ行うことができます。ただし、この操作は行うごとに
|A_i - A_i'|
のコストがかかります。操作後には異なる町の間でリンゴの値段が同じになっていても構いません。青木君の目的はできるだけ少ない合計コストの操作で高橋君の利益を少なくとも
1
円下げることです。合計コストの最小値を求めてください。ただし、元の状態で高橋君が
1 円以上の利益を上げられることは仮定して構いません。
制約1 ≦ N ≦ 10^51 ≦ A_i ≦ 10^9 (1 ≦ i ≦ N)A_i は相異なる2 ≦ T ≦
10^9入力の状態では高橋君は 1
円以上の利益を上げられることが保証される入力入力は以下の形式で標準入力から与えられる。N
TA_1 A_2 ... A_N出力高橋君の収益を少なくとも 1
円下げるために必要な合計コストの最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc047/submissions/7435532
// 提出ID : 7435532
// 問題ID : arc063_b
// コンテストID : abc047
// ユーザID : xryuseix
// コード長 : 1878
// 実行時間 : 46



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

  map<int, int> m;
  int n, t;
  cin >> n >> t;
  vi a(n);
  rep(i, n) cin >> a[i];

  int minn = a[0];
  for (int i = 1; i < n; i++) {
    if (minn < a[i])
      m[a[i] - minn]++;
    else if (minn > a[i])
      minn = a[i];
  }
  int ans = 0;
  for (auto &&it : m) {
    ans = max(ans, it.first);
  }
  fin(m[ans]);

  //////////////////////////////////////////////////////
  return 0;
}
