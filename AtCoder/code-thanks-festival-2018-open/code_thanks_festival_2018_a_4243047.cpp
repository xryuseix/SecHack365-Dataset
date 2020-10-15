/*
問題文の引用元：https://atcoder.jp/contests/code-thanks-festival-2018-open/tasks/code_thanks_festival_2018_a
A - Two ProblemsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君は 2 つの問題から成る T
分のコンテストに参加することになりました。1 問目はちょうど A
分で解くことができ、 解くと B 点が得点に加算されます。2 問目はちょうど C
分で解くことができ、 解くと D 点が得点に加算されます。2 問目の方が 1
問目より難しいので、
配点は B \leq D
となっていますが、好きな順番で解くことができます。コンテストの開始や、1つの問題が解き終わると同時に次の問題を解き始めることができ、またコンテスト終了と同時に解き終わることも許されます。高橋君は最大何点取ることが出来るでしょうか。
制約1 \leq T,A,B,C,D \leq 10^9入力は全て整数である
入力入力は以下の形式で標準入力から与えられる。T A B C
D出力高橋君の取ることのできる最大の得点を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-thanks-festival-2018-open/submissions/4243047
// 提出ID : 4243047
// 問題ID : code_thanks_festival_2018_a
// コンテストID : code-thanks-festival-2018-open
// ユーザID : xryuseix
// コード長 : 734
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
#define ld long double
#define ll long long int
#define ull unsigned long long int
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t, a, b, c, d;
  cin >> t >> a >> b >> c >> d;
  if (a > t && c > t)
    cout << 0 << endl;
  else if (a + c <= t)
    cout << b + d << endl;
  else if (a <= t && c <= t)
    cout << d << endl;
  else if (a <= t && c > t)
    cout << b << endl;
  else if (a > t && c <= t)
    cout << d << endl;

  return 0;
}
