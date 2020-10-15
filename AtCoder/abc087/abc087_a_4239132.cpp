/*
問題文の引用元：https://atcoder.jp/contests/abc087/tasks/abc087_a
A - Buying SweetsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : あなたは、X
円を持ってケーキとドーナツを買いに出かけました。あなたはまずケーキ屋で 1 個 A
円のケーキを 1 個買いました。次に、ドーナツ屋で 1 個 B
円のドーナツをできるだけたくさん買いました。これらの買い物のあと手元に残っている金額は何円ですか。
制約1 \leq A, B \leq 1,000A + B \leq X \leq 10,000X, A, B
は整数である入力入力は以下の形式で標準入力から与えられる。XAB出力買い物のあとに残った金額を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc087/submissions/4239132
// 提出ID : 4239132
// 問題ID : abc087_a
// コンテストID : abc087
// ユーザID : xryuseix
// コード長 : 517
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

  int x, a, b;
  cin >> x >> a >> b;
  int arest = x - a;
  cout << arest % b << endl;

  return 0;
}
