/*
問題文の引用元：https://atcoder.jp/contests/abc132/tasks/abc132_b
B - Ordinary NumberEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : {1,\ 2,\ ...,\ n} の順列 p = {p_1,\ p_2,\ ...,\ p_n}
があります。以下の条件を満たすような p_i (1 < i < n)
がいくつあるかを出力してください。p_{i - 1},\ p_i,\ p_{i + 1} の 3
つの数の中で、p_i が 2 番目に小さい。
制約入力は全て整数である。3 \leq n \leq 20p は {1,\ 2,\ ...,\ n}
の順列である。入力入力は以下の形式で標準入力から与えられる。np_1 p_2 ...
p_n出力条件を満たす p_i の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc132/submissions/6159668
// 提出ID : 6159668
// 問題ID : abc132_b
// コンテストID : abc132
// ユーザID : xryuseix
// コード長 : 1567
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
  vi p(n);
  rep(i, n) cin >> p[i];
  int ans = 0;
  for (int i = 1; i < n - 1; i++) {
    if ((p[i - 1] < p[i] && p[i] < p[i + 1]) ||
        (p[i - 1] > p[i] && p[i] > p[i + 1]))
      ans++;
  }
  fin(ans);
  //////////////////////////////////////////////////////
  return 0;
}
