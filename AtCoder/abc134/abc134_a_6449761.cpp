/*
問題文の引用元：https://atcoder.jp/contests/abc134/tasks/abc134_a
A - DodecagonEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 半径 a の円に内接する正十二角形の面積は 3a^2
であることが知られています。整数 r が与えられるので、半径 r
の円に内接する正十二角形の面積を求めて下さい。
制約1 \leqq r \leqq 100r
は整数である。入力入力は以下の形式で標準入力から与えられます。r出力正十二角形の面積を表す整数を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc134/submissions/6449761
// 提出ID : 6449761
// 問題ID : abc134_a
// コンテストID : abc134
// ユーザID : xryuseix
// コード長 : 1535
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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  double n;
  cin >> n;
  cout << (int)3 * n * n << endl;

  //////////////////////////////////////////////////////
  return 0;
}
