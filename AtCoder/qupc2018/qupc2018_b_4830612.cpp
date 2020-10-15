/*
問題文の引用元：https://atcoder.jp/contests/qupc2018/tasks/qupc2018_b
B - Tapu & TapiEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : Treeone 君は 100 円玉を A 枚、10 円玉を B 枚、1 円玉を C
枚持っています。小銭は邪魔なので たぷちゃん と たぴちゃん の 2
人にお小遣いとしてあげることにしました。しかし、2
人は仲が悪いので同じ金額をもらえないと喧嘩してしまいます。全ての硬貨をそれぞれ 2
人のどちらかにあげるとき、2
人に同じ金額のお小遣いをあげることができるかどうかを判定してください。入力は Q
個のデータセットからなります。
制約1 \leq Q \leq 500 \leq A, B, C \leq 10^91 \leq A + B +
C入力は全て整数部分点A, B, C \leq 100 を満たすデータセットに正解した場合、20
点が与えられる。入力入力は以下の形式で標準入力から与えられる。QA_1 B_1 C_1A_2
B_2 C_2:A_Q B_Q C_Qi 番目のデータセットでは、A = A_i, B = B_i, C = C_i
である。出力Q 行出力せよ。i 行目には、i 番目のデータセットで 2
人に同じ金額のお小遣いをあげることができる場合 Yes、そうでない場合 No
と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/qupc2018/submissions/4830612
// 提出ID : 4830612
// 問題ID : qupc2018_b
// コンテストID : qupc2018
// ユーザID : xryuseix
// コード長 : 1214
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll i, j, a, b, c, mny, q;
  cin >> q;
  for (i = 0; i < q; i++) {
    cin >> a >> b >> c;
    mny = a * 100 + b * 10 + c;
    if (mny % 2 != 0) {
      cout << "No" << endl;
      continue;
    }
    mny /= 2;
    j = mny / 100;
    if (j > a)
      j = a;
    mny -= j * 100;

    j = mny / 10;
    if (j > b)
      j = b;
    mny -= j * 10;

    j = mny;
    if (j > c)
      j = c;
    mny -= j;

    if (mny == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
