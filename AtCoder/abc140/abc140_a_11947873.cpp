/*
問題文の引用元：https://atcoder.jp/contests/abc140/tasks/abc140_a
A - PasswordEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君は 3 桁のパスワードを設定しようとしています。使える文字が 1 以上
N
以下の数字のみであるとき、設定できるパスワードが全部で何種類であるかを答えてください。
制約1 ≤ N ≤ 9N
は整数である。入力入力は以下の形式で標準入力から与えられる。N出力設定できるパスワードが何種類であるかを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc140/submissions/11947873
// 提出ID : 11947873
// 問題ID : abc140_a
// コンテストID : abc140
// ユーザID : xryuseix
// コード長 : 100
// 実行時間 : 1



*/
#include <iostream>
int main(void) {
  int n;
  std::cin >> n;
  std::cout << n *n *n << std::endl;
}