/*
問題文の引用元：https://atcoder.jp/contests/arc039/tasks/arc039_a
A - A - B problemEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は次のような問題を考えました。3 桁の整数 A、B が与えられるので A
- B
を求める。しかしあまりにも簡単すぎるので、ちょっと変更して次のような問題にしました。3
桁の整数 A、B が与えられる。A と B のどちらかを 1 桁だけ書き換えてもよい時の、A
- B の答えになり得る整数の最大値を求める。なお、一番上の桁が 0
であるような整数へと書き換えることはできません。例えば 123 を 023
へと書き換えたりすることはできません。高橋君は自信満々であなたへとこの問題を出題してきました。ぜひ挑戦してみてください。入力入力は以下の形式で標準入力から与えられる。A
B1 行に 2 つの整数 A(100 ≦ A ≦ 999)、B(100 ≦ B ≦ 999)
が空白区切りで与えられる。出力A、B のどちらかを 1 桁だけ書き換えてもよい時の、A
- B の答えになり得る整数の最大値を 1
行に出力せよ。出力は標準出力に行い、末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc039/submissions/7188308
// 提出ID : 7188308
// 問題ID : arc039_a
// コンテストID : arc039
// ユーザID : xryuseix
// コード長 : 1944
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

  string a, b;
  cin >> a >> b;
  int ans = -INF;
  string s;
  s = a;
  s[0] = '9';
  ans = max(ans, STI(s) - STI(b));
  s = a;
  s[1] = '9';
  ans = max(ans, STI(s) - STI(b));
  s = a;
  s[2] = '9';
  ans = max(ans, STI(s) - STI(b));
  s = b;
  s[0] = '1';
  ans = max(ans, STI(a) - STI(s));
  s = b;
  s[1] = '0';
  ans = max(ans, STI(a) - STI(s));
  s = b;
  s[2] = '0';
  ans = max(ans, STI(a) - STI(s));
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
