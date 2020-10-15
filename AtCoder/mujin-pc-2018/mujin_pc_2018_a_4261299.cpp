/*
問題文の引用元：https://atcoder.jp/contests/mujin-pc-2018/tasks/mujin_pc_2018_a
A - コンテスト名Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : コンテストの名前の候補として、英大文字からなる文字列 S
が与えられます。この文字列の先頭 5 文字が MUJIN であるかどうか判定してください。
制約S は英大文字からなる1 \leq |S| \leq
10入力入力は以下の形式で標準入力から与えられる。S出力与えられる文字列の先頭 5
文字が MUJIN である場合は Yes 、そうでない場合は No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/mujin-pc-2018/submissions/4261299
// 提出ID : 4261299
// 問題ID : mujin_pc_2018_a
// コンテストID : mujin-pc-2018
// ユーザID : xryuseix
// コード長 : 629
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

  string s;
  cin >> s;
  if (s.substr(0, 5) == "MUJIN")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
