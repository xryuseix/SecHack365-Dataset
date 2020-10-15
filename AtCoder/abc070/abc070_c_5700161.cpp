/*
問題文の引用元：https://atcoder.jp/contests/abc070/tasks/abc070_c
C - Multiple ClocksEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : N 台の時計があり、i(1≦i≦N) 番目の時計の針はちょうど T_i 秒で時計盤を 1
周します。 最初、全ての時計の針は真っ直ぐ上に向いており、止まっています。
イルカは、全ての時計の針を同時に動かし始めました。
再び、全ての時計の針が真っ直ぐ上に向くのは何秒後でしょうか?
制約1≦N≦100  1≦T_i≦10^{18}   入力は全て整数である。  答えは 10^{18}
秒以内である。入力入力は以下の形式で標準入力から与えられる。  NT_1:
T_N出力時計の針を動かし始めてから、再び全ての時計の針が真っ直ぐ上に向くまでの秒数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc070/submissions/5700161
// 提出ID : 5700161
// 問題ID : abc070_c
// コンテストID : abc070
// ユーザID : xryuseix
// コード長 : 1525
// 実行時間 : 2



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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;
//_|
ull gcd(ull x, ull y) {
  ull t;
  while (y != 0) {
    t = x % y;
    x = y;
    y = t;
  }
  return x;
}
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

ull nlcm(vector<ull> numbers) {
  ull L;
  L = numbers[0];
  for (ull i = 1; i < numbers.size(); i++) {
    L = lcm(L, numbers[i]);
    //		cout<<L<<endl;
  }
  return L;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ull i, n;
  cin >> n;
  vector<ull> a(n, 0);
  rep(i, n) cin >> a[i];
  cout << nlcm(a) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
