/*
問題文の引用元：https://atcoder.jp/contests/abc142/tasks/abc142_a
A - Odds of OddnessEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 整数 N が与えられます。高橋君は、N 以下の正整数の中から等確率で 1
つを選んで a とします。このとき、a が奇数である確率を答えてください。
制約1 ≤ N ≤ 100入力入力は以下の形式で標準入力から与えられる。N出力a
が奇数である確率を出力せよ。出力は、ジャッジの出力との絶対誤差または相対誤差が
10^{-6} 以下のとき正解と判定される。
// ソースコードの引用元 : https://atcoder.jp/contests/abc142/submissions/7778342
// 提出ID : 7778342
// 問題ID : abc142_a
// コンテストID : abc142
// ユーザID : xryuseix
// コード長 : 1739
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
  int odd = 0, even = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0)
      even++;
    else
      odd++;
  }
  printf("%.7f\n", (double)odd / n);

  //////////////////////////////////////////////////////
  return 0;
}
