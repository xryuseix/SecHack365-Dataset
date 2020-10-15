/*
問題文の引用元：https://atcoder.jp/contests/abc013/tasks/abc013_2
B - 錠Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
セキュリティ意識の高い高橋君はこの度、自分の家に新しい錠をつけることにしました。この錠はダイヤルロック式で、1
桁の数字が表示されるディスプレイと、赤色と青色の 2
種類のボタンがついています。赤いボタンを押すとディスプレイに表示されている数が 1
増え、青いボタンを押すと 1 減ります。ただし、ディスプレイの表示が 9
のときに赤いボタンを押すと 0 になり、ディスプレイの表示が 0
のときに青いボタンを押すと 9
になります。いま、ディスプレイに表示されている数字は a で、この数字が b
になった瞬間に錠が開きます。さて、錠を開けるためには最低何回はボタンを押す必要があるでしょうか？入力入力は以下の形式で標準入力から与えられる。ab1
行目には、現在ディスプレイに表示されている数字を表す整数 a (0\,≦\,a\,≦\,9)
が与えられる。2 行目には、解錠するために表示させる必要のある数字を表す整数 b
(0\,≦\,b\,≦\,9) が与えられる。a と b
が同じ値になることはない。出力錠を開けるために必要な、ボタンを押す回数の最小値を
1 行に出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc013/submissions/4354045
// 提出ID : 4354045
// 問題ID : abc013_2
// コンテストID : abc013
// ユーザID : xryuseix
// コード長 : 652
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
  cout << min(max(a - b, b - a), min(a + 10 - b, b + 10 - a)) << endl;

  return 0;
}
