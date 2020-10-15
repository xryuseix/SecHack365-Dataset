/*
問題文の引用元：https://atcoder.jp/contests/abc056/tasks/abc056_a
A - HonestOrDishonestEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
シカのAtCoDeerくんとTopCoDeerくんが「正直者か嘘つきか」ゲームをしています。このゲームでは、正直者は常にほんとうのことを言い、嘘つきは常に嘘を言います。文字
a と b が入力として与えられます。これらはそれぞれ H か D のどちらかです。a=H
のとき、AtCoDeerくんは正直者です。a=D のとき、AtCoDeerくんは嘘つきです。b=H
のとき、AtCoDeerくんは「TopCoDeerくんは正直者だ」と発言しています。b=D
のとき、AtCoDeerくんは「TopCoDeerくんは嘘つきだ」と発言しています。これらから判断して、TopCoDeerくんが正直者かどうか判定してください。
制約a=H または Db=H または D入力入力は以下の形式で標準入力から与えられる。a
b出力TopCoDeerくんが正直者なら H を、嘘つきなら D を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc056/submissions/4198679
// 提出ID : 4198679
// 問題ID : abc056_a
// コンテストID : abc056
// ユーザID : xryuseix
// コード長 : 303
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

  char a, b;
  cin >> a >> b;
  if (a == b)
    cout << "H" << endl;
  else
    cout << "D" << endl;
  return 0;
}
