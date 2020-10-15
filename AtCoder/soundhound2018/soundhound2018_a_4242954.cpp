/*
問題文の引用元：https://atcoder.jp/contests/soundhound2018/tasks/soundhound2018_a
A - SoundHoundEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
kenkooooさんはSoundHound社で働いています。彼は会社の知名度を上げるため、SoundHoundに名前が似ている言葉を見つけてマーケティングを行うことにしました。手始めに、2
単語からなる言葉で、それぞれの単語の頭文字を順につなげるとSHとなるような単語を似ていると見なすことにしました。あなたの仕事は、2
単語 X Y
からなる言葉が与えられたとき、頭文字を順につなげるとSHとなるか判定することです。
制約与えられる単語は英大文字からなる単語の長さは 1 以上 10
以下である入力入力は以下の形式で標準入力から与えられる。X
Y出力与えられた言葉がSoundHoundと似ている場合 YES と、そうでない場合 NO
と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/soundhound2018/submissions/4242954
// 提出ID : 4242954
// 問題ID : soundhound2018_a
// コンテストID : soundhound2018
// ユーザID : xryuseix
// コード長 : 623
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

  string x, y;
  cin >> x >> y;
  if (x[0] == 'S' && y[0] == 'H')
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
