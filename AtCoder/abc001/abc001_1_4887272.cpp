/*
問題文の引用元：https://atcoder.jp/contests/abc001/tasks/abc001_1
A - 積雪深差Editorial
Time Limit : 2 sec / Memory Limit : 64
MB注意この問題は古い問題です。過去問練習をする場合は、新しいAtCoder Beginner
Contestから取り組むことをお勧めしています。
問題文 : ある時刻の積雪深 H_1 と その 1 時間前の積雪深 H_2
が与えられます。この時、この 1 時間の積雪深差 H_1 - H_2
の値を計算して出力してください。A問題では、提出した結果、全てのテストに対する判定がWAまたはREになってしまった場合のみ、質問タブにて可能な限りのトラブルシューティングを受け付けます。提出結果のURLを添えて、お気軽にご質問ください。また、ページ下部、「よくある質問」も、併せてご活用ください。入力入力は以下の形式で標準入力から与えられる。H_1H_21
行目には、整数で、ある時刻の積雪深 H_1\ (0≦H_1≦2,000) が与えられる。2
行目には、整数で、1 時間前の積雪深 H_2\ (0≦H_2≦2,000) が与えられる。出力積雪深差
H_1 - H_2 の値を 1 行で出力せよ。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc001/submissions/4887272
// 提出ID : 4887272
// 問題ID : abc001_1
// コンテストID : abc001
// ユーザID : xryuseix
// コード長 : 267
// 実行時間 : 1



*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main(void) {
  // Your code here!

  int h, j;
  cin >> h >> j;
  cout << h - j << endl;

  return 0;
}
