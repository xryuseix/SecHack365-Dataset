/*
問題文の引用元：https://atcoder.jp/contests/abc126/tasks/abc126_a
A - Changing a CharacterEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : A, B, C からなる長さ N の文字列 S と、1 以上 N 以下の整数 K
が与えられます。文字列 S の K 文字目を小文字に書き換え、新しくできた S
を出力してください。
制約1 ≤ N ≤ 501 ≤ K ≤ NS は A, B, C からなる長さ N
の文字列入力入力は以下の形式で標準入力から与えられる。N KS出力文字列 S の K
文字目を小文字に書き換え、新しくできた S を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc126/submissions/5448740
// 提出ID : 5448740
// 問題ID : abc126_a
// コンテストID : abc126
// ユーザID : xryuseix
// コード長 : 1284
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

  int n, k;
  string s;
  cin >> n >> k >> s;

  s[k - 1] = s[k - 1] + ('a' - 'A');
  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
