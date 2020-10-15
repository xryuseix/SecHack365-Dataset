/*
問題文の引用元：https://atcoder.jp/contests/abc097/tasks/abc097_b
B - ExponentialEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 正整数 X が与えられます。X
以下の最大のべき乗数を求めてください。ただし、べき乗数とは、ある 1 以上の整数 b
と 2 以上の整数 p を使って b^p とかける整数のことを指すこととします。
制約1 ≤ X ≤ 1000X は整数入力入力は以下の形式で標準入力から与えられる。X出力X
以下の最大のべき乗数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc097/submissions/4315643
// 提出ID : 4315643
// 問題ID : abc097_b
// コンテストID : abc097
// ユーザID : xryuseix
// コード長 : 832
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

  bool a[1001] = {false};
  int x, i, j;
  //	for(i=0;i<1001;i++)a[i]=false;
  for (i = 1; i <= 35; i++) {
    for (j = 2; j <= 10; j++) {
      ll tmp = pow(i, j);
      if (tmp <= 1000)
        a[tmp] = true;
    }
  }
  cin >> x;
  for (i = x; i >= 0; i--) {
    if (a[i]) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}
