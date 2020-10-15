/*
問題文の引用元：https://atcoder.jp/contests/abc120/tasks/abc120_b
B - K-th Common DivisorEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 正整数 A, B が与えられます。A も B も割り切る正整数のうち、K
番目に大きいものを求めてください。なお、与えられる入力では、A も B
も割り切る正整数のうち K 番目に大きいものが存在することが保証されます。
制約入力は全て整数である。1 \leq A, B \leq 100A も B も割り切る正整数のうち、K
番目に大きいものが存在する。K \geq
1入力入力は以下の形式で標準入力から与えられる。A B K出力A も B
も割り切る正整数のうち、K 番目に大きいものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc120/submissions/4447742
// 提出ID : 4447742
// 問題ID : abc120_b
// コンテストID : abc120
// ユーザID : xryuseix
// コード長 : 749
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

  int a, b, k, i, t = 0;
  cin >> a >> b >> k;
  for (i = 1000; i > 0; i--) {
    //		cout<<i<<k<<endl;
    if (a % i == 0 && b % i == 0)
      t++;
    if (k == t) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}
