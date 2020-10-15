/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2018-quala/tasks/code_festival_2018_quala_a
A -
配点Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : あなたはあるコンテストのために問題を 3
問作りました。検討の結果、これらの問題の
配点は以下のようにすることになりました。1 問目の
配点は A 点または A + 1 点にする。2 問目の
配点は B 点または B + 1 点にする。3 問目の
配点は C 点または C + 1 点にする。3 問の
配点の合計をちょうど S 点にすることができるかどうか判定してください。
制約1 \leq A, B, C \leq 201 \leq S \leq
60入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。ABCS出力3
問の
配点の合計をちょうど S 点にすることができるならば Yes と、できないならば No
と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2018-quala/submissions/4242978
// 提出ID : 4242978
// 問題ID : code_festival_2018_quala_a
// コンテストID : code-festival-2018-quala
// ユーザID : xryuseix
// コード長 : 630
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

  int a, b, c, s;
  cin >> a >> b >> c >> s;
  if (a + b + c <= s && a + b + c + 3 >= s)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
