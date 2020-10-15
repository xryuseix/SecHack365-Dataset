/*
問題文の引用元：https://atcoder.jp/contests/abc121/tasks/abc121_a
A - White CellsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : H 行 W 列の白色のマス目があります。あなたは h 個の行と w
個の列を選び、選んだ行または列に含まれるマス目を全て黒色で塗りつぶします。白色のマス目はいくつ残るでしょうか。なお、残る白色のマス目の数は行や列の選び方によらないことが証明できます。
制約入力は全て整数である。1 \leq H, W \leq 201 \leq h \leq H1 \leq w \leq
W入力入力は以下の形式で標準入力から与えられる。H Wh
w出力残る白色のマス目の数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc121/submissions/4976218
// 提出ID : 4976218
// 問題ID : abc121_a
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 754
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
#include <stack>
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
#define end(ans) cout << (ans) << endl
#define INF INT_MAX;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {

  int H, W, h, w;
  cin >> H >> W >> h >> w;

  cout << (H - h) * (W - w) << endl;

  return 0;
}
