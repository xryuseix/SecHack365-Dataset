/*
問題文の引用元：https://atcoder.jp/contests/agc029/tasks/agc029_a
A - Irreversible operationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 個のオセロの石が一列に並んでいます。それぞれの石の状態は長さ N
の文字列 S によって表されており、S_i=B のとき左から i
番目の石の表面は黒色、S_i=W のとき左から i
番目の石の表面は白色となっています。ここで、以下の操作を行うことを考えます。左から
i 番目の石の表面が黒色、左から i+1 番目の石の表面が白色であるような i (1 \leq i
< N) を一つ選び、  その 2 つの石をともに裏返す。つまり、左から i
番目の石の表面が白色、左から i+1
番目の石の表面が黒色になるようにする。最大で何回この操作を行うことができるか求めてください。
制約1 \leq |S| \leq 2\times 10^5S_i=B または
W入力入力は以下の形式で標準入力から与えられる。S出力先の操作を行うことができる回数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc029/submissions/4090825
// 提出ID : 4090825
// 問題ID : agc029_a
// コンテストID : agc029
// ユーザID : xryuseix
// コード長 : 357
// 実行時間 : 10



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main(void) {
  string s;
  long long int ans = 0;
  cin >> s;
  int b = 0;
  for (int i = 0; i < s.length(); i++) {
    //		cout<<s[i]<<" "<<i<<" "<<b<<" "<<ans<<endl;
    if (s[i] == 'W') {
      ans += i - b;
      b++;
    }
  }
  cout << ans << endl;
  return 0;
}