/*
問題文の引用元：https://atcoder.jp/contests/abc010/tasks/abc010_1
A - ハンドルネームEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君の秘書のなぎさちゃんは、高橋君からハンドルネームを貰いました。
しかし、残念なことに、このハンドルネームは、既に登録しようとしたサービスで使われてしまっていました。
仕方がないので、なぎさちゃんが好きなC++に肖って、ハンドルネームの末尾にppを付けることにしました。
元のハンドルネームが入力されるので、新しいハンドルネームを出力してください。
入力                入力は以下の形式で標準入力から与えられる。S
1 行目には、元のハンドルネーム S (1 ≦ |S| ≦ 10) が与えられる。
S に含まれる文字は、全て小文字アルファベットであることが保障されている。
出力                新しいハンドルネームを 1
行で出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc010/submissions/4887317
// 提出ID : 4887317
// 問題ID : abc010_1
// コンテストID : abc010
// ユーザID : xryuseix
// コード長 : 247
// 実行時間 : 1



*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main(void) {
  // Your code here!

  string x, y;
  cin >> x;
  cout << x << "pp" << endl;

  return 0;
}
