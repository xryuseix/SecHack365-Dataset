/*
問題文の引用元：https://atcoder.jp/contests/code-thanks-festival-2017-open/tasks/code_thanks_festival_2017_b
B - Concatenated PalindromeEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 英小文字からなる文字列 S が与えられます。 S
の後ろに英小文字からなる任意の文字列 T
(空文字列も含む)を連結することで、回文にしたいです。 条件を満たす文字列 T
のうち、T の最小の長さを求めてください。
制約1≦|S|≦50 (|S| は文字列 S の長さ) 文字列 S
は英小文字から成る。入力入力は以下の形式で標準入力から与えられる。S
出力条件を満たす文字列 T の最小の長さを求めよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-thanks-festival-2017-open/submissions/6257113
// 提出ID : 6257113
// 問題ID : code_thanks_festival_2017_b
// コンテストID : code-thanks-festival-2017-open
// ユーザID : xryuseix
// コード長 : 1693
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

  string s, t;
  cin >> s;
  t = s;
  reverse(t.begin(), t.end());
  for (int i = 0; i < s.length(); i++) {
    if (t.substr(0, t.length() - i) == s.substr(i)) {
      cout << i << endl;
      return 0;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}