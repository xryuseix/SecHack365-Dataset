/*
問題文の引用元：https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_e
E - 放課後Editorial
Time Limit : 1 sec / Memory Limit : 256 MB
配点: 300 点この問題の解説はこちら。
問題文 :
※きたむーとはこの問題の作問のお手伝いをした人の名前である。また、きたむーの彼女はいろはちゃんではない。きたむーは高校の競技プログラミング部に所属し、放課後も熱心にプログラミングに取り組んでいた。しかし最近、きたむーには彼女ができたようだ。デートがしたい！　デートがしたい！　デートがしたい！デートに着実に蝕まれていくプログラミング学習の時間。このままではきたむーのレートが落ちてしまうことに危機感を覚えたあなたは、彼の放課後のスケジュールを管理してあげることにした。あなたは以下の点に配慮して明日以降の
N
日分のスケジュールを立てることにした。きたむーそれぞれの日の放課後に「デート」「競プロ」のうちいずれか片方の行動をとる。きたむーは
A 日以上デートできないと、愛が足りずに動けなくなってしまうので、 A
日に一度は必ずデートする。このカップルには明日から N 日以内に B
回の記念日があり、それぞれ D_1,D_2,\cdots,D_B
日後である。この日には必ずデートを行う。 D_i
は互いに異なる。なお、きたむーは今日デートしており、彼の高校に休日はないものとする。あなたはきたむーが競プロに取り組む日数を最大化したい。
制約入力される値はすべて整数である1 \leq N \leq 10^{18}1 \leq A \leq N0 \leq B
\leq min(N,2 \times 10^5)1 \leq D_i \leq N (1 \leq i \leq B)D_i \neq D_j (1 \leq
i,j \leq B かつ i \neq
j)入力はすべて整数入力入力は以下の形式で標準入力から与えられる。N A BD_1 D_2
\cdots
D_B出力きたむーにプログラミング学習をさせることができる日数の最大値を1行で出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/iroha2019-day1/submissions/5207243
// 提出ID : 5207243
// 問題ID : iroha2019_day1_e
// コンテストID : iroha2019-day1
// ユーザID : xryuseix
// コード長 : 1300
// 実行時間 : 39



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

  ll n, a, b, i;
  cin >> n >> a >> b;
  ll d[b + 2];
  rep(i, b) cin >> d[i];
  d[b] = 0;
  d[b + 1] = n + 1;
  sort(d, d + b + 2);
  ll ans = 0;
  //	if(b>0)ans+=d[0]-1;
  //	fin(ans);
  for (i = 0; i < b + 1; i++) {
    ans += (d[i + 1] - d[i] - 1) - (d[i + 1] - d[i] - 1) / a;
  }
  //	cout<<ans<<endl;
  //	if(b>0)ans+=(n-d[b-1])-(n-d[b-1])/a;
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
