/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_b
B - Frog 2Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : N 個の足場があります。足場には 1, 2, \ldots, N
と番号が振られています。各 i (1 \leq i \leq N) について、足場 i の高さは h_i
です。最初、足場 1 にカエルがいます。カエルは次の行動を何回か繰り返し、足場 N
まで辿り着こうとしています。足場 i にいるとき、足場 i + 1, i + 2, \ldots, i + K
のどれかへジャンプする。 このとき、ジャンプ先の足場を j とすると、コスト |h_i -
h_j| を支払う。カエルが足場 N
に辿り着くまでに支払うコストの総和の最小値を求めてください。
制約入力はすべて整数である。2 \leq N \leq 10^51 \leq K \leq 1001 \leq h_i \leq
10^4入力入力は以下の形式で標準入力から与えられる。N Kh_1 h_2 \ldots
h_N出力カエルが支払うコストの総和の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/4231914
// 提出ID : 4231914
// 問題ID : dp_b
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 821
// 実行時間 : 29



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
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

  int i, j, n, k;
  cin >> n >> k;
  long long dp[n], h[n];
  for (i = 0; i < n; i++) {
    cin >> h[i];
    dp[i] = INF;
  }
  dp[0] = 0;
  //	for(i=0;i<n;i++)cout<<dp[i]<<" ";
  //	cout<<endl;
  for (i = 0; i < n; i++) {
    for (j = 1; j <= k && i + j < n; j++) {
      //			cout<<dp[i+j]<<"
      //"<<dp[i]+abs(h[i+j]-h[i])<<endl;
      chmin(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
    }
  }
  //	for(i=0;i<n;i++)cout<<dp[i]<<" ";
  cout << dp[n - 1] << endl;

  return 0;
}
