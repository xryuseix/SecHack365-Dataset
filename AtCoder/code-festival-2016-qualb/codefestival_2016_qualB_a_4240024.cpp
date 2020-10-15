/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_a
A - SignboardEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : CODE FESTIVAL 2016が開催されます。開催にあたって、高橋君はCODE FESTIVAL
2016の看板を作ることにしました。看板にはCODEFESTIVAL2016と書きたかったのですが、高橋君は間違えて異なる文字列Sを書いてしまいました。幸い、書いた文字列の長さは間違っていませんでした。そこで高橋君は、ある文字を別の文字に書き換えるという操作を最小の回数行って、この文字列をCODEFESTIVAL2016に書き換えることにしました。書き換えの回数の最小値を求めてください。
制約Sの長さは16である。S
は英大文字、英小文字、数字からなる。入力入力は以下の形式で標準入力から与えられる。S出力書き換えの回数の最小値を表す整数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-qualb/submissions/4240024
// 提出ID : 4240024
// 問題ID : codefestival_2016_qualB_a
// コンテストID : code-festival-2016-qualb
// ユーザID : xryuseix
// コード長 : 643
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

  string s, a = "CODEFESTIVAL2016";
  cin >> s;
  int i, ans = 0;
  for (i = 0; i < 16; i++)
    if (a[i] != s[i])
      ans++;
  cout << ans << endl;

  return 0;
}
