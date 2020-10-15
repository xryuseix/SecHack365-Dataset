/*
問題文の引用元：https://atcoder.jp/contests/abc075/tasks/abc075_b
B - MinesweeperEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : H × W のマス目が与えられます。
入力において、全てのマスは文字で表されており、.は空きマス、 #
は爆弾マスに対応します。 マス目は H 個の文字列 S_1,...,S_H で表されます。 文字列
S_i の j 文字目は、マス目の上から i 番目、左から j
番目のマスに対応します。(1≦i≦H,1≦j≦W)
イルカは各空きマスの上下左右および斜めの 8
方向で隣接しているマスに爆弾マスが何個あるか気になっています。
そこで、各空きマスに対応する .
を、その空きマスの周囲8方向に隣接するマスにおける爆弾マスの個数を表す数字で置き換えることにしました。
以上の規則で置き換えられた後のマス目を出力してください。
制約1≦H,W≦50S_i は # と . からなる長さ W
の文字列入力入力は以下の形式で標準入力から与えられる。  H W
S_1:S_H出力置き換えられた後のマス目を H 行の文字列で出力せよ。 i 行目
に出力する文字列 T_i の長さは W であり、 T_i の j
文字目は、置き換えられた後のマス目の上から i 番目、左から j
番目のマスに対応させよ。(1≦i≦H,1≦j≦W)
// ソースコードの引用元 : https://atcoder.jp/contests/abc075/submissions/4310841
// 提出ID : 4310841
// 問題ID : abc075_b
// コンテストID : abc075
// ユーザID : xryuseix
// コード長 : 1654
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

  int i, j, h, w;
  cin >> h >> w;
  char m[h + 2][w + 2];
  for (i = 0; i < h + 2; i++)
    for (j = 0; j < w + 2; j++)
      m[i][j] = '.';
  for (i = 1; i < h + 1; i++)
    for (j = 1; j < w + 1; j++)
      cin >> m[i][j];
  for (i = 1; i < h + 1; i++)
    for (j = 1; j < w + 1; j++) {
      if (m[i][j] == '#') {
        if (m[i - 1][j - 1] != '#') {
          if (m[i - 1][j - 1] == '.')
            m[i - 1][j - 1] = '1';
          else
            m[i - 1][j - 1]++;
        }
        if (m[i - 1][j + 1] != '#') {
          if (m[i - 1][j + 1] == '.')
            m[i - 1][j + 1] = '1';
          else
            m[i - 1][j + 1]++;
        }
        if (m[i - 1][j] != '#') {
          if (m[i - 1][j] == '.')
            m[i - 1][j] = '1';
          else
            m[i - 1][j]++;
        }
        if (m[i][j + 1] != '#') {
          if (m[i][j + 1] == '.')
            m[i][j + 1] = '1';
          else
            m[i][j + 1]++;
        }
        if (m[i][j - 1] != '#') {
          if (m[i][j - 1] == '.')
            m[i][j - 1] = '1';
          else
            m[i][j - 1]++;
        }
        if (m[i + 1][j - 1] != '#') {
          if (m[i + 1][j - 1] == '.')
            m[i + 1][j - 1] = '1';
          else
            m[i + 1][j - 1]++;
        }
        if (m[i + 1][j] != '#') {
          if (m[i + 1][j] == '.')
            m[i + 1][j] = '1';
          else
            m[i + 1][j]++;
        }
        if (m[i + 1][j + 1] != '#') {
          if (m[i + 1][j + 1] == '.')
            m[i + 1][j + 1] = '1';
          else
            m[i + 1][j + 1]++;
        }
      }
    }
  for (i = 1; i < h + 1; i++) {
    for (j = 1; j < w + 1; j++) {
      if (m[i][j] == '.')
        cout << 0;
      else
        cout << m[i][j];
    }
    cout << endl;
  }

  return 0;
}
