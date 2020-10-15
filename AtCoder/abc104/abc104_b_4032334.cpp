/*
問題文の引用元：https://atcoder.jp/contests/abc104/tasks/abc104_b
B - AcCeptedEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 文字列 S が与えられます。S
のそれぞれの文字は英大文字または英小文字です。S
が次の条件すべてを満たすか判定してください。S の先頭の文字は大文字の A である。S
の先頭から 3 文字目と末尾から 2 文字目の間（両端含む）に大文字の C がちょうど 1
個含まれる。以上の A, C を除く S のすべての文字は小文字である。
制約4 ≤ |S| ≤ 10 （|S| は文字列 S の長さ）S
のそれぞれの文字は英大文字または英小文字である。入力入力は以下の形式で標準入力から与えられる。S出力S
が
問題文 : 中の条件すべてを満たすなら AC、そうでなければ WA と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc104/submissions/4032334
// 提出ID : 4032334
// 問題ID : abc104_b
// コンテストID : abc104
// ユーザID : xryuseix
// コード長 : 487
// 実行時間 : 19



*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(void) {

  string s;
  int i, cnum = 0, check = 0;
  cin >> s;
  if (s[0] == 'A')
    check++;
  else {
    cout << "WA" << endl;
    return 0;
  }
  for (i = 2; i < s.length() - 1; i++) {
    if (s[i] == 'C')
      cnum++;
  }
  if (cnum == 1)
    check++;
  else {
    cout << "WA" << endl;
    return 0;
  }
  for (i = 1; i < s.length(); i++) {
    if ((s[i] < 'a' || s[i] > 'z') && s[i] != 'C') {
      cout << "WA" << endl;
      return 0;
    }
  }
  cout << "AC" << endl;
  return 0;
}