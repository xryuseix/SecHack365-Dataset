/*
問題文の引用元：https://atcoder.jp/contests/arc035/tasks/arc035_a
A - 高橋くんと回文Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋くんは、ある文字列を持っていました。あるとき、Cat Snuke
がやってきて文字列の一部を食べてしまいました。高橋くんは元の文字列が回文であった可能性があるかを知りたいです。そこで、食べられた文字を適切に埋め合わせて、回文とすることができるか調べてください。食べられた文字それぞれを、どの文字で埋め合わせるかは自由に決められます。入力入力は以下の形式で標準入力から与えられる。sCat
Snuke に食べられた後の文字列 s (1 ≦ \|s\| ≦ 1,000) が 1
行で与えられる。ただし、\|s\| は文字列 s の長さを表す。文字列 s
は英小文字、または * から成ることが保証される。*
は食べられた文字を表す。それ以外の文字は、元の文字列の文字を表す。出力元の文字列が回文であった可能性があるならば
YES 、可能性がないならば NO と標準出力に出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/arc035/submissions/6115478
// 提出ID : 6115478
// 問題ID : arc035_a
// コンテストID : arc035
// ユーザID : xryuseix
// コード長 : 1560
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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
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
  string s;
  cin >> s;
  bool ch = true;
  rep(i, s.length() / 2) {
    if (s[i] == s[s.length() - 1 - i])
      continue;
    else if (s[i] == '*')
      continue;
    else if ('*' == s[s.length() - 1 - i])
      continue;
    else
      ch = false;
  }
  if (ch)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  //////////////////////////////////////////////////////
  return 0;
}
