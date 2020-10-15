/*
問題文の引用元：https://atcoder.jp/contests/abc030/tasks/abc030_a
A - 勝率計算Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 野球のAtCoderリーグのシーズンが終了しました。チーム高橋は A 試合中 B
回勝ち、チーム青木は C 試合中 D
回勝ちました。AtCoderリーグでは勝率の高い順に高い順位が与えられます。チーム高橋とチーム青木のどちらが勝率で勝っているか答えるプログラムを作成してください。入力入力は以下の形式で標準入力から与えられる。A
B C D1 行目には、4 つの整数 A, B, C, D (1 ≦ A, B, C, D ≦ 100) が与えられる。B ≦
A かつ D ≦ C を満たすことが保証される。出力チーム高橋の勝率がより高いときは
TAKAHASHI、チーム青木の勝率がより高いときは AOKI、両チームの勝率が等しいときは
DRAW と 1 行に出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc030/submissions/4320023
// 提出ID : 4320023
// 問題ID : abc030_a
// コンテストID : abc030
// ユーザID : xryuseix
// コード長 : 774
// 実行時間 : 5



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

  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b / a == d / c)
    cout << "DRAW" << endl;
  else if (b / a > d / c)
    cout << "TAKAHASHI" << endl;
  else
    cout << "AOKI" << endl;

  return 0;
}
