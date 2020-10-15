/*
問題文の引用元：https://atcoder.jp/contests/abc086/tasks/abc086_b
B - 1 21Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : シカのAtCoDeerくんは二つの正整数 a,b を見つけました。a と b
をこの順につなげて読んだものが平方数かどうか判定してください。
制約1 ≤ a,b ≤ 100a,b は整数入力入力は以下の形式で標準入力から与えられる。a
b出力a と b をこの順につなげて読んだものが平方数なら Yes を、 そうでないなら No
を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc086/submissions/4313051
// 提出ID : 4313051
// 問題ID : abc086_b
// コンテストID : abc086
// ユーザID : xryuseix
// コード長 : 766
// 実行時間 : 3



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
// set<set>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, x, y;
  cin >> a >> b;
  x = b;
  y = 0;
  while (x > 0) {
    x /= 10;
    y++;
  }
  a = a * pow(10, y) + b;
  //	cout<<sqrt(a)<<endl;
  if (int(sqrt(a)) * int(sqrt(a)) == a)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
