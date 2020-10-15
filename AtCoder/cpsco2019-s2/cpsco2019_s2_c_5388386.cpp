/*
問題文の引用元：https://atcoder.jp/contests/cpsco2019-s2/tasks/cpsco2019_s2_c
C - Delicious BurgersEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : バンズ文字列とは、以下によって定義される、文字 ( および )
からなる文字列のことです。空文字列はバンズ文字列である。 A
がバンズ文字列であるとき、( と A と ) を順に連結した文字列はバンズ文字列である。
A, B がバンズ文字列であるとき、A と B を連結した文字列はバンズ文字列である。
これら以外の文字列はバンズ文字列ではない。
上のようにしてバンズ文字列を生成するにあたって、 2. によって同時に追加された (
と )
をペアにして、これを対応バンズと呼ぶことにします。バンズ文字列では、任意の文字がある対応バンズに属し、どの文字も複数の対応バンズに属さないことがわかります。また、バーガー文字列とは、以下によって定義される、文字
( , ) および | からなる文字列のことです。文字 |
をすべて取り除くと、バンズ文字列になる。 文字 | は2つ以上連続しない。 長さ N
のバンズ文字列 S が与えられます。 あなたは S に文字 | を K
個挿入し、バーガー文字列を作ることにしました。バーガー文字列に含まれるある対応バンズの美味しさとは、その2文字
( と ) の間にある |
の個数のことです。バーガー文字列の美味しさとは、それに含まれるすべての対応バンズの美味しさの和のことです。
あなたが作ることのできるバーガー文字列の美味しさの最大値を求めてください。
制約1 \leq K < N \leq 10^5 K, N は整数である。|S|=NS
はバンズ文字列である。入力入力は以下の形式で標準入力から与えられる。N
KS出力作ることのできるバーガー文字列の美味しさの最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/cpsco2019-s2/submissions/5388386
// 提出ID : 5388386
// 問題ID : cpsco2019_s2_c
// コンテストID : cpsco2019-s2
// ユーザID : xryuseix
// コード長 : 1347
// 実行時間 : 9



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

  vector<int> dsum;
  int n, k, i;
  cin >> n >> k;
  string s;
  cin >> s;
  dsum.push_back(0);
  for (i = 0; i < n; i++) {
    if (s[i] == '(')
      dsum.push_back(dsum[i] + 1);
    else
      dsum.push_back(dsum[i] - 1);
  }
  sort(dsum.begin(), dsum.end());
  ll ans = 0;
  for (i = dsum.size() - 1; k > 0 && i >= 0; i--) {
    ans += dsum[i];
    k--;
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
