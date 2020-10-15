/*
問題文の引用元：https://atcoder.jp/contests/arc025/tasks/arc025_1
A - ゴールドラッシュEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : stove 君はとある平面世界の住人である。ある日 stove
君は多くの金が取れる鉱山を砂漠とジャングルに発見した。stove 君は 7
日間かけて鉱山採掘に取り組むことにした。砂漠とジャングルは遠い位置関係にあるので、それぞれの日にはどちらか一方の鉱山でしか採掘できない。その日の天候、気分に応じて採掘量が鉱山ごとに変化してしまうので、どちらの鉱山を選ぶべきかがその日毎に異なる場合がある。それぞれの日においての採掘量が分かっているとき、最適に鉱山を選んだ場合に得られる金の量がいくらかを求めるプログラムを作成せよ。入力入力は以下の形式で標準入力から与えられる。D_1
D_2 .. D_7J_1 J_2 .. J_71 行目には、砂漠の鉱山に関する情報を表す 7
個の整数が空白区切りで書かれている。このうち左から i 番目の整数 D_i (0 ≦ D_i ≦
2,000) は、i 日目に砂漠の鉱山で採掘を行った場合に得られる金の量が D_i
キログラムであることを表す。2 行目にはジャングルの鉱山に関する情報を表す 7
個の整数が空白区切りで書かれている。このうち左から i 番目の整数 J_i (0 ≦ J_i ≦
2,000) は、i 日目にジャングルの鉱山で採掘を行った場合に得られる金の量が J_i
キログラムであることを表す。出力最適に鉱山を選んだ場合に得られる金の量を 1
行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc025/submissions/6114994
// 提出ID : 6114994
// 問題ID : arc025_1
// コンテストID : arc025
// ユーザID : xryuseix
// コード長 : 1434
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

  int i, n = 7;
  vi v(n), w(n);
  rep(i, n) cin >> v[i];
  rep(i, n) cin >> w[i];
  int sum = 0;
  rep(i, n) sum += max(v[i], w[i]);
  cout << sum << endl;

  //////////////////////////////////////////////////////
  return 0;
}
