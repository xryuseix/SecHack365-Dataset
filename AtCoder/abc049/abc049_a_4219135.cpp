/*
問題文の引用元：https://atcoder.jp/contests/abc049/tasks/abc049_a
A - UOIAUAIEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 英小文字 c が与えられるので、c
が母音であるか判定してください。ここで、英小文字のうち母音は a、e、i、o、uの 5
つです。
制約c は英小文字である。入力入力は以下の形式で標準入力から与えられる。c出力c
が母音であるとき、vowel と、そうでないとき consonant と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc049/submissions/4219135
// 提出ID : 4219135
// 問題ID : abc049_a
// コンテストID : abc049
// ユーザID : xryuseix
// コード長 : 374
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
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  char c;
  cin >> c;
  if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
    cout << "vowel" << endl;
  else
    cout << "consonant" << endl;

  return 0;
}
