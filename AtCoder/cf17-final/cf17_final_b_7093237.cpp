/*
問題文の引用元：https://atcoder.jp/contests/cf17-final/tasks/cf17_final_b
B - Palindrome-phobiaEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : すぬけ君は a、b、c の 3 種類の文字のみからなる文字列 S
を持っています。回文恐怖症のすぬけ君は S の文字を自由に並び替えて、2
文字以上の回文を部分文字列として含まないようにしようと思いました。これが可能かどうかを判定して下さい。
制約1 \leq |S| \leq 10^5S は a、b、c
以外の文字を含まない。入力入力は以下の形式で標準入力から与えられる。S出力可能な場合は
YES、不可能な場合は NO を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/cf17-final/submissions/7093237
// 提出ID : 7093237
// 問題ID : cf17_final_b
// コンテストID : cf17-final
// ユーザID : xryuseix
// コード長 : 1774
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

  string s;
  cin >> s;
  int a = 0, b = 0, c = 0;
  rep(i, s.length()) {
    if (s[i] == 'a')
      a++;
    else if (s[i] == 'b')
      b++;
    else
      c++;
  }
  if (max({a, b, c}) - min({a, b, c}) > 1) {
    cout << "NO" << endl;
  } else
    cout << "YES" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
