/*
問題文の引用元：https://atcoder.jp/contests/abc044/tasks/abc044_a
A - Tak and Hotels (ABC Edit)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 1
軒のホテルがあります。このホテルの宿泊費は、次のようになっています。最初の K
泊までは、1 泊あたり X 円K+1 泊目以降は、1 泊あたり Y 円高橋君は、このホテルに N
泊連続で宿泊することにしました。高橋君の宿泊費は合計で何円になるか求めてください。
制約1 \leq N, K \leq 100001 \leq Y < X \leq 10000N,\,K,\,X,\,Y
はいずれも整数である入力入力は以下の形式で標準入力から与えられる。NKXY出力高橋君の宿泊費の合計金額を表す整数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc044/submissions/4195311
// 提出ID : 4195311
// 問題ID : abc044_a
// コンテストID : abc044
// ユーザID : xryuseix
// コード長 : 338
// 実行時間 : 2



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

  int n, k, x, y, ans = 0;
  cin >> n >> k >> x >> y;
  for (int i = 1; i <= n; i++) {
    if (i <= k)
      ans += x;
    else
      ans += y;
  }
  cout << ans << endl;

  return 0;
}
