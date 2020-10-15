/*
問題文の引用元：https://atcoder.jp/contests/abc028/tasks/abc028_a
A - テスト評価Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
テストの点数を入れるとその評価を出力してくれるプログラムを作成してください。プログラムの仕様は以下の通りです。テストの点数として
0 以上 100 以下の整数を受け取る。テストの点数が 59 点以下ならば Bad と出力。60
点以上 89 点以下ならば Good と出力。90 点以上 99 点以下ならば Great と出力。100
点ならば Perfect と出力。入力入力は以下の形式で標準入力から与えられる。N1
行に整数 N(0 ≦ N ≦ 100)
が与えられる。これはプログラムに入力するテストの点数を表す。出力テストの点数の評価を出力せよ。出力は標準出力に行い、末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc028/submissions/4320047
// 提出ID : 4320047
// 問題ID : abc028_a
// コンテストID : abc028
// ユーザID : xryuseix
// コード長 : 785
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  if (n <= 59)
    cout << "Bad" << endl;
  else if (n <= 89)
    cout << "Good" << endl;
  else if (n <= 99)
    cout << "Great" << endl;
  else
    cout << "Perfect" << endl;

  return 0;
}
