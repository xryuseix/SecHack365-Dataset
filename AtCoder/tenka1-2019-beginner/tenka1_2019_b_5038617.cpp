/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_b
B - *e**** ********e* *e****e* ****e**Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 英小文字からなる長さ N の文字列 S と整数 K が与えられます。S の K
番目の文字と異なる文字全てを * で置き換えてできる文字列を出力してください。
制約1 \leq K \leq N\leq 10S は英小文字からなる長さ N の文字列であるN,K
は整数である入力入力は以下の形式で標準入力から与えられる。NSK出力S の K
番目の文字と異なる文字全てを * で置き換えてできる文字列を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5038617
// 提出ID : 5038617
// 問題ID : tenka1_2019_b
// コンテストID : tenka1-2019-beginner
// ユーザID : xryuseix
// コード長 : 1249
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

  //	int a,b,c;
  //	cin>>a>>b>>c;
  //	if(b<a)swap(a,b);
  //	if(a<=c&&c<=b)fin("Yes");
  //	else fin("No");
  //

  int n, i, k;
  string s;
  cin >> n >> s >> k;
  char c;
  c = s[k - 1];
  rep(i, n) {
    if (s[i] != c)
      s[i] = '*';
  }
  fin(s) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
