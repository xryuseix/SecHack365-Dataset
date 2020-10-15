/*
問題文の引用元：https://atcoder.jp/contests/abc008/tasks/abc008_1
A - アルバムEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は子供の頃の写真を整理している。整理している最中に、写真を入れている木箱が出てきたので、木箱内にある写真をアルバムに貼って整理することにした。どの位の大きさのアルバムが必要なのか確認するために、木箱の中にある写真の枚数が知りたくなった。高橋君はすべての写真に正整数の通し番号を付けており、木箱内には通し番号が
S 以上 T
以下であるすべての写真が入っている。高橋君は、木箱にある写真の枚数が知りたいが、写真を
1 枚ずつ数えるのは大変である。あなたは高橋くんの代わりに、S と T
の値からアルバムに貼られている写真の枚数を計算するプログラムを作成せよ。入力入力は以下の形式で標準入力から与えられる。S
T1 行目には、アルバムに貼られている写真の範囲を表す 2 つの整数 S,T (1 ≦ S ≦ T ≦
1,000)
が与えられる。出力木箱内にある写真の枚数を出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc008/submissions/4320593
// 提出ID : 4320593
// 問題ID : abc008_1
// コンテストID : abc008
// ユーザID : xryuseix
// コード長 : 627
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

  int a, b;
  cin >> a >> b;
  cout << b - a + 1 << endl;

  return 0;
}
