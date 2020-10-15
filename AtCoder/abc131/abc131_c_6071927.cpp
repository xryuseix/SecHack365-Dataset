/*
問題文の引用元：https://atcoder.jp/contests/abc131/tasks/abc131_c
C - Anti-DivisionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 整数 A,B,C,D が与えられます。A 以上 B 以下の整数のうち、C でも D
でも割り切れないものの個数を求めてください。
制約1\leq A\leq B\leq 10^{18}1\leq C,D\leq
10^9入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A B C
D出力A 以上 B 以下の整数のうち、C でも D でも割り切れないものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc131/submissions/6071927
// 提出ID : 6071927
// 問題ID : abc131_c
// コンテストID : abc131
// ユーザID : xryuseix
// コード長 : 1669
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
#define rep(i, n) for (i = 0; i < n; i++)
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
ll gcd(ll x, ll y) {
  ll t;
  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll divc, divd, divcd, cd;
  cd = lcm(c, d);
  divc = b / c - (a - 1) / c;
  divd = b / d - (a - 1) / d;
  divcd = b / (cd) - (a - 1) / (cd);
  cout << (b - a + 1) - divc - divd + divcd << endl;
  // cout<<" "<<divc<<" "<<divd<<" "<<divcd<<endl;
  //////////////////////////////////////////////////////
  return 0;
}
