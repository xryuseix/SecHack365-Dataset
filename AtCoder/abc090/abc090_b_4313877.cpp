/*
問題文の引用元：https://atcoder.jp/contests/abc090/tasks/abc090_b
B - Palindromic NumbersEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : A 以上 B
以下の整数のうち、回文数となるものの個数を求めてください。ただし、回文数とは、先頭に
0 をつけない 10
進表記を文字列として見たとき、前から読んでも後ろから読んでも同じ文字列となるような正の整数のことを指します。
制約10000 \leq A \leq B \leq
99999入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A
B出力A 以上 B 以下の整数のうち、回文数となるものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc090/submissions/4313877
// 提出ID : 4313877
// 問題ID : abc090_b
// コンテストID : abc090
// ユーザID : xryuseix
// コード長 : 771
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

  int i, ans = 0;
  int a, b;
  cin >> a >> b;
  for (i = a; i <= b; i++) {
    //		cout<<i/10000<<" "<<i%10<<" "<<(i/1000)%10<<"
    //"<<(i/10)%10<<endl;
    if (i / 10000 == i % 10 && (i / 1000) % 10 == (i / 10) % 10)
      ans++;
  }
  cout << ans << endl;

  return 0;
}