/*
問題文の引用元：https://atcoder.jp/contests/aising2019/tasks/aising2019_b
B - ContestsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : あなたはプログラミングコンテストを開催するため問題を N
問作成しました。このうち i 問目をコンテストに出題する場合、
配点は P_i
点となります。これらの問題を使って、以下の条件を満たすコンテストをできるだけ多く開催したいと思います。異なるコンテストの間で問題の重複があってはいけません。最大で何回のコンテストを開催できますか。問題が
3 問出題され、1 問目の
配点は A 点以下、2 問目の
配点は A + 1 点以上 B 点以下、3 問目の
配点は B + 1 点以上である。
制約3 \leq N \leq 1001 \leq P_i \leq 20 (1 \leq i \leq N)1 \leq A < B <
20入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA
BP_1 P_2 ... P_N出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/aising2019/submissions/4194664
// 提出ID : 4194664
// 問題ID : aising2019_b
// コンテストID : aising2019
// ユーザID : xryuseix
// コード長 : 460
// 実行時間 : 1



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

  int i, n, a, b, ans = 0;
  cin >> n >> a >> b;
  int p[n];
  for (i = 0; i < n; i++)
    cin >> p[i];
  int numa = 0, numb = 0, numc = 0;
  for (i = 0; i < n; i++) {
    if (p[i] <= a)
      numa++;
    if (a < p[i] && p[i] <= b)
      numb++;
    if (p[i] > b)
      numc++;
  }
  cout << min(numa, min(numb, numc)) << endl;

  return 0;
}
