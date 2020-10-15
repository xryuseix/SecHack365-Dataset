/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2018-qualb/tasks/code_festival_2018_qualb_a
A - Probability of ParticipationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : E869120 君は, CODE FESTIVAL 予選に参加するか迷った. 迷いに迷った末,
彼は「魔法のサイコロ」で参加するかどうかを決めることにした.魔法のサイコロは, 1
以上 100 以下の整数が等確率で出るように設計されている.彼はサイコロを 1 回振り,
出た整数が N の倍数であればコンテストに参加しない. そうでない場合,
彼はコンテストに参加する.彼がコンテストに参加する確率は何パーセントか？
制約N は 1 以上 100 以下の整数入力入力は以下の形式で標準入力から与えられる.
N出力E869120 君が CODE FESTIVAL 予選に参加する確率は何パーセントか,
整数で出力しなさい.
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2018-qualb/submissions/4262100
// 提出ID : 4262100
// 問題ID : code_festival_2018_qualb_a
// コンテストID : code-festival-2018-qualb
// ユーザID : xryuseix
// コード長 : 587
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
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
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, a, b, c;
  cin >> a;
  cout << 100 - int(100 / a) << endl;

  return 0;
}
