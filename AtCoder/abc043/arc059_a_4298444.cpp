/*
問題文の引用元：https://atcoder.jp/contests/abc043/tasks/arc059_a
C - Be TogetherEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : N 個の整数 a_1,a_2,..,a_N
が与えられます。えび君はこれらを書き換えて全て同じ整数にしようとしています。各a_i
(1≦i≦N)は高々一回しか書き換えられません(書き換えなくても良い)。整数xを整数yに書き換えるとき、コストが(x-y)^2かかります。仮にa_i=a_j
(i≠j)だとしても、ひとつ分のコストで同時に書き換えることは出来ません(入出力例2
を参照)。えび君が目的を達成するのに必要なコストの総和の最小値を求めてください。
制約1≦N≦100-100≦a_i≦100入力入力は以下の形式で標準入力から与えられる。Na_1 a_2
...
a_N出力えび君が全てを同じ整数に書き換えるのに必要なコストの総和の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc043/submissions/4298444
// 提出ID : 4298444
// 問題ID : arc059_a
// コンテストID : abc043
// ユーザID : xryuseix
// コード長 : 764
// 実行時間 : 2



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

  int i, n;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  double ave = 0;
  for (i = 0; i < n; i++)
    ave += a[i];
  ave = round(ave / (double)n);
  int ans = 0;
  for (i = 0; i < n; i++) {
    ans += (a[i] - ave) * (a[i] - ave);
  }
  cout << ans << endl;

  return 0;
}
