/*
問題文の引用元：https://atcoder.jp/contests/abc139/tasks/abc139_a
A - TenkiEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : ある 3 日間の天気予報が、長さ 3 の文字列 S として与えられます。S の
i~(1 \leq i \leq 3) 文字目が S のとき、i 日目の天気予報が晴れだったことを、C
のときは曇りだったことを、R のときは雨だったことを意味します。また 3
日間の実際の天気が、長さ 3 の文字列 T として与えられます。T の i~(1 \leq i \leq
3) 文字目が S のとき、i 日目の実際の天気が晴れだったことを、C
のときは曇りだったことを、R のときは雨だったことを意味します。3
日間で天気予報が的中した日が何日あるかを出力してください。
制約S および T は長さ 3 の文字列である。S および T は S, C, R
のみからなる。入力入力は以下の形式で標準入力から与えられる。ST出力3
日間で天気予報が的中した日が何日あるかを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc139/submissions/7322007
// 提出ID : 7322007
// 問題ID : abc139_a
// コンテストID : abc139
// ユーザID : xryuseix
// コード長 : 1705
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

  string s, t;
  cin >> s >> t;
  int ans = 0;
  if (s[0] == t[0])
    ans++;
  if (s[1] == t[1])
    ans++;
  if (s[2] == t[2])
    ans++;
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
