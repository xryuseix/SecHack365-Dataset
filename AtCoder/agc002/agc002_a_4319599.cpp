/*
問題文の引用元：https://atcoder.jp/contests/agc002/tasks/agc002_a
A - Range ProductEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 整数 a，b (a≤b) が与えられます。 a，a+1，...，b
すべての積が、正か、負か、0 かを判定してください。
制約a，b は整数である。-10^9≤a≤b≤10^9部分点100
点分のデータセットでは、-10≤a≤b≤10
が成り立つ。入力入力は以下の形式で標準入力から与えられる。a
b出力a，a+1，...，b すべての積が、正ならば Positive を、負ならば Negative
を、0 ならば Zero を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc002/submissions/4319599
// 提出ID : 4319599
// 問題ID : agc002_a
// コンテストID : agc002
// ユーザID : xryuseix
// コード長 : 802
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
  if (a == 0 || b == 0 || a < 0 && b > 0) {
    cout << "Zero" << endl;
    return 0;
  } else if (a > 0 || (a < 0 && -(b + a) % 2 == 1)) {
    cout << "Positive" << endl;
    return 0;
  } else {
    cout << "Negative" << endl;
    return 0;
  }

  return 0;
}