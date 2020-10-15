/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2018-beginner/tasks/tenka1_2018_a
A - MeasureEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 英小文字からなる長さ 2 または 3 の文字列 S が与えられます。長さが 2
の場合はそのまま、長さが 3 の場合は逆順にして出力してください。
制約S の長さは 2 または 3 であるS
は英小文字からなる入力入力は以下の形式で標準入力から与えられる。S出力S の長さが
2 の場合はそのまま、長さが 3 の場合は逆順にして出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2018-beginner/submissions/4093278
// 提出ID : 4093278
// 問題ID : tenka1_2018_a
// コンテストID : tenka1-2018-beginner
// ユーザID : xryuseix
// コード長 : 269
// 実行時間 : 11



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main(void) {

  string s;
  cin >> s;
  if (s.length() == 2) {
    cout << s << endl;
  } else {
    cout << s[2] << s[1] << s[0] << endl;
  }

  return 0;
}
