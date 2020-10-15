/*
問題文の引用元：https://atcoder.jp/contests/abc007/tasks/abc007_1
A - 植木算Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
小学生のたかはし君は、遠足で林にきています。遠足を楽しんでいる彼は、木が一直線に並んでいることに気づきました。そして、授業で、「植木算」というものを習ったことを思い出しました。彼が授業で習った植木算の問題は、「木が
4 本
一直線に並んでいるとき、隣り合う木の"間"は何箇所存在するか。」というもので、その答えは図1の通り
3 箇所です。図1.
4本の木の間は3箇所今回、遠足中の彼が見ている光景は、その問題のシチュエーションとよく似通っていて、隣り合う木の間の数を数えたくなりました。彼は遠足パンフレットに、一直線に生えている木々の本数が書かれていることに気づきました。しかし、彼は実際に木の間を数える手段しか知らないので、本数によってはとても時間がかかってしまうかもしれません。そこで、あなたにお願いがあります。一直線に並んでいる木々が
n
本あるという情報が与えられるので、隣り合う木の間の数を出力するプログラムをたかはし君のために作ってあげてください。入力入力は以下の形式で標準入力から与えられる。n1
行目には、一直線に並んでいる木々の本数を表す整数 n (1 ≦ n ≦ 10,000)
が与えられる。出力隣り合う木の間の数を 1
行に出力せよ。出力の末尾に改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc007/submissions/4320602
// 提出ID : 4320602
// 問題ID : abc007_1
// コンテストID : abc007
// ユーザID : xryuseix
// コード長 : 622
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
  cin >> a;
  cout << a - 1 << endl;

  return 0;
}
