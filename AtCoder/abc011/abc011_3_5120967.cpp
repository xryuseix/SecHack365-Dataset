/*
問題文の引用元：https://atcoder.jp/contests/abc011/tasks/abc011_3
C - 123引き算Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : あなたは、友人から、一人用のゲームを紹介されました。最初に、数字 N
が与えられます。1 , 2 , 3
の中から好きな数字を選び、与えられた数字に対し、引き算を行う、という処理を行うことできます。この処理は
100 回まで行うことが可能であり、最終的に数字を 0
にすることが目標のゲームです。しかし、計算途中でなってはいけないNG数字が 3
つ与えられており、この数字に一時的にでもなってしまった瞬間、このゲームは失敗となります。NG数字が
N と同じ場合も失敗となります。NG数字が N
と同じ場合について、正しい判定が行われていませんでした。リジャッジを行いました。あなたは、このゲームが、目標達成可能なゲームとなっているか調べたいです。目標達成可能な場合はYES、そうでない場合はNOと出力してください。入力入力は以下の形式で標準入力から与えられる。NNG_1NG_2NG_31
行目には、最初に与えられる数字 N (1 ≦ N ≦ 300) が与えられる。2 行目には、 1
番目のNG数字 NG_1 (1 ≦ NG_1 ≦ 300) が与えられる。3 行目には、 2 番目のNG数字
NG_2 (1 ≦ NG_2 ≦ 300) が与えられる。4 行目には、 3 番目のNG数字 NG_3 (1 ≦ NG_3 ≦
300) が与えられる。出力目標達成可能な場合はYES、そうでない場合はNOを 1
行で出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc011/submissions/5120967
// 提出ID : 5120967
// 問題ID : abc011_3
// コンテストID : abc011
// ユーザID : xryuseix
// コード長 : 1398
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

  int i, n, ng[3], j, k;
  cin >> n >> ng[0] >> ng[1] >> ng[2];
  sort(ng, ng + 3);

  int dp[301];
  rep(i, 301) dp[i] = INF;
  dp[n] = 0;
  for (i = n; i > 0; i--) {
    if (i == ng[0] || i == ng[1] || i == ng[2])
      continue;
    for (j = 1; j <= 3; j++) {
      if (i - j >= 0 && i - j != ng[0] && i - j != ng[1] && i - j != ng[2]) {
        chmin(dp[i - j], dp[i] + 1);
      }
    }
  }
  if (dp[0] > 100 || dp[0] < 0)
    fin("NO");
  else
    fin("YES");

  //	rep(j,n+1)cout<<dp[j]<<" ";

  //////////////////////////////////////////////////////
  return 0;
}
