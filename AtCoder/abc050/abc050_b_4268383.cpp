/*
問題文の引用元：https://atcoder.jp/contests/abc050/tasks/abc050_b
B - Contest with Drinks EasyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :
joisinoお姉ちゃんは、あるプログラミングコンテストの決勝を控えています。このコンテストでは、N
問の問題が用意されており、それらには 1～N
の番号がついています。joisinoお姉ちゃんは、問題 i(1≦i≦N) を解くのにかかる時間が
T_i 秒であることを知っています。また、このコンテストでは、M
種類のドリンクが提供されており、1～M の番号がついています。そして、ドリンク
i(1≦i≦M) を飲むと、脳が刺激され、問題 P_i を解くのにかかる時間が X_i
秒になります。他の問題を解くのにかかる時間に変化はありません。コンテスタントは、コンテスト開始前にいずれかのドリンクを
1
本だけ飲むことができます。joisinoお姉ちゃんは、それぞれのドリンクについて、それを飲んだ際に、全ての問題を解くのに何秒必要なのかを知りたくなりました。全ての問題を解くのに必要な時間とは、それぞれの問題を解くのにかかる時間の合計です。あなたの仕事は、joisinoお姉ちゃんの代わりにこれを求めるプログラムを作成することです。
制約入力は全て整数である1≦N≦1001≦T_i≦10^51≦M≦1001≦P_i≦N1≦X_i≦10^5入力入力は以下の形式で標準入力から与えられる。NT_1
T_2 ... T_NMP_1 X_1P_2 X_2:P_M
X_M出力それぞれのドリンクについて、それを飲んだ際に全ての問題を解くのに必要な時間を求め、順番に
1 行ずつ出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc050/submissions/4268383
// 提出ID : 4268383
// 問題ID : abc050_b
// コンテストID : abc050
// ユーザID : xryuseix
// コード長 : 775
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, n, m, j;
  cin >> n;
  int t[n];
  for (i = 0; i < n; i++)
    cin >> t[i];
  cin >> m;
  int p, x;
  for (i = 0; i < m; i++) {
    int ans = 0;
    cin >> p >> x;
    for (j = 0; j < n; j++) {
      if (p - 1 == j)
        ans += x;
      else
        ans += t[j];
    }
    cout << ans << endl;
  }

  return 0;
}