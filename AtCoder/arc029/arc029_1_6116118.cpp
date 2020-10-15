/*
問題文の引用元：https://atcoder.jp/contests/arc029/tasks/arc029_1
A - 高橋君とお肉Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は友達とキャンプに行くことになった。高橋君と友達は性能が同じである 2
個の肉焼き器を持っており、それぞれの肉焼き器にお肉を乗せて並行して焼くことができる。一旦肉焼き器にお肉を乗せたら、お肉が焼きあがるまではその肉焼き器からお肉を取り出したり、その肉焼き器に別のお肉を乗せたりはできない。お肉が焼けたらお肉を取り出すことができる。2
つの肉焼き器にまたがって 1 つのお肉を置くことはできない。また、お肉は全部で N
個あり、お肉には 1 から N まで番号が付けられている。お肉 i
を焼くのには、どちらの肉焼き器でも時間 t_i
だけかかる。お肉を肉焼き器に置く動作、取り出す動作には時間がかからない。高橋君はお肉を焼く係であり、N
個すべてのお肉を焼くことになった。みんなお腹が空いているので、すべてのお肉を焼くのにかかる時間を最小化させたい。すべてのお肉を焼くのにかかる時間の最小値を求めよ。入力入力は以下の形式で標準入力から与えられる。Nt_1t_2:t_N1
行目には、お肉の個数を表す整数 N (1 ≦ N ≦ 4) が与えられる。これは、お肉が N
個あることを表す。2 行目から N 行にはお肉の情報が与えられる。N 行のうち i
行目には整数 t_i が書かれており、これはお肉 i を焼くのにかかる時間が t_i (1 ≦
t_i ≦ 50) であることを表す。出力すべてのお肉を焼くのにかかる時間の最小値を 1
行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc029/submissions/6116118
// 提出ID : 6116118
// 問題ID : arc029_1
// コンテストID : arc029
// ユーザID : xryuseix
// コード長 : 1496
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
  int a = 0, b = 0, n;
  cin >> n;
  vector<int> t(n);
  rep(i, n) { cin >> t[i]; }
  Sort(t);
  rep(i, n) {
    if (a < b)
      a += t[t.size() - i - 1];
    else
      b += t[t.size() - 1 - i];
  }
  cout << max(a, b) << endl;
  //////////////////////////////////////////////////////
  return 0;
}
