/*
問題文の引用元：https://atcoder.jp/contests/abc002/tasks/abc002_3
C - 直訴Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
神に盗まれた母音を取り戻すため、高橋くんは神へ直訴しました。「神様、どうかお願いです。僕の母音を返してください。」神はこう言いました。「そんなに母音がほしいのか。ならば私の仕事を手伝ってもらおう。」現在、神は天界のいたるところで測量を行っており、高橋くんは神の測量を手伝わなければなりません。今回は三角形の測量です。高橋くんには
2 次元平面上の 3 つの点 A,\ B,\ C
が与えられます。少しでも早く母音を取り戻すために、三角形 ABC
の面積を出力するプログラムを書いてください。入力入力は以下の形式で標準入力から与えられる。x_a
y_a x_b y_b x_c y_c1 行目には、3 点 A,\ B,\ C
の座標が半角空白区切りで与えられる。点 A の座標が (x_a,\ y_a)、点 B の座標が
(x_b,\ y_b)、点 C の座標が (x_c,\ y_c) であることを表す。各座標の値 x_a,\ y_a,\
x_b,\ y_b,\ x_c,\ y_c は -1,000 以上 1,000
以下の整数であることが保証されている。3 点 A,\ B,\ C
が同一直線上に配置されていることはない。出力三角形 ABC の面積を 1
行で出力してください。また、出力の末尾には改行を入れること。出力は絶対誤差が
10^{-2} 以下であれば許容される。ヒント3 点 (0,0),\ (a,b),\ (c,d)
で構成される三角形の面積は、|ad-bc|/2 となります。（このヒントは、コンテスト開始
1 時間後に公開されたものです。）
// ソースコードの引用元 : https://atcoder.jp/contests/abc002/submissions/4630259
// 提出ID : 4630259
// 問題ID : abc002_3
// コンテストID : abc002
// ユーザID : xryuseix
// コード長 : 1010
// 実行時間 : 2



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
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
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  c -= a;
  e -= a;
  d -= b;
  f -= b;
  double ans = (c * f - d * e) / 2;
  if (ans < 0)
    ans *= -1;
  printf("%.3f\n", ans);

  //////////////////////////////////////////////////////
  return 0;
}
