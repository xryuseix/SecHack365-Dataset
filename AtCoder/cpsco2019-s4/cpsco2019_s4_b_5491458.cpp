/*
問題文の引用元：https://atcoder.jp/contests/cpsco2019-s4/tasks/cpsco2019_s4_b
B - MeetingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : A社のあるプロジェクトチームにはリーダーと社員 1, 2, \ldots , N の合計
N+1 人が属しています。D 日間のうち、リーダーは毎日出勤します。1, 2, \ldots , D
日目についての、リーダー以外の各社員の出勤予定はそれぞれ長さ N の文字列 S_1,
S_2, \ldots , S_D で与えられます。i 日目に社員 j (1 \leq j \leq N)
が出勤する場合 S_i の j 文字目は o であり、出勤しない場合 x
です。リーダーは、ある重要事項を他の社員たちに伝達するため、D 日間のうち 2
日を選んで会議を行おうとしています。各社員は、その社員の出社日のみ会議に参加することができます。重要事項ははじめリーダーのみが知っており、他の社員は会議に参加すると知ることができます。リーダー以外の
N 人のうち、最大で何人の社員に重要事項を伝達できるか求めてください。
制約1 \leq N \leq 102 \leq D \leq 10N, D は整数である。S_i は長さ N
の文字列である。S_i の各文字は o または x
である。入力入力は以下の形式で標準入力から与えられる。N DS_1S_2:S_D出力D
日間のうち 2 日選んで会議を行ったとき、リーダー以外の N
人のうち最大何人の社員に重要事項を伝達できるかを、1 行に出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/cpsco2019-s4/submissions/5491458
// 提出ID : 5491458
// 問題ID : cpsco2019_s4_b
// コンテストID : cpsco2019-s4
// ユーザID : xryuseix
// コード長 : 1428
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

  int i, n, d;
  cin >> n >> d;
  string s[d];
  rep(i, d) cin >> s[i];
  int j, ans = 0, k, t;

  for (i = 0; i < d - 1; i++) {
    for (j = i + 1; j < d; j++) {
      t = 0;
      for (k = 0; k < s[i].length(); k++) {
        if (s[i][k] == 'o' || s[j][k] == 'o')
          t++;
      }

      ans = max(ans, t);
    }
  }

  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
