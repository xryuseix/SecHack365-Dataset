/*
問題文の引用元：https://atcoder.jp/contests/abc046/tasks/abc046_a
A - AtCoDeer and Paint CansEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
シカのAtCoDeerくんはペンキをこれまでに3つ買いました。おととい買ったペンキの色は
a , 昨日買ったペンキの色は b , 今日買ったペンキの色は c
です。各ペンキの色は1以上100以下の整数で表されます。AtCoDeerくんはわすれんぼうなため、同じ色のペンキを買ってしまっていることがあります。AtCoDeerくんが買ったペンキの色の種類の個数を教えてあげてください。
制約1≦a,b,c≦100入力入力は以下の形式で標準入力から与えられる。a b
c出力AtCoDeerくんが買ったペンキの色の種類の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc046/submissions/4196143
// 提出ID : 4196143
// 問題ID : abc046_a
// コンテストID : abc046
// ユーザID : xryuseix
// コード長 : 412
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  set<int> s;
  for (int i = 0; i < 3; i++) {
    int n;
    cin >> n;
    s.insert(n);
  }
  int co = 0;
  set<int>::iterator it;
  for (it = s.begin(); it != s.end(); it++) {
    co++;
  }
  cout << co << endl;
  return 0;
}