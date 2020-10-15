/*
問題文の引用元：https://atcoder.jp/contests/abc057/tasks/abc057_a
A - Remaining TimeEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
イルカはプログラミングコンテスト好きで、今日はAtCoderのコンテストに参加します。現在時刻は、24
時間表記 (0:00〜23:59) で A 時ちょうどであり、コンテストがちょうど B
時間後に始まります。 コンテストの開始時刻は、24
時間表記で何時ちょうどでしょうか?
制約0≦A,B≦23A,B は整数である。入力入力は以下の形式で標準入力から与えられる。A
B出力コンテストの開始時刻を 24 時間表記で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc057/submissions/4226915
// 提出ID : 4226915
// 問題ID : abc057_a
// コンテストID : abc057
// ユーザID : xryuseix
// コード長 : 296
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

  int a, b;
  cin >> a >> b;
  cout << (a + b) % 24 << endl;

  return 0;
}
