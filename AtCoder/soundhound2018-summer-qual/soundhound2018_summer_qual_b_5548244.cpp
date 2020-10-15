/*
問題文の引用元：https://atcoder.jp/contests/soundhound2018-summer-qual/tasks/soundhound2018_summer_qual_b
B - AcrosticEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 小文字のアルファベットからなる文字列 S が与えられます。この文字列を w
文字ごとに改行したときに、各行の先頭の文字を上から順番につなげて得られる文字列を出力してください。
制約1\leq w\leq |S| \leq 1000S は小文字のアルファベットのみからなるw
は整数入力入力は以下の形式で標準入力から与えられる。Sw出力答えの文字列を 1
行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/soundhound2018-summer-qual/submissions/5548244
// 提出ID : 5548244
// 問題ID : soundhound2018_summer_qual_b
// コンテストID : soundhound2018-summer-qual
// ユーザID : xryuseix
// コード長 : 1242
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

  int n, i;
  string s;
  cin >> s >> n;
  rep(i, s.length()) if (i % n == 0) cout << s[i];
  cout << endl;

  //////////////////////////////////////////////////////
  return 0;
}
