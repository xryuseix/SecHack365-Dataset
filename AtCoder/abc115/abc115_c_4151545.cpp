/*
問題文の引用元：https://atcoder.jp/contests/abc115/tasks/abc115_c
C - Christmas EveEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : とある世界では、今日はクリスマスイブです。高羽氏の庭には N
本の木が植えられています。i 本目の木 (1 \leq i \leq N) の高さは h_i
メートルです。彼は、これらの木のうち K
本を選んで電飾を施すことにしました。より美しい光景をつくるために、できるだけ近い高さの木を飾り付けたいです。より具体的には、飾り付ける木のうち最も高いものの高さを
h_{max} メートル、最も低いものの高さを h_{min} メートルとすると、h_{max} -
h_{min} が小さいほど好ましいです。h_{max} - h_{min}
は最小でいくつにすることができるでしょうか？
制約2 \leq K < N \leq 10^51 \leq h_i \leq 10^9h_i
は整数である。入力入力は以下の形式で標準入力から与えられる。N
Kh_1h_2:h_N出力h_{max} - h_{min} としてありうる最小の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc115/submissions/4151545
// 提出ID : 4151545
// 問題ID : abc115_c
// コンテストID : abc115
// ユーザID : xryuseix
// コード長 : 402
// 実行時間 : 19



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, n, k, ans = 1000000000;
  cin >> n >> k;
  int h[n];
  for (i = 0; i < n; i++)
    cin >> h[i];
  sort(h, h + n);
  for (i = 0; i < n - k + 1; i++) {
    if (h[i - 1 + k] - h[i] < ans)
      ans = h[i - 1 + k] - h[i];
  }
  cout << ans << endl;

  return 0;
}
