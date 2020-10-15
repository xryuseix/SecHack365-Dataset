/*
問題文の引用元：https://atcoder.jp/contests/cpsco2019-s3/tasks/cpsco2019_s3_a
A - ASOKOEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : "OSAKA" という文字列に対し、'O' を 'A' に、'A' を 'O'
に変換する操作を行うと "ASOKO" になります。英大文字のみから成る 5 文字の文字列 S
が与えられます。S に対し、'O' を 'A' に、'A' を 'O'
に変換してできる文字列を出力するプログラムを作成してください。
制約S は 5 文字の文字列です。S
は英大文字のみから成ります。入力入力は以下の形式で標準入力から与えられます。S
出力答えを表す文字列を一行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/cpsco2019-s3/submissions/5407494
// 提出ID : 5407494
// 問題ID : cpsco2019_s3_a
// コンテストID : cpsco2019-s3
// ユーザID : xryuseix
// コード長 : 1318
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

  int i;
  string s;

  cin >> s;
  rep(i, s.length()) {
    if (s[i] == 'A') {
      s[i] = 'O';

    } else if (s[i] == 'O') {
      s[i] = 'A';
    }
  }
  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
