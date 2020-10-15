/*
問題文の引用元：https://atcoder.jp/contests/abc070/tasks/abc070_a
A - Palindromic NumberEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 3 桁の正の整数 N が与えられます。N が
回文数であるかを判定してください。  回文数とは、10
進法において数字を逆から並べても元の数と同じになる数のことを表します。
制約100≦N≦999  N は整数入力入力は以下の形式で標準入力から与えられる。  N出力N
が回文数である場合は Yes、そうでない場合は No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc070/submissions/4202101
// 提出ID : 4202101
// 問題ID : abc070_a
// コンテストID : abc070
// ユーザID : xryuseix
// コード長 : 333
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

  string s;
  cin >> s;
  if (s[0] == s[2])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
