/*
問題文の引用元：https://atcoder.jp/contests/abc065/tasks/abc065_a
A - Expired?Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 高橋君は胃が強いので、賞味期限を X
日まで過ぎた食品を食べてもお腹を壊しません。賞味期限を X+1
日以上過ぎた食品を食べると、お腹を壊します。また、賞味期限を過ぎずに食べると、おいしく感じます。そうでない場合、おいしく感じません。高橋君は、賞味期限の
A 日前に食品を買ってきて、買ってから B
日後に食べました。高橋君が食品をおいしく感じた場合 delicious
を、おいしくは感じなかったがお腹は壊さなかった場合 safe を、お腹を壊した場合
dangerous を出力するプログラムを作成してください。
制約1 ≦ X,A,B ≦ 10^9入力入力は以下の形式で標準入力から与えられる。X A
B出力高橋君が食品をおいしく感じた場合 delicious
を、おいしくは感じなかったがお腹は壊さなかった場合 safe を、お腹を壊した場合
dangerous を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc065/submissions/4198745
// 提出ID : 4198745
// 問題ID : abc065_a
// コンテストID : abc065
// ユーザID : xryuseix
// コード長 : 389
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

  int a, b, x;
  cin >> x >> a >> b;
  if (-a + b >= x + 1)
    cout << "dangerous" << endl;
  else if (-a + b > 0)
    cout << "safe" << endl;
  else
    cout << "delicious" << endl;

  return 0;
}
