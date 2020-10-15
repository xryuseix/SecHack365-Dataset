/*
問題文の引用元：https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_b
B - PathEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 4 つの街があり、順に 1,2,3,4 と番号が付いています。道が 3 本あり、i
本目の道は異なる街 a_i,b_i
を双方向に結んでいます。同じ街の対の間を結ぶ道が複数あることはありません。街同士を行き来する手段は、道以外にはありません。どの
2
つの街の間も、道を何本か通ることで行き来することができます。すべての道をちょうど
1 回ずつ通ることですべての街を訪れることが可能かどうか判定してください。
制約1 \leq a_i,b_i \leq 4(1\leq i\leq 3)a_i と b_i は異なる (1\leq i\leq
3)同じ街の対の間を結ぶ道は複数存在しないどの 2
つの街の間も、道を何本か通ることで行き来することができる入力入力は以下の形式で標準入力から与えられる。a_1
b_1a_2 b_2a_3 b_3出力すべての道をちょうど 1
回ずつ通ることですべての街を訪れることが可能なら YES を、そうでないなら NO
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/4208632
// 提出ID : 4208632
// 問題ID : yahoo_procon2019_qual_b
// コンテストID : yahoo-procon2019-qual
// ユーザID : xryuseix
// コード長 : 539
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
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, co[4] = {0}, i;

  for (i = 0; i < 6; i++) {
    cin >> a;
    co[a - 1]++;
  }
  int ev = 0, one = 0;
  for (i = 0; i < 4; i++) {
    if (co[i] % 2 == 0)
      ev++;
    else if (co[i] == 1)
      one++;
  }
  //	cout<<co[0]<<" "<<co[1]<<" "<<co[2]<<" "<<co[3]<<endl;
  if (one == 2 && one + ev == 4)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
