/*
問題文の引用元：https://atcoder.jp/contests/arc050/tasks/arc050_a
A - 大文字と小文字Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 英大文字 C と英小文字 c が与えられるので、C と c
が同じアルファベットか判定してください。
制約C は英大文字である。c
は英小文字である。入力入力は以下の形式で標準入力から与えられる。C c出力C と c
が同じアルファベットならば Yes を、そうでなければ No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc050/submissions/5224454
// 提出ID : 5224454
// 問題ID : arc050_a
// コンテストID : arc050
// ユーザID : xryuseix
// コード長 : 1082
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

  char a, b;
  cin >> a >> b;
  if (a - 'A' == b - 'a')
    fin("Yes");
  else
    cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}