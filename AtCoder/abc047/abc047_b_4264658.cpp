/*
問題文の引用元：https://atcoder.jp/contests/abc047/tasks/abc047_b
B - Snuke's Coloring 2 (ABC Edit)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : xy 平面上に、左下の座標が (0, 0)、右上の座標が (W, H) で、各辺が x 軸か
y
軸に平行な長方形があります。最初、長方形の内部は白く塗られています。すぬけ君はこの長方形の中に
N 個の点を打ちました。i 個目 (1 ≦ i ≦ N) 点の座標は (x_i, y_i)
でした。また、すぬけ君は長さ N の数列 a を決めて、各 1 ≦ i ≦ N に対し、a_i = 1
のときは長方形の x < x_i をみたす領域a_i = 2 のときは長方形の x > x_i
をみたす領域a_i = 3 のときは長方形の y < y_i をみたす領域a_i = 4
のときは長方形の y > y_i
をみたす領域を黒く塗りました。塗りつぶしが終わったあとの長方形内での白い部分の面積を求めてください。
制約1 ≦ W, H ≦ 1001 ≦ N ≦ 1000 ≦ x_i ≦ W (1 ≦ i ≦ N)0 ≦ y_i ≦ H (1 ≦ i ≦ N)W, H
(21:32 追記), x_i, y_i は整数であるa_i (1 ≦ i ≦ N) は 1, 2, 3, 4
のいずれかである入力入力は以下の形式で標準入力から与えられる。W H Nx_1 y_1
a_1x_2 y_2 a_2:x_N y_N
a_N出力塗りつぶしが終わったあとの長方形内での白い部分の面積を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc047/submissions/4264658
// 提出ID : 4264658
// 問題ID : abc047_b
// コンテストID : abc047
// ユーザID : xryuseix
// コード長 : 1506
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int w, h, n, a, b, c, i, j, k;
  cin >> w >> h >> n;
  int m[h][w];
  for (j = 0; j < h; j++)
    for (k = 0; k < w; k++)
      m[j][k] = 0;
  for (i = 0; i < n; i++) {
    cin >> a >> b >> c;
    //		for(j=0;j<h;j++){
    //			for(k=0;k<w;k++){
    //				cout<<m[j][k]<<" ";
    //			}
    //			cout<<endl;
    //		}
    switch (c) {
    case 1:
      for (j = 0; j < h; j++) {
        for (k = 0; k < w; k++) {
          if (k < a)
            m[j][k] = 1;
        }
      }
      break;
    case 2:
      for (j = 0; j < h; j++) {
        for (k = 0; k < w; k++) {
          if (k >= a)
            m[j][k] = 1;
        }
      }
      break;
    case 3:
      for (j = 0; j < h; j++) {
        for (k = 0; k < w; k++) {
          if (j < b)
            m[j][k] = 1;
        }
      }
      break;
    case 4:
      for (j = 0; j < h; j++) {
        for (k = 0; k < w; k++) {
          if (j >= b)
            m[j][k] = 1;
        }
      }
      break;
    }
    //		for(j=0;j<h;j++){
    //			for(k=0;k<w;k++){
    //				cout<<m[j][k]<<" ";
    //			}
    //			cout<<endl;
    //		}
  }
  int s = 0;
  for (j = 0; j < h; j++) {
    for (k = 0; k < w; k++) {
      //			cout<<m[j][k]<<" ";
      s += m[j][k];
    }
    //		cout<<endl;
  }
  cout << w *h - s << endl;

  return 0;
}
