/*
問題文の引用元：https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_b
B - AtCoder MarketEditorial
Time Limit : 1 sec / Memory Limit : 976 MB
配点：300 点
問題文 : AtCoder マーケットは、1 \ 000 \ 000 \ 000 個のマスが 1
列につながったマス目で表されるスーパーマーケットである。ここでは、左から i
番目のマスを「マス i」とする。  ある日、N 人の買い物客が AtCoder
マーケットに来る。i 人目の買い物客は、マス A_i にある品物とマス B_i
にある品物を買う。  square1001 君は、AtCoder マーケットに入口と出口を 1
つずつ設置することにした。入口と出口はいずれかのマス目に設置する。入口と出口は同じ場所にあってもよい。
そのとき、買い物客は次のような経路で移動する。  まず、入口からスタートする。マス
A_i と B_i を経由して、出口でゴールする。
すべての買い物客について、隣り合ったマス目に進むのに 1
秒かかるとき、最適に入口と出口を設置したときの「すべての買い物客の移動時間の合計」の最小値を求めなさい。
制約1 \leq N \leq 301 \leq A_i < B_i \leq 1 \ 000 \ 000 \
000小課題・得点この問題はいくつかの小課題に分けられ、その小課題のすべてのテストケースに正解した場合に「この小課題に正解した」とみなされます。提出したソースコードの得点は、正解した小課題の点数の合計となります。
(195 点)：1 \leq A_i < B_i \leq 100
を満たす。また、移動時間が最小となるような入口と出口のマスは、マス 1, 2, 3, ...,
100 のどれかである。(105 点)：追加の
制約はない。入力入力は以下の形式で標準入力から与えられます。  NA_1 B_1A_2 B_2 :
:A_N
B_N出力「すべての買い物客の移動時間の合計」の最小値を、秒単位で出力してください。
注意この問題の
制約上、答えが 32
ビット整数型の範囲に収まらない可能性があることに注意してください。例えば C / C++
では、long long 型を使うなどで、64 ビット整数型を使用することができます。
// ソースコードの引用元 : https://atcoder.jp/contests/s8pc-6/submissions/5022026
// 提出ID : 5022026
// 問題ID : s8pc_6_b
// コンテストID : s8pc-6
// ユーザID : xryuseix
// コード長 : 1237
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

  ll tmp, ans = LLINF;
  int n, i, j, k;
  cin >> n;
  int a[n][2];
  rep(i, n) cin >> a[i][0] >> a[i][1];
  for (i = 0; i < n; i++) {   //入口
    for (j = 0; j < n; j++) { //出口
      tmp = 0;
      for (k = 0; k < n; k++) {
        tmp += abs(a[k][0] - a[i][0]) + abs(a[k][1] - a[j][1]);
        tmp += abs(a[k][0] - a[k][1]);
      }
      //			cout<<i<<" "<<j<<" "<<tmp<<endl;
      ans = min(tmp, ans);
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
