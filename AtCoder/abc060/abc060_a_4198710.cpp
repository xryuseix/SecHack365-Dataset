/*
問題文の引用元：https://atcoder.jp/contests/abc060/tasks/abc060_a
A - ShiritoriEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 文字列 A, B, C
が与えられます。これがしりとりになっているか判定してください。つまり、A
の最後の文字と B の最初の文字が同じB の最後の文字と C の最初の文字が同じこの 2
つが正しいか判定してください。両方とも正しいならば YES、そうでないならば NO
を出力してください。
制約A, B, C は全て英小文字(a ~ z)からなる。1 ≦ |A|, |B|, |C| ≦ 10なお、|A|, |B|,
|C| は文字列 A, B, C
の長さを表します。入力入力は以下の形式で標準入力から与えられる。A B C出力YES か
NO を出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/abc060/submissions/4198710
// 提出ID : 4198710
// 問題ID : abc060_a
// コンテストID : abc060
// ユーザID : xryuseix
// コード長 : 380
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
  if (a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
