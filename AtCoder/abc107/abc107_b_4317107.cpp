/*
問題文の引用元：https://atcoder.jp/contests/abc107/tasks/abc107_b
B - Grid CompressionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 縦 H 行、横 W 列のマス目があります。上から i 行目、左から j
列目のマスを (i, j) と表します。各マスは白または黒です。マス目の配色は、H 行 W
列の行列 (a_{i, j}) によって与えられます。a_{i, j} が . ならばマス (i, j)
は白であり、a_{i, j} が # ならばマス (i, j)
は黒です。すぬけ君はこのマス目を圧縮しようとしています。そのために、白いマスのみからなる行または列が存在する間、次の操作を繰り返し行います。操作:
白いマスのみからなる行または列をひとつ任意に選び、その行または列を取り除いて空白を詰める。各操作でどの行または列を選ぶかによらず、最終的なマス目は一意に定まることが示せます。最終的なマス目を求めてください。
制約1 \leq H, W \leq 100a_{i, j} は . または #
である。マス目全体で少なくともひとつは黒いマスが存在する。入力入力は以下の形式で標準入力から与えられる。H
Wa_{1, 1}...a_{1, W}:a_{H, 1}...a_{H,
W}出力最終的なマス目を、入力と同様のフォーマットで出力せよ。ただし、行数および列数は省くこと。詳しくはサンプルを参照せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc107/submissions/4317107
// 提出ID : 4317107
// 問題ID : abc107_b
// コンテストID : abc107
// ユーザID : xryuseix
// コード長 : 937
// 実行時間 : 2



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

  int i, j, h, w;
  cin >> h >> w;
  char a[h + 1][w + 1];
  for (i = 1; i < h + 1; i++) {
    for (j = 1; j < w + 1; j++) {
      cin >> a[i][j];
      if (a[i][j] == '#') {
        a[0][j] = '#';
        a[i][0] = '#';
      }
    }
  }
  bool aa;
  for (i = 1; i < h + 1; i++) {
    aa = false;
    for (j = 1; j < w + 1; j++) {
      if (a[i][0] == '#' && a[0][j] == '#') {
        cout << a[i][j];
        aa = true;
      }
    }
    if (aa)
      cout << endl;
  }

  return 0;
}
