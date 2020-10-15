/*
問題文の引用元：https://atcoder.jp/contests/tkppc4-1/tasks/tkppc4_1_a
A - ヘビがヘビーEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 :                                     ヘビーなヘビが N 匹います。
これらのヘビのヘビー度の平均値は W です。
ヘビー度が平均値より真に大きいヘビは最大で何匹いるでしょうか？
ただし、各ヘビのヘビー度は実数値であるものとします。
制約                                    入力は全て整数である。
1 \leq N \leq 100                    1 \leq W \leq 100
入力                     入力は以下の形式で標準入力から与えられます。
N　W
出力
ヘビー度が平均値より真に大きいヘビの数として考えられる最大値を、1
行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/tkppc4-1/submissions/6556088
// 提出ID : 6556088
// 問題ID : tkppc4_1_a
// コンテストID : tkppc4-1
// ユーザID : xryuseix
// コード長 : 1566
// 実行時間 : 2



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, w;
  cin >> n >> w;
  cout << n - 1 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
