/*
問題文の引用元：https://atcoder.jp/contests/abc121/tasks/abc121_d
D - XOR WorldEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : f(A, B) を A, A+1, ..., B の排他的論理和としたとき、f(A, B)
を求めてください。排他的論理和とは整数 c_1, c_2, ..., c_n
のビットごとの排他的論理和 y は、以下のように定義されます。y を二進表記した際の
2^k (k \geq 0) の位の数は、c_1, c_2, ..., c_n のうち、二進表記した際の 2^k
の位の数が 1 となるものが奇数個ならば 1、偶数個ならば 0 である。例えば、3 と 5
の排他的論理和は 6 です(二進数表記すると: 011 と 101 の排他的論理和は 110
です)。
制約入力は全て整数である。0 \leq A \leq B \leq
10^{12}入力入力は以下の形式で標準入力から与えられる。A B出力f(A, B)
を計算し、出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc121/submissions/5681669
// 提出ID : 5681669
// 問題ID : abc121_d
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 1458
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll a, b, i, ans;
  cin >> a >> b;
  ans = 0;

  if (a % 2 == 0) {
    if (b % 2 == 0) {
      cout << (b ^ ((max(b - a, (ll)0) + 1) / 2 % 2)) << endl;
    } else {
      cout << ((max(b - a, (ll)0) + 1) / 2 % 2) << endl;
    }
  } else {
    if (b % 2 == 0) {
      cout << (a ^ b ^ ((max(b - a - 1, (ll)0) + 1) / 2 % 2)) << endl;
    } else {
      cout << (a ^ (max(b - a - 1, (ll)0) + 1) / 2 % 2) << endl;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
