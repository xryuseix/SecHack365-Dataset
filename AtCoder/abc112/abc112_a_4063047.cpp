/*
問題文の引用元：https://atcoder.jp/contests/abc112/tasks/abc112_a
A - Programming EducationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : 2020 年, AtCoder 社は年商 10 億円を超え,
プログラミング教育にも手を出すようになった.ある日行われたテストでは, 1 才児は
Hello World を出力するプログラムを, 2 才児は整数 A, B を入力して A+B
を出力するプログラムを書かなければならない.高橋君はこのテストを受けているが,
突然自分が何才なのかが分からなくなってしまった.そこで, 最初に自分の年齢 N (N は
1 または 2) を入力し, N=1 ならば Hello World と出力し, N=2 ならば A, B
を入力して A+B を出力するプログラムを作ることにした.高橋君に代わって,
このようなプログラムを作りなさい.
制約N は 1 または 2A は 1 以上 9 以下の整数B は 1 以上 9
以下の整数入力入力は以下の 2 つのうちいずれかの形式で標準入力から与えられる.
12AB出力N=1 のとき, Hello World と出力し, N=2 のとき, A+B を出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc112/submissions/4063047
// 提出ID : 4063047
// 問題ID : abc112_a
// コンテストID : abc112
// ユーザID : xryuseix
// コード長 : 208
// 実行時間 : 1



*/
#include <iostream>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "Hello World" << endl;
  } else {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
  }
  return 0;
}
