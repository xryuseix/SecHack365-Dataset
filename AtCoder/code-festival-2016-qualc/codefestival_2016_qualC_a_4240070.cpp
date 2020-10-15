/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_a
A - CFEditorial
Time Limit : 1 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
このコンテストの名前はCODEFESTIVALで、いくつかの文字を消すとCFという文字列にすることが出来ます。好奇心旺盛な高橋君は、他の文字列に対してもこのようにCFを得られるか気になりました。英大文字アルファベットからなる文字列sが与えられるので、sからいくつかの文字を消してCFという文字列にすることが出来るか判定してください。
制約2≦|s|≦100sは英大文字(A-Z)のみからなる文字列である入力入力は以下の形式で標準入力から与えられる。s出力sからいくつかの文字を消してCFという文字列にすることが出来るならYesを、そうでないならNoを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-qualc/submissions/4240070
// 提出ID : 4240070
// 問題ID : codefestival_2016_qualC_a
// コンテストID : code-festival-2016-qualc
// ユーザID : xryuseix
// コード長 : 771
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
  int i, c = s.length(), f = s.length();
  for (i = 0; i < s.length(); i++) {
    if (s[i] == 'C') {
      c = i;
      break;
    }
  }
  for (i = c + 1; i < s.length(); i++) {
    if (s[i] == 'F') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
