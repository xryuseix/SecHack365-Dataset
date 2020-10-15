/*
問題文の引用元：https://atcoder.jp/contests/abc048/tasks/abc048_a
A - AtCoder *** ContestEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すぬけ君は、AtCoder s Contest
という名前のコンテストを開こうとしています。ここで、s は長さ 1
以上の文字列であり、1 文字目は英大文字、2
文字目以降は英小文字です。すぬけ君は、このコンテストの略称を AxC
に決めました。ここで、x は s
の先頭の英大文字です。コンテストの名前が与えられるので、コンテストの略称を出力してください。
制約s の長さは 1 以上 100 以下である。s の 1 文字目は英大文字である。s の 2
文字目以降は英小文字である。入力入力は以下の形式で標準入力から与えられる。AtCoder
s Contest出力コンテストの略称を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc048/submissions/4203342
// 提出ID : 4203342
// 問題ID : abc048_a
// コンテストID : abc048
// ユーザID : xryuseix
// コード長 : 312
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

  string a, b, c;
  cin >> a >> b >> c;
  cout << a[0] << b[0] << c[0] << endl;

  return 0;
}
