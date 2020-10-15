/*
問題文の引用元：https://atcoder.jp/contests/abc046/tasks/abc046_b
B - Painting Balls with AtCoDeerEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : シカのAtCoDeerくんは一列に並んだ N 個のボールをそれぞれ K
色のペンキの色のうちのどれかで塗ろうとしています。見栄えが悪くならないように、隣り合ったボールは別の色で塗ることにします。ボールの塗り方としてあり得るものの個数を求めてください。
制約1≦N≦10002≦K≦1000答えは 2^{31}-1
以下入力入力は以下の形式で標準入力から与えられる。N
K出力ボールの塗り方としてあり得るものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc046/submissions/4225981
// 提出ID : 4225981
// 問題ID : abc046_b
// コンテストID : abc046
// ユーザID : xryuseix
// コード長 : 334
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  long ans = b;
  for (int i = 1; i < a; i++)
    ans *= b - 1;
  cout << ans << endl;
  return 0;
}