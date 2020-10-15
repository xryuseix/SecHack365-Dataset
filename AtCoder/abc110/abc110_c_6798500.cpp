/*
問題文の引用元：https://atcoder.jp/contests/abc110/tasks/abc110_c
C - String TransformationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 英小文字のみからなる文字列 S, T が与えられます。文字列 S
に対して、次の操作を何度でも行うことができます。操作: 2つの異なる英小文字 c_1,
c_2 を選び、S に含まれる全ての c_1 を c_2 に、c_2 を c_1 に置き換える0
回以上操作を行って、S を T に一致させられるか判定してください。
制約1 \leq |S| \leq 2 \times 10^5|S| = |T|S, T
は英小文字のみからなる入力入力は以下の形式で標準入力から与えられる。ST出力S を T
に一致させられる場合は Yes、そうでない場合は No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc110/submissions/6798500
// 提出ID : 6798500
// 問題ID : abc110_c
// コンテストID : abc110
// ユーザID : xryuseix
// コード長 : 2246
// 実行時間 : 18



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

  bool ans = true;
  vector<pair<char, char>> p1, p2;
  set<pair<char, char>> s1, s2;
  string s, t;
  cin >> s >> t;
  rep(i, s.length()) {
    if (s1.find(mp(s[i], t[i])) == s1.end()) {
      p1.push_back(mp(s[i], t[i]));
      s1.insert(mp(s[i], t[i]));
    }
    if (s2.find(mp(t[i], s[i])) == s2.end()) {
      p2.push_back(mp(t[i], s[i]));
      s2.insert(mp(t[i], s[i]));
    }
  }
  Sort(p1);
  Sort(p2);
  rep(i, p1.size() - 1) {
    if (p1[i].first == p1[i + 1].first) {
      ans = false;
    }
  }
  rep(i, p2.size() - 1) {
    if (p2[i].first == p2[i + 1].first) {
      ans = false;
    }
  }
  if (ans)
    fin("Yes");
  else
    fin("No");

  //////////////////////////////////////////////////////
  return 0;
}
