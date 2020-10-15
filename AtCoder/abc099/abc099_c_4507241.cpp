/*
問題文の引用元：https://atcoder.jp/contests/abc099/tasks/abc099_c
C - Strange BankEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
ある銀行では、お金の引き出しを難しくするために、一回の操作で引き出せる金額が以下のいずれかとなっています。1
円6 円、6^2(=36) 円、6^3(=216) 円、...9 円、9^2(=81) 円、9^3(=729)
円、...この銀行からちょうど N
円を引き出すには少なくとも何回の操作が必要か求めてください。ただし、一度引き出したお金を再び預け入れてはならないとします。
制約1 \leq N \leq 100000N
は整数入力入力は以下の形式で標準入力から与えられる。N出力この銀行からちょうど N
円を引き出すのに少なくとも x 回の操作が必要な時、x を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc099/submissions/4507241
// 提出ID : 4507241
// 問題ID : abc099_c
// コンテストID : abc099
// ユーザID : xryuseix
// コード長 : 1020
// 実行時間 : 3



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#include <stack>
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
#define INF INT_MAX;
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

  int dp[100010];
  dp[0] = 0;
  int i, n, power;
  cin >> n;
  for (i = 1; i <= 100000; i++) {
    power = 1;
    dp[i] = INF;
    while (power <= i) {
      //			cout<<i<<" "<<dp[i]<<" "<<dp[i-power]+1<<endl;
      dp[i] = min(dp[i], dp[i - power] + 1);
      power *= 6;
    }
    power = 1;
    while (power <= i) {
      dp[i] = min(dp[i], dp[i - power] + 1);
      power *= 9;
    }
  }
  //	for(i=1;i<=127;i++)cout<<dp[i]<<endl;
  cout << dp[n] << endl;
  return 0;
}
