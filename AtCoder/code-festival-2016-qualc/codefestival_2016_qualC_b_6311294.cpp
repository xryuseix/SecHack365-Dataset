/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_b
B - K CakesEditorial
Time Limit : 1 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : K 個のケーキがあります。高橋君は、1日に一つずつ、K
日かけてこれらのケーキを食べようと考えています。ケーキはT 種類あり、種類i
(1≦i≦T) のケーキはa_i
個あります。二日連続で同じ種類のケーキを食べると飽きてしまうため、高橋君は、うまくケーキを食べる順番を決めて、前日と同じ種類のケーキを食べる日数を最小にしようと考えました。高橋君のために前日と同じ種類のケーキを食べる日数の最小値を求めてください。
制約1≦K≦10000, 1≦T≦1001≦a_i≦100a_1+a_2+ ... +a_T =
K入力入力は以下の形式で標準入力から与えられる。K Ta_1 a_2 ...
a_T出力前日と同じ種類のケーキを食べる日数の最小値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-qualc/submissions/6311294
// 提出ID : 6311294
// 問題ID : codefestival_2016_qualC_b
// コンテストID : code-festival-2016-qualc
// ユーザID : xryuseix
// コード長 : 1702
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
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
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int k, t;
  cin >> k >> t;
  vi v(t);
  rep(i, t) cin >> v[i];
  Sort(v);
  int sum = 0;
  for (int i = 0; i < t - 1; i++) {
    sum += v[i];
  }
  cout << max(v[t - 1] - sum - 1, 0) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
