/*
問題文の引用元：https://atcoder.jp/contests/agc030/tasks/agc030_a
A - Poisonous CookiesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は、解毒剤入りの美味しくないクッキーを A
枚、解毒剤入りの美味しいクッキーを B 枚、毒入りの美味しいクッキーを C
枚持っています。高橋君は、毒入りのクッキーを食べるとお腹を壊し、お腹を壊した状態で毒入りのクッキーを食べると死んでしまいます。高橋君は死にたくないので、お腹を壊した状態で毒入りのクッキーを食べることはできません。お腹を壊した状態で解毒剤入りのクッキーを食べると、お腹の調子が治ります。解毒剤入りのクッキーを食べる以外に、お腹の調子を治す方法はありません。高橋君が食べることのできる美味しいクッキーの枚数の最大値を求めてください。
制約0 \leq A,B,C \leq 10^9A,B,C
は整数である入力入力は以下の形式で標準入力から与えられる。A B
C出力高橋君が食べることのできる美味しいクッキーの枚数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc030/submissions/4010378
// 提出ID : 4010378
// 問題ID : agc030_a
// コンテストID : agc030
// ユーザID : xryuseix
// コード長 : 217
// 実行時間 : 1



*/
#include <iostream>
using namespace std;
int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b > c) {
    cout << b + c << endl;
  } else if (a + b == c) {
    cout << b + c << endl;
  } else {
    cout << a + b + 1 + b << endl;
  }
  return 0;
}
