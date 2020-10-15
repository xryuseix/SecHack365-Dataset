/*
問題文の引用元：https://atcoder.jp/contests/abc073/tasks/abc073_b
B - TheaterEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : joisinoお姉ちゃんは、劇場の受付を担当しています。この劇場には、席 1
から席 100000 までの、100000
個の席があります。彼女のメモ書きによると、今までの間に N 組の団体が来て、i
組目の団体は席 l_i から席 r_i
までの連続した席に座っています。今、劇場の席には何人座っているか求めてください。
制約1≦N≦10001≦l_i≦r_i≦100000同じ席に複数の人が座ることはない。入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。Nl_1
r_1:l_N r_N出力劇場の席に座っている人数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc073/submissions/4303865
// 提出ID : 4303865
// 問題ID : abc073_b
// コンテストID : abc073
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

  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    ans += b - a + 1;
  }
  cout << ans << endl;

  return 0;
}
