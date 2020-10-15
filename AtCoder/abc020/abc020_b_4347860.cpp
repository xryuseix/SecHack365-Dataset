/*
問題文の引用元：https://atcoder.jp/contests/abc020/tasks/abc020_b
B - 足し算Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 2 つの正整数 A, B が与えられます。 A の十進表記の右に B
の十進表記（先頭に 0 を付けない）を連結して得られる整数を 2
倍したものを出力してください。入力入力は以下の形式で標準入力から与えられる。A B1
行目に、 2 個の整数 A, B (1 ≦ A, B ≦ 999)
がスペース区切りで与えられる。出力標準出力に指示された値を出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc020/submissions/4347860
// 提出ID : 4347860
// 問題ID : abc020_b
// コンテストID : abc020
// ユーザID : xryuseix
// コード長 : 703
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

  int i, d = 0, a, b;
  ll tmp;
  cin >> a >> b;
  tmp = b;
  while (tmp > 0) {
    tmp /= 10;
    d++;
  }
  tmp = (a * pow(10, d) + b);
  cout << tmp * 2 << endl;

  return 0;
}
