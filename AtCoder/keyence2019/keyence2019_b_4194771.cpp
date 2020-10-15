/*
問題文の引用元：https://atcoder.jp/contests/keyence2019/tasks/keyence2019_b
B - KEYENCE StringEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 連続した部分文字列 (空でも良い) を 1 度だけ取り除くことで keyence
に変換することができる文字列をキーエンス型文字列と呼ぶことにします．英小文字のみから成る文字列
S が与えられるので，S がキーエンス型文字列かどうか判定してください．
制約S の長さは 7 以上 100 以下S
は英小文字のみから成る入力入力は以下の形式で標準入力から与えられる．S出力S
がキーエンス型文字列なら YES を，そうでないなら NO を出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/keyence2019/submissions/4194771
// 提出ID : 4194771
// 問題ID : keyence2019_b
// コンテストID : keyence2019
// ユーザID : xryuseix
// コード長 : 389
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  int i;
  cin >> s;
  for (i = 0; i < 7; i++) {
    if (s.substr(0, i) + s.substr(s.length() - 7 + i) == "keyence") {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
