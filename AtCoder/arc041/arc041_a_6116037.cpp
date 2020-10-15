/*
問題文の引用元：https://atcoder.jp/contests/arc041/tasks/arc041_a
A - コインの反転Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 表向きのコインが x 枚、裏向きのコインが y 枚ある。高橋君はちょうど k
枚のコインを選び、それらすべてをひっくり返す。その結果、表向きのコインは最大で何枚になるか？入力入力は以下の形式で標準入力から与えられる。x
yk1 行目には、表向きのコインの枚数 x (1≦x≦10^6) 、裏向きのコインの枚数 y
(1≦y≦10^6) が空白区切りで与えられる。2 行目には、ひっくり返すコインの枚数 k
(1≦k≦x+y)
が与えられる。出力コインをひっくり返した結果、表向きのコインは最大で何枚になるか
1 行に出力せよ。出力の末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc041/submissions/6116037
// 提出ID : 6116037
// 問題ID : arc041_a
// コンテストID : arc041
// ユーザID : xryuseix
// コード長 : 1375
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
  int x, y, k;
  cin >> x >> y >> k;
  if (y >= k)
    fin(x + k);
  else {
    cout << (x + y) - (k - y) << endl;
  }
  //////////////////////////////////////////////////////
  return 0;
}
