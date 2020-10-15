/*
問題文の引用元：https://atcoder.jp/contests/abc043/tasks/abc043_b
B - Unhappy Hacking (ABC Edit)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :
しぐはキーボードを製作しました。シンプルさを極限まで追求したこのキーボードには、0
キー、1 キー、バックスペースキーの 3
つしかキーがありません。手始めに、しぐはこのキーボードで簡単なテキストエディタを操作してみることにしました。このエディタには常に一つの文字列が表示されます（文字列が空のこともあります）。エディタを起動した直後では、文字列は空です。キーボードの各キーを押すと、文字列が次のように変化します。0
キー: 文字列の右端に文字 0 が挿入される。1 キー: 文字列の右端に文字 1
が挿入される。バックスペースキー:
文字列が空なら、何も起こらない。そうでなければ、文字列の右端の 1
文字が削除される。しぐはエディタを起動し、これらのキーを何回か押しました。しぐが押したキーを順番に記録した文字列
s が与えられます。s の中の文字 0 は 0 キー、文字 1 は 1 キー、文字 B
はバックスペースキーを表します。いま、エディタの画面にはどのような文字列が表示されているでしょうか？
制約1 ≦ |s| ≦ 10 (|s| は s の長さを表す)s は文字 0, 1, B
のみからなる。正解は空文字列ではない。入力入力は以下の形式で標準入力から与えられる。s出力最終的にエディタに表示されている文字列を出力せよ。（「
制約」セクションで述べたように、この文字列が空になるような入力は与えられない）
// ソースコードの引用元 : https://atcoder.jp/contests/abc043/submissions/4242749
// 提出ID : 4242749
// 問題ID : abc043_b
// コンテストID : abc043
// ユーザID : xryuseix
// コード長 : 737
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

  string s, ans = "";
  cin >> s;
  int i;
  for (i = 0; i < s.length(); i++) {
    if (s[i] == 'B') {
      if (ans.length() > 0)
        ans = ans.substr(0, ans.length() - 1);
    } else
      ans += s[i];
    //		cout<<ans<<endl;
  }
  cout << ans << endl;

  return 0;
}
