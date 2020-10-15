/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_a
A - XXFESTIVALEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : りんごさんは、とある祭りに参加しようとしています。その祭りの名称が
FESTIVAL で終わる文字列 S
として入力に与えられるので、りんごさんが何の祭りに参加しようしているのかを出力して下さい。ただし、s
の祭りの名称は s の末尾に FESTIVAL を 1
つだけ追加した文字列であるとします。例えば CODEFESTIVAL は CODE の祭りです。
制約9 \leq |S| \leq 50S は大文字アルファベットのみからなるS は FESTIVAL
で終わる入力入力は以下の形式で標準入力から与えられる。S出力りんごさんが何の祭りに参加しようしているのかを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2017-qualb/submissions/4242251
// 提出ID : 4242251
// 問題ID : code_festival_2017_qualb_a
// コンテストID : code-festival-2017-qualb
// ユーザID : xryuseix
// コード長 : 591
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

  string s;
  cin >> s;
  cout << s.substr(0, s.length() - 8) << endl;

  return 0;
}
