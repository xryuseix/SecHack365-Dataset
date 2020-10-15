/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_a
A - CODEFESTIVAL 2016Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : このコンテストの名前は CODE FESTIVAL です。しかし、高橋君はいつも
CODEFESTIVAL と書き間違えてしまいます。つまり、CODE と FESTIVAL
の間の半角スペースを省いてしまいます。そこで高橋君は、省いてしまった半角スペースを復元するプログラムを作ることにしました。長さ
12 の文字列 s が与えられます。s の前半 4 文字と後半 8 文字の間に半角スペースを 1
つ挿入し、出力してください。
制約s は長さ 12 である。s
は英大文字のみからなる。入力入力は以下の形式で標準入力から与えられる。s出力s
の前半 4 文字と後半 8 文字の間に半角スペースを 1
つ挿入し、出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-quala/submissions/4240013
// 提出ID : 4240013
// 問題ID : codefestival_2016_qualA_a
// コンテストID : code-festival-2016-quala
// ユーザID : xryuseix
// コード長 : 584
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

  string s;
  cin >> s;
  s.insert(4, " ");
  cout << s << endl;

  return 0;
}
