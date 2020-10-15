/*
問題文の引用元：https://atcoder.jp/contests/arc038/tasks/arc038_a
A - カードと兄妹Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : N 枚のカードがあり、i (1 ≦ i ≦ N) 枚目のカードには整数 A_i
が書かれています。ゲーム好きの兄妹はこれらのカードを使ってゲームをしようとしています。最初に全てのカードを、カードに書かれた整数が見えるようにテーブルの上に並べる。プレイヤーは自分のターンに、テーブルの上にあるカードからちょうど
1
枚のカードを選んで取る。テーブルの上にカードがなくなるまで、交互にターンを繰り返す。最終的に、自分が取ったカードに書かれた整数の和がプレイヤーの
スコア となる。2
人ともが自分のスコアを出来るだけ大きくしようとしたとき、先手のスコアはいくつになるでしょうか？入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N1 行目には、カードの枚数を表す整数 N (1 ≦ N ≦ 1000) が与えられる。2
行目には、各カードに書かれた整数を表す N
個の整数が空白区切りで与えられる。このうち i (1 ≦ i ≦ N) 番目の整数 A_i (1 ≦ A_i
≦ 1000) は、i 枚目のカードに書かれた整数を表す。出力先手のスコアを 1
行に出力せよ。出力の末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc038/submissions/6127643
// 提出ID : 6127643
// 問題ID : arc038_a
// コンテストID : arc038
// ユーザID : xryuseix
// コード長 : 1527
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
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  sort(v.rbegin(), v.rend());
  ll ans = 0;
  for (int i = 0; i < n; i += 2)
    ans += v[i];
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
