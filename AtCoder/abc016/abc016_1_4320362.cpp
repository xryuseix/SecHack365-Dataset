/*
問題文の引用元：https://atcoder.jp/contests/abc016/tasks/abc016_1
A - 12月6日Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
12月6日は、月を日で割って割り切れる日です。日付が与えられるので月が日で割り切れるかを判定してください。入力入力は以下の形式で標準入力から与えられる。M
D月を表す整数 M と日を表す整数 D
が空白区切りで与えられる。出力月が日で割り切れるなら YES 、割り切れないなら NO
を出力せよ。出力の末尾には改行をつけること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc016/submissions/4320362
// 提出ID : 4320362
// 問題ID : abc016_1
// コンテストID : abc016
// ユーザID : xryuseix
// コード長 : 665
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

  int a, b;
  cin >> a >> b;
  if (a % b == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
