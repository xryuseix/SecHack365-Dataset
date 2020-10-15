/*
問題文の引用元：https://atcoder.jp/contests/abc031/tasks/abc031_a
A - ゲームEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は新しくゲームを買った。高橋君のゲームキャラクターには攻撃力と防御力が定まっており、レベルが上がると攻撃力と防御力のうち好きなひとつを
1
だけ上げることができる。高橋君はゲームキャラクターの攻撃力と防御力の積が最大となるように攻撃力か防御力のうちひとつを選んで上げる。もしもどちらを選んでもレベルアップ後の攻撃力と防御力の積が等しくなる場合、攻撃力を選んで上昇させる。高橋君がゲームキャラクターをレベルアップさせた場合の、レベルアップ後の攻撃力と防御力の積を求めよ。入力入力は以下の形式で標準入力から与えられる。A
D1 行目には、2 個の整数 A (1≦A≦200), D (1≦D≦200)
が空白区切りで与えられる。これは、ゲームキャラクターの攻撃力が A で、防御力が D
であることを表す。出力高橋君がゲームキャラクターをレベルアップさせた後の、ゲームキャラクターの攻撃力と防御力の積を
1 行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc031/submissions/4320003
// 提出ID : 4320003
// 問題ID : abc031_a
// コンテストID : abc031
// ユーザID : xryuseix
// コード長 : 697
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
  cout << (min(a, b) + 1) * max(a, b) << endl;

  return 0;
}
