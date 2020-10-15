/*
問題文の引用元：https://atcoder.jp/contests/abc132/tasks/abc132_c
C - Divide the ProblemsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 高橋君は、  N
個の競技プログラミング用の問題をつくりました。それぞれの問題には 1 から N
の番号がついており、問題 i の難易度は整数 d_i
で表されます(大きいほど難しいです)。高橋君はある整数 K を決めることで、難易度が
K 以上ならば「 ARC 用の問題」難易度が K 未満ならば「 ABC
用の問題」という風に、これらの問題を二種類に分類しようとしています。「ARC
用の問題」と「ABC 用の問題」が同じ数になるような整数 K
の選び方は何通りあるでしょうか。
制約2 \leqq N \leqq 10^5N は偶数である。1 \leqq d_i \leqq
10^5入力は全て整数である。入力入力は以下の形式で標準入力から与えられます。Nd_1
d_2 ... d_N出力「ARC 用の問題」と「ABC 用の問題」が同じ数になるような整数 K
の選び方の数を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc132/submissions/6164089
// 提出ID : 6164089
// 問題ID : abc132_c
// コンテストID : abc132
// ユーザID : xryuseix
// コード長 : 1551
// 実行時間 : 15



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
  vi d(n);
  rep(i, n) cin >> d[i];
  Sort(d);
  if (d[n / 2] == d[n / 2 - 1]) {
    cout << 0 << endl;
    return 0;
  }
  cout << d[n / 2] - d[n / 2 - 1] << endl;
  //////////////////////////////////////////////////////
  return 0;
}
