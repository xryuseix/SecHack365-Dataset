/*
問題文の引用元：https://atcoder.jp/contests/soundhound2018-summer-qual/tasks/soundhound2018_summer_qual_a
A - FEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 2 つの 整数 a,b が与えられます。a+b=15 であるか、a\times b=15
であるか、そのどちらでもないかを判定してください。ただし、a+b=15 と a\times b=15
が同時に成り立つことはありません。
制約1 \leq a,b \leq
15入力はすべて整数入力入力は以下の形式で標準入力から与えられる。a b出力a+b=15
であれば + を、a\times b=15 であれば * を、どちらでもなければ x
を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/soundhound2018-summer-qual/submissions/4261230
// 提出ID : 4261230
// 問題ID : soundhound2018_summer_qual_a
// コンテストID : soundhound2018-summer-qual
// ユーザID : xryuseix
// コード長 : 648
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
  cin >> a >> b;
  if (a + b == 15)
    cout << "+" << endl;
  else if (a * b == 15)
    cout << "*" << endl;
  else
    cout << "x" << endl;

  return 0;
}
