/*
問題文の引用元：https://atcoder.jp/contests/abc114/tasks/abc114_b
B - 754Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 数字 1, 2, ..., 9 からなる文字列 S
があります。ダックスフンドのルンルンは、S から連続する 3 個の数字を取り出し、1
つの整数 X
としてご主人様の元に持っていきます。（数字の順番を変えることはできません。）ご主人様が大好きな数は
753 で、これに近い数ほど好きです。X と 753
の差（の絶対値）は最小でいくつになるでしょうか？
制約S は長さ 4 以上 10 以下の文字列である。S の各文字は 1, 2, ..., 9
のいずれかである。入力入力は以下の形式で標準入力から与えられる。S出力X と 753
の差としてありうる最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc114/submissions/4027476
// 提出ID : 4027476
// 問題ID : abc114_b
// コンテストID : abc114
// ユーザID : xryuseix
// コード長 : 327
// 実行時間 : 1



*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void) {

  string s;
  int min = 10000000;
  cin >> s;
  for (int i = 0; i < s.length() - 2; i++) {
    int num =
        int(s[i] - '0') * 100 + int(s[i + 1] - '0') * 10 + int(s[i + 2] - '0');
    if (abs(num - 753) < min) {
      min = abs(num - 753);
    }
  }
  cout << min << endl;
  return 0;
}
