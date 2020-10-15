/*
問題文の引用元：https://atcoder.jp/contests/abc093/tasks/abc093_b
B - Small and Large IntegersEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 以下を満たす整数をすべて昇順に出力してください。A 以上 B
以下の整数の中で、小さい方から K 番目以内であるか、大きい方から K 番目以内である
制約1 \leq A \leq B \leq 10^91 \leq K \leq
100入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。A B
K出力上の条件を満たす整数をすべて昇順に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc093/submissions/4314453
// 提出ID : 4314453
// 問題ID : abc093_b
// コンテストID : abc093
// ユーザID : xryuseix
// コード長 : 659
// 実行時間 : 973



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

  int i, a, b, c;
  cin >> a >> b >> c;
  for (i = a; i <= b; i++) {
    if (i < a + c || i > b - c)
      cout << i << endl;
  }

  return 0;
}