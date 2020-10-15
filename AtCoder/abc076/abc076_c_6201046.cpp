/*
問題文の引用元：https://atcoder.jp/contests/abc076/tasks/abc076_c
C - Dubious Document 2Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点：300 点
問題文 : E869120
は、宝物が入ってそうな箱を見つけました。しかし、これには鍵がかかっており、鍵を開けるためには英小文字からなる文字列
S が必要です。彼は文字列 S' を見つけ、これは文字列 S の 0 個以上 |S|
個以内の文字が ? に置き換わった文字列であることも分かりました。ただし、文字列 A
に対して、|A| を「文字列 A の長さ」とします。  そこで、E869120
はヒントとなる紙を見つけました。  条件1：文字列 S
の中に連続する部分文字列として英小文字から成る文字列 T が含まれている。
条件2：S
は、条件1を満たす文字列の中で辞書順最小の文字列である。そのとき、鍵となる文字列
S を出力しなさい。ただし、そのような文字列 S が存在しない場合は代わりに
UNRESTORABLE と出力しなさい。
制約1 \leq |S'|, |T| \leq 50S' は英小文字と ? から成るT
は英小文字から成る入力入力は以下の形式で標準入力から与えられる。S'T出力鍵となる文字列
S を出力しなさい。ただし、そのような文字列 S が存在しない場合は、代わりに
UNRESTORABLE と出力しなさい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc076/submissions/6201046
// 提出ID : 6201046
// 問題ID : abc076_c
// コンテストID : abc076
// ユーザID : xryuseix
// コード長 : 2033
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

bool ok = true;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  string s, t;
  cin >> s >> t;

  if (s.size() < t.size()) {
    cout << "UNRESTORABLE" << endl;
    return 0;
  }

  for (int i = s.length() - t.length(); i >= 0; i--) {
    ok = true;
    for (int j = 0; j < t.length(); j++) {
      if (s[i + j] == t[j] || s[i + j] == '?')
        continue;
      else
        ok = false;
    }
    if (ok) {
      for (int j = 0; j < t.length(); j++) {
        s[i + j] = t[j];
      }
      break;
    }
  }
  if (!ok) {
    cout << "UNRESTORABLE" << endl;
    return 0;
  }
  rep(i, s.size()) {
    if (s[i] == '?')
      s[i] = 'a';
  }
  cout << s << endl;
  //////////////////////////////////////////////////////
  return 0;
}
