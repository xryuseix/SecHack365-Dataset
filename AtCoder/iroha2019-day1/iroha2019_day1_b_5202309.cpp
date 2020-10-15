/*
問題文の引用元：https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_b
B - ローリング・老人と海Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 :
読書家のいろはちゃんは、「老人と海」という文字列の頭文字を末尾に持っていくと「人と海老」になることに気づきました。
いろはちゃんのお気に入りの本の題名 S
に対し、「先頭の文字を末尾に移動する」という操作を K
回ほどこした文字列を答えてください。
制約     1 \leq |S| \leq 1000    0 \leq K \leq 1000   S
は半角英数字からなる文字列                  入力
入力は以下の形式で標準入力から与えられます。   S  K               出力  S
に操作を K 回ほどこした文字列を 1
行に出力してください。最後に改行を入れてください。
// ソースコードの引用元 :
https://atcoder.jp/contests/iroha2019-day1/submissions/5202309
// 提出ID : 5202309
// 問題ID : iroha2019_day1_b
// コンテストID : iroha2019-day1
// ユーザID : xryuseix
// コード長 : 1115
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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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

  int i, n;
  string s;
  cin >> s >> n;
  n %= s.length();
  cout << s.substr(n) + s.substr(0, n) << endl;
  ;

  //////////////////////////////////////////////////////
  return 0;
}
