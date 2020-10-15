/*
問題文の引用元：https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_a
A - Takahashi CalendarEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 今日は 8 月 24 日、年に 5 日しかない積の日です。d が 2 桁の整数で、d の
1 の位を d_1、10 の位を d_{10} としたときに m, d_1, d_{10}
が次の条件をすべて満たす場合、m 月 d 日を積の日と呼びます。d_1 \geq 2d_{10} \geq
2d_1 \times d_{10} = m高橋くんはこの日をもっと増やしたいと考え、1 年が 1 月から
M 月までの合計 M ヶ月、どの月も 1 日から D 日までの合計 D
日からなる高橋暦を誕生させました。高橋暦において、積の日は年に何日あるでしょうか。
制約入力は全て整数である。1 \leq M \leq 1001 \leq D \leq
99入力入力は以下の形式で標準入力から与えられる。M D出力高橋暦において積の日が 1
年のうちに訪れる回数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/jsc2019-qual/submissions/7107908
// 提出ID : 7107908
// 問題ID : jsc2019_qual_a
// コンテストID : jsc2019-qual
// ユーザID : xryuseix
// コード長 : 1847
// 実行時間 : 34



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

  int m, d;
  cin >> m >> d;
  int ans = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= d; j++) {
      int d0 = j % 10;
      int d1 = j / 10;

      if (d0 > 1 && d1 > 1 && d0 * d1 == i) {
        ans++;
        // cout<<d0<<" "<<d1<<endl;
      }
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
