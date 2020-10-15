/*
問題文の引用元：https://atcoder.jp/contests/agc007/tasks/agc007_a
A - Shik and StoneEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :    #nck {      width: 30px;      height: auto;   }縦 H 行、横 W
列のマス目に区切られた盤面があります。はじめ、駒が左上隅のマスに置かれていました。シックはこの駒を
1
マスずつ上下左右に動かし、右下隅のマスに移動させました。このとき、駒が同じマスを複数回通った可能性もあります（左上隅や右下隅のマスも含む）。縦横に並んだ文字
a_{ij} (1 \leq i \leq H, 1 \leq j \leq W) が与えられます。a_{ij} が #
のとき、駒が移動する過程で i 行 j
列目のマスを一度以上通ったことを表します（左上隅や右下隅のマスは必ず通ったものとして扱います）。a_{ij}
が . のとき、駒が i 行 j
列目のマスを一度も通らなかったことを表します。移動する過程で、駒が常に右または下に動いていた可能性があるか判定してください。
制約2 \leq H, W \leq 8a_{i,j} は # または . である。
問題文 : および a
で与えられる情報と整合するような駒の動き方が存在する。入力入力は以下の形式で標準入力から与えられる。H
WA_{11}A_{12}...A_{1W}:A_{H1}A_{H2}...A_{HW}出力移動する過程で、駒が常に右または下に動いていた可能性があれば
Possible 、なければ Impossible と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc007/submissions/4432604
// 提出ID : 4432604
// 問題ID : agc007_a
// コンテストID : agc007
// ユーザID : xryuseix
// コード長 : 987
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

  int j, i, h, w, f, l, lal = -1, lf = -1;
  string s;
  cin >> h >> w;
  for (i = 0; i < h; i++) {
    f = l = -1;
    cin >> s;
    for (j = 0; j < w; j++) {
      if (s[j] == '#') {
        f = j;
        break;
      }
    }
    l = f;
    for (j = f; j < w; j++) {
      if (s[j] == '#')
        l = j;
    }
    if (lal == -1) {
      lal = l;
      lf = f;
      continue;
    } else {
      if (lal != f) {
        cout << "Impossible" << endl;
        return 0;
      }
    }
    lal = l;
    lf = f;
  }
  cout << "Possible" << endl;

  return 0;
}
