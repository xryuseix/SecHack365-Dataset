/*
問題文の引用元：https://atcoder.jp/contests/abc017/tasks/abc017_1
A - プロコンEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君はプロコン(ここでいうプロコンとは、グラフ上に適切にプロットする力を問うコンテストである)に参加している。高橋君は
3 つの課題に取り組んだ。課題ごとに
配点が定められており、各課題ごとに 1 以上 10
以下の整数による評価が付けられる。評価の数字が X であるとき、その課題においては
配点の X 割の得点が与えられる。3 つの課題の
配点と評価が与えられるので、高橋君が合計で何点獲得したのかを求めてほしい。入力入力は以下の形式で標準入力から与えられる。s_1
e_1s_2 e_2s_3 e_31 行目には、1 つめの課題の情報を表す 2 つの整数 s_1 (10 ≦ s_1 ≦
990) と e_1 (1 ≦ e_1 ≦ 10) が与えられる。これは、1 つめの課題の
配点が s_1 点で、評価が e_1 だったことを表す。2 行目には、2
つめの課題の情報を表す 2 つの整数 s_2 (10 ≦ s_2 ≦ 990) と e_2 (1 ≦ e_2 ≦ 10)
が与えられる。これは、2 つめの課題の
配点が s_2 点で、評価が e_2 だったことを表す。3 行目には、3
つめの課題の情報を表す 2 つの整数 s_3 (10 ≦ s_3 ≦ 990) と e_3 (1 ≦ e_3 ≦ 10)
が与えられる。これは、3 つめの課題の
配点が s_3 点で、評価が e_3 だったことを表す。s_1 と s_2 と s_3 のいずれも 10
の倍数であることが保証されている。そのため、合計得点は整数値となる。出力合計得点を
1 行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc017/submissions/4320338
// 提出ID : 4320338
// 問題ID : abc017_1
// コンテストID : abc017
// ユーザID : xryuseix
// コード長 : 722
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

  int a[3], b[3], ans = 0, i;
  cin >> a[0] >> b[0] >> a[1] >> b[1] >> a[2] >> b[2];
  for (i = 0; i < 3; i++) {
    ans += a[i] * b[i] / 10;
  }
  cout << ans << endl;

  return 0;
}
