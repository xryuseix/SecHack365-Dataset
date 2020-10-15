/*
問題文の引用元：https://atcoder.jp/contests/abc058/tasks/abc058_b
B - ∵∴∵Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :
すぬけ君は新しくできたプログラミングコンテストに会員登録しました。登録に使ったパスワードを覚えておく自信が無かったすぬけ君は、手元の紙にパスワードをメモしておくことにしました。ただし、そのままメモをすると誰かにパスワードを盗まれてしまうかもしれないので、文字列の偶数番目の文字と奇数番目の文字をそれぞれ別々の紙にメモしておくことにしました。パスワードの奇数番目の文字だけを順番を変えずに取り出した文字列
O と、偶数番目の文字だけを順番を変えずに取り出した文字列 E
が与えられます。すぬけ君のかわりにパスワードを復元してください。
制約O, E は小文字のアルファベット( a - z )からなる文字列1 \leq |O|,|E| \leq
50|O| - |E| は 0 または 1
である。入力入力は以下の形式で標準入力から与えられる。OE出力パスワードを1行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc058/submissions/4242340
// 提出ID : 4242340
// 問題ID : abc058_b
// コンテストID : abc058
// ユーザID : xryuseix
// コード長 : 725
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

  string s, t;
  cin >> s >> t;
  int i;
  for (i = 0; i < s.length(); i++) {
    if (i != s.length() - 1)
      cout << s[i] << t[i];
    else if (s.length() != t.length())
      cout << s[i];
    else
      cout << s[i] << t[i];
  }
  cout << endl;

  return 0;
}
