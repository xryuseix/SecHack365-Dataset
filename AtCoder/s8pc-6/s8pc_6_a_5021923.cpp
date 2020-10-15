/*
問題文の引用元：https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_a
A - E869120, who Leaps through TimeEditorial
Time Limit : 1 sec / Memory Limit : 976 MB
配点：200 点
問題文 : E869120 君は、高橋王国に住んでいます。彼は、AtCodeer
株式会社で働いています。この会社では、毎日時刻 0
に必ず出席しなければならない会議が始まります。高橋王国には N
個の都市があり、西から順に都市 1, 2, 3, ..., N
と番号付けられています。彼の家は都市 1 であり、彼の会社は都市 N です。また
高橋王国には都市 i と i+1 (1 \leq i \leq N - 1)
を双方向に結ぶ道路があり、この道路で移動するのに A_i
単位時間かかります。ただし、1 単位時間は時刻 0 から 1 までの時間とします。  2031
年のある日の事です…　彼は起きて時計を確認したら、なんと時刻 0
でした！このままだと会議に遅れてしまいます。AtCodeer
株式会社は遅刻に厳しいので、会議に一回でも遅れると、叱責・減給どころでは済みません。一発で解雇になってしまいます！しかし、彼は特殊能力を持っています。これは「タイムリープ」であり、この能力を
1 回使うと時刻が T
単位時間戻されます。「タイムリープ」はいずれかの都市にいるときに使うことができます。
会議に遅刻しないようにする、すなわち都市 N にある会社に時刻 0
またはそれ以前に到着するためには、最低何回の「タイムリープ」を使う必要があるか、求めてください。ただし、彼は起きた時刻
0 に行動を開始することが出来るとします。
制約N は 2 以上 100 以下の整数T は 1 以上 100 以下の整数A_i は 1 以上 100
以下の整数部分点この問題はいくつかの小課題に分けられ、その小課題のすべてのテストケースに正解した場合に「この小課題に正解した」とみなされます。提出したソースコードの得点は、正解した小課題の点数の合計となります。
(100 点)：N = 2, T = 1(100 点)：追加の
制約はない入力入力は以下の形式で標準入力から与えられます。  N TA_1 A_2 A_3 ...
A_{N - 1}出力使わなければならない「タイムリープ」の最小回数を、1
行で出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/s8pc-6/submissions/5021923
// 提出ID : 5021923
// 問題ID : s8pc_6_a
// コンテストID : s8pc-6
// ユーザID : xryuseix
// コード長 : 1002
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

  int i, n, t, a, sum = 0;
  cin >> n >> t;
  rep(i, n - 1) {
    cin >> a;
    sum += a;
  }
  fin(ceil((double)sum / (double)t));

  //////////////////////////////////////////////////////
  return 0;
}
