/*
問題文の引用元：https://atcoder.jp/contests/abc104/tasks/abc104_a
A - Rated for MeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : プログラミングコンペティションサイト AtCode
は、プログラミングコンテストを定期的に開催しています。AtCode
で次に開催されるコンテストは ABC と呼ばれ、レーティングが 1200
未満の参加者のレーティングが変動します。その次に開催されるコンテストは ARC
と呼ばれ、レーティングが 2800
未満の参加者のレーティングが変動します。そのさらに次に開催されるコンテストは AGC
と呼ばれ、すべての参加者のレーティングが変動します。高橋くんの AtCode
でのレーティングは R
です。彼のレーティングが変動する次のコンテストは何でしょうか？
制約0 ≤ R ≤ 4208R
は整数である。入力入力は以下の形式で標準入力から与えられる。R出力高橋くんのレーティングが変動する次のコンテストの名称（ABC,
ARC, AGC のいずれか）を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc104/submissions/4032211
// 提出ID : 4032211
// 問題ID : abc104_a
// コンテストID : abc104
// ユーザID : xryuseix
// コード長 : 228
// 実行時間 : 1



*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(void) {

  int r;
  cin >> r;
  if (r < 1200)
    cout << "ABC" << endl;
  else if (r < 2800)
    cout << "ARC" << endl;
  else
    cout << "AGC" << endl;

  return 0;
}
