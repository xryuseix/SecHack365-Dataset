/*
問題文の引用元：https://atcoder.jp/contests/abc078/tasks/abc078_b
B - ISUEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 幅 X
センチメートルの椅子があります。この椅子に座りたい人がたくさんおり，人は椅子に座ると必ず
Y
センチメートルの幅を使って座ります。出来る限りたくさんの人を椅子に座らせたいですが，人はみなシャイなので，人と人の間，また椅子の端と人の間には，少なくとも
Z センチメートル間を開ける必要があります。最大で何人座ることができますか？
制約入力は全て整数1 \leq X, Y, Z \leq 10^5Y+2Z \leq
X入力入力は以下の形式で標準入力から与えられる。X Y
Z出力求めた答えを出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc078/submissions/4311523
// 提出ID : 4311523
// 問題ID : abc078_b
// コンテストID : abc078
// ユーザID : xryuseix
// コード長 : 655
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  int n = 1;
  while (a - n * b - (n + 1) * c >= 0) {
    n++;
  }
  cout << n - 1 << endl;

  return 0;
}