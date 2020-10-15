/*
問題文の引用元：https://atcoder.jp/contests/abc110/tasks/abc110_b
B - 1 Dimensional World's TaleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : この世界は 1 次元世界であり、世界を治める 2 つの帝国はそれぞれ A
帝国、B 帝国と呼ばれています。A 帝国の首都は座標 X、B 帝国の首都は座標 Y
に位置しています。ある日、A 帝国は座標 x_1, x_2, ..., x_N、B 帝国は座標 y_1,
y_2, ..., y_M の都市を支配下に置きたくなりました。このとき、以下の 3
つの条件をすべて満たす整数 Z
が存在すれば、合意が成立して戦争は起きませんが、存在しない場合には戦争が起こります。X
< Z \leq Yx_1, x_2, ..., x_N < Zy_1, y_2, ..., y_M \geq
Z戦争が起こるかどうか判定してください。
制約入力はすべて整数である1 \leq N, M \leq 100-100 \leq X < Y \leq 100-100 \leq
x_i, y_i \leq 100x_1, x_2, ..., x_N \neq Xx_i はすべて異なるy_1, y_2, ..., y_M
\neq Yy_i はすべて異なる入力入力は以下の形式で標準入力から与えられる。N M X Yx_1
x_2 ... x_Ny_1 y_2 ... y_M出力戦争が起こるなら War、そうでないなら No War
を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc110/submissions/4242604
// 提出ID : 4242604
// 問題ID : abc110_b
// コンテストID : abc110
// ユーザID : xryuseix
// コード長 : 821
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

  int n, m, x, y, i, ans;
  cin >> n >> m >> x >> y;
  int xi[n], yi[m];
  for (i = 0; i < n; i++)
    cin >> xi[i];
  for (i = 0; i < m; i++)
    cin >> yi[i];
  sort(xi, xi + n);
  sort(yi, yi + m);
  int maxxi = max(x, xi[n - 1]), minyi = min(yi[0], y);
  //	cout<<maxxi<<" "<<minyi<<endl;
  if (maxxi < minyi)
    cout << "No War";
  else
    cout << "War" << endl;

  return 0;
}
