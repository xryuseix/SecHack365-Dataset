/*
問題文の引用元：https://atcoder.jp/contests/abc058/tasks/arc071_a
C - Dubious DocumentEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
すぬけ君は、文字列の書かれた紙から文字をいくつか切り抜いて、並び替えて別の文字列を作るのが好きです。明日になると、すぬけ君は文字列
S_1,...,S_n のうちどれか 1
つが書かれた紙がもらえます。すぬけ君は文字列を作る事をとても楽しみにしているので、どんな文字列を作るか計画を立てることにしました。ただし、すぬけ君はまだどの文字列が書かれた紙がもらえるかを知らないため、どの文字列が書かれていた場合にも作れる文字列を考えることにしました。S_1,...,S_n
のどの文字列が書かれていても作れる文字列のうち、最長のものを求めてください。最長のものが複数ある場合は、辞書順で最小のものを求めてください。
制約1 \leq n \leq 50i = 1, ... , n に対して、 1 \leq |S_i| \leq 50i = 1, ... , n
に対して、 S_i は小文字のアルファベット( a - z
)からなる文字列入力入力は以下の形式で標準入力から与えられる。nS_1...S_n出力条件を満たす最長の文字列のうち、辞書順で最小のものを出力せよ。そのような文字列が空文字列である場合は、空行を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc058/submissions/5539072
// 提出ID : 5539072
// 問題ID : arc071_a
// コンテストID : abc058
// ユーザID : xryuseix
// コード長 : 1491
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

  int n;
  cin >> n;

  int alpha[n][26] = {0};
  int i, j;
  string s;
  rep(i, n) {
    cin >> s;
    rep(j, s.length()) { alpha[i][s[j] - 'a']++; }
  }
  int ans = 0, tmp;
  string anss = "";
  for (i = 0; i < 26; i++) {
    tmp = INF;
    for (j = 0; j < n; j++) {
      tmp = min(tmp, alpha[j][i]);
    }
    rep(j, tmp) anss += 'a' + i;
  }
  fin(anss);

  //////////////////////////////////////////////////////
  return 0;
}
