/*
問題文の引用元：https://atcoder.jp/contests/abc129/tasks/abc129_a
A - Airplane
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 空港 A, B, C
があり、それぞれの空港の間では、双方向に飛行機が運航しています。空港 A, B
間の飛行時間は片道 P 時間、空港 B, C 間の飛行時間は片道 Q 時間、空港 C, A
間の飛行時間は片道 R
時間です。いずれかの空港からスタートして他の空港に飛行機で移動し、さらにそのどちらでもない空港に飛行機で移動するような経路を考えます。飛行時間の和は最短で何時間になるでしょうか。
制約1 \leq P,Q,R \leq
100入力は全て整数である入力入力は以下の形式で標準入力から与えられる。P Q
R出力飛行時間の和の最小値を出力せよ。



*/
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = a + b;
  ans = min(ans, a + c);
  ans = min(ans, b + c);
  cout << ans << endl;
}
