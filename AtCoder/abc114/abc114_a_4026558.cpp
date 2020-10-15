/*
問題文の引用元：https://atcoder.jp/contests/abc114/tasks/abc114_a
A - 753Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 七五三とは、7 歳、5 歳そして 3
歳の子どもの成長を祝うとある国の行事です。いま、高橋くんは X
歳です。今回の七五三で、高橋くんの成長は祝われるでしょうか？
制約1 ≤ X ≤ 9X
は整数である。入力入力は以下の形式で標準入力から与えられる。X出力高橋くんの成長が祝われるなら
YES, 祝われないなら NO と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc114/submissions/4026558
// 提出ID : 4026558
// 問題ID : abc114_a
// コンテストID : abc114
// ユーザID : xryuseix
// コード長 : 144
// 実行時間 : 1



*/
#include <iostream>

int main(void) {
  int i;
  std::cin >> i;
  if (i == 7 || i == 3 || i == 5)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
  return 0;
}
