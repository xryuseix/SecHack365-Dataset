/*
問題文の引用元：https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_b
B - SumoEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB  var hostname = location.host;  var
taskname = location.pathname.split('/')[2];  if( hostname ==
"m-solutions2019.contest.atcoder.jp" ){  location.href =
"https://atcoder.jp/contests/m-solutions2019/tasks/"+taskname;  }
配点 : 200 点
問題文 : 高橋君は相撲の大会に参加しています。大会は 15 日間行われ、高橋君は 1 日
1 番の取組を行います。また、高橋君は 8 番以上勝つと次の大会にも参加できます。k
日目までの取組が終了しました。高橋君の取組の結果が o, x からなる長さ k の文字列
S で与えられます。 S の i 文字目が o ならば高橋君が i 日目の取組で勝ったことを、
x
ならば負けたことをそれぞれ表します。高橋君が次の大会にも参加できる可能性があるならば
YES を、そのような可能性がないならば NO を出力してください。
制約1 \leq k \leq 15S は o, x からなる長さ k
の文字列である入力入力は以下の形式で標準入力から与えられる。S出力高橋君が次の大会にも参加できる可能性があるならば
YES と出力せよ。そのような可能性がないならば NO と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/m-solutions2019/submissions/5725439
// 提出ID : 5725439
// 問題ID : m_solutions2019_b
// コンテストID : m-solutions2019
// ユーザID : xryuseix
// コード長 : 1334
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
//|_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i;
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.length()) {
    if (s[i] == 'x')
      ans++;
  }
  if (ans > 7)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
