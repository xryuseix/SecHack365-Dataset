/*
問題文の引用元：https://atcoder.jp/contests/arc057/tasks/arc057_a
A - 2兆円Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は 2 兆 (=2×10^{12}) 円が欲しいです。高橋君の現在の所持金は A
円であり、ある日に高橋君が t 円を持っているならその翌日には高橋君の所持金は 1 +
Kt 円増加します。高橋君の所持金がはじめて 2 兆円以上になるのは何日後でしょうか。
制約0 ≦ A < 2 × 10^{12}0 ≦ K ≦
10^6入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A
K出力高橋君の所持金がはじめて 2 兆円以上になるまでにかかる日数を一行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc057/submissions/5224546
// 提出ID : 5224546
// 問題ID : arc057_a
// コンテストID : arc057
// ユーザID : xryuseix
// コード長 : 1189
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

  ll a, k, n = 0;
  cin >> a >> k;

  if (k == 0) {
    cout << 2000000000000 - a << endl;
    return 0;
  }

  while (2000000000000 > a) {
    a = a * k + 1 + a;
    n++;
    //		cout<<n<<":"<<a<<endl;
  }
  cout << n << endl;

  //////////////////////////////////////////////////////
  return 0;
}
