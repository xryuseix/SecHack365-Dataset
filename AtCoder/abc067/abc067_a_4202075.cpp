/*
問題文の引用元：https://atcoder.jp/contests/abc067/tasks/abc067_a
A - Sharing CookiesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すぬけくんは 3 匹のヤギにクッキーを渡したいです。すぬけくんは A
枚のクッキーが入った缶と、B 枚のクッキーが入った缶を持っています。すぬけくんは
A, B, A+B のいずれかの枚数のクッキーをヤギたちに渡すことができます。3
匹のヤギが同じ枚数ずつ食べられるようにクッキーを渡すことが可能かどうか判定してください。
制約1 \leq A,B \leq 100A,B
はいずれも整数入力入力は以下の形式で標準入力から与えられる。A B出力3
匹のヤギが同じ枚数ずつ食べられるようにクッキーを渡すことが可能ならば Possible
と、そうでなければ Impossible と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc067/submissions/4202075
// 提出ID : 4202075
// 問題ID : abc067_a
// コンテストID : abc067
// ユーザID : xryuseix
// コード長 : 364
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

  int a, b;
  cin >> a >> b;
  if (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0)
    cout << "Possible" << endl;
  else
    cout << "Impossible" << endl;

  return 0;
}
