/*
問題文の引用元：https://atcoder.jp/contests/abc121/tasks/abc121_b
B - Can you solve this?Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : N 個のソースコードがあり、i 個目のソースコードの特徴は A_{i1}, A_{i2},
..., A_{iM} の M 個の整数で表されます。また、整数 B_1, B_2, ..., B_M と 整数 C
が与えられます。A_{i1} B_1 + A_{i2} B_2 + ... + A_{iM} B_M + C > 0
のときに限り、i 個目のソースコードはこの問題に正答するソースコードです。N
個のソースコードのうち、この問題に正答するソースコードの個数を求めてください。
制約入力は全て整数である。1 \leq N, M \leq 20-100 \leq A_{ij} \leq 100-100 \leq
B_i \leq 100-100 \leq C \leq 100入力入力は以下の形式で標準入力から与えられる。N
M CB_1 B_2 ... B_MA_{11} A_{12} ... A_{1M}A_{21} A_{22} ... A_{2M}\vdotsA_{N1}
A_{N2} ... A_{NM}出力N
個のソースコードのうち、この問題に正答するソースコードの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc121/submissions/4518861
// 提出ID : 4518861
// 問題ID : abc121_b
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 1055
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
#include <stack>
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
#define end(ans) cout << (ans) << endl
#define INF INT_MAX;
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

  int i, j, n, m, c;
  cin >> n >> m >> c;
  int b[m], a[n][m], ans = 0, sum;
  for (i = 0; i < m; i++)
    cin >> b[i];
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      cin >> a[i][j];
  //    for(i=0;i<n;i++)for(j=0;j<m;j++)cout<<a[i][j]<<endl;;

  for (i = 0; i < n; i++) { // a決め
    sum = 0;
    for (j = 0; j < m; j++) {
      sum += a[i][j] * b[j];
    }
    //		cout<<sum<<endl;
    if (sum + c > 0)
      ans++;
  }
  cout << ans << endl;

  return 0;
}
