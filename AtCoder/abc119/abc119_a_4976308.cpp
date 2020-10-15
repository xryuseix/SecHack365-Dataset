/*
問題文の引用元：https://atcoder.jp/contests/abc119/tasks/abc119_a
A - Still TBDEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 文字列 S が入力されます。これは、西暦 2019 年の実在する日付を
yyyy/mm/dd の形式で表したものです。(例えば、2019 年 4 月 30 日は 2019/04/30
と表されます。)S が表す日付が 2019 年 4 月 30 日またはそれ以前なら
Heisei、そうでなければ TBD と出力するプログラムを書いてください。
制約S は西暦 2019 年の実在する日付を yyyy/mm/dd
の形式で表す文字列である。入力入力は以下の形式で標準入力から与えられる。S出力S
が表す日付が 2019 年 4 月 30 日またはそれ以前なら Heisei、そうでなければ TBD
と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc119/submissions/4976308
// 提出ID : 4976308
// 問題ID : abc119_a
// コンテストID : abc119
// ユーザID : xryuseix
// コード長 : 949
// 実行時間 : 1



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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  int y, m, d;
  y = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 +
      (s[3] - '0');
  m = (s[5] - '0') * 10 + s[6] - '0';
  d = (s[8] - '0') * 10 + (s[9] - '0');
  if (y < 2019)
    cout << "Heisei" << endl;
  else if (y > 2019)
    cout << "TBD" << endl;
  else if (m <= 4)
    cout << "Heisei" << endl;
  else if (m > 4)
    cout << "TBD" << endl;
  //	else if(d==30||d==31)cout<<"Heisei"<<endl;
  //	else cout<<"TBD"<<endl;

  return 0;
}
