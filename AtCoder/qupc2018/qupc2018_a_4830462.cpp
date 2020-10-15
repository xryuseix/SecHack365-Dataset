/*
問題文の引用元：https://atcoder.jp/contests/qupc2018/tasks/qupc2018_a
A - QUPCEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 2014 年に 1 回目の QUPC (九州大学プログラミングコンテストの略称)
が開催されてから 2018 年に 2 回目の QUPC が開催されるまで、問題セットの準備に 4
年間かかりました。このペースでいくと 3 回目の QUPC が開催されるのは 2022
年になりそうです。整数 N が与えられるので、2014 年から 4 年間隔で QUPC
が開催される場合、N 回目の QUPC が開催されるのは何年になるかを求めてください。
制約3 \leq N \leq 1333N
は整数入力入力は以下の形式で標準入力から与えられる。N出力N 回目の QUPC
が開催されるのは何年かを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/qupc2018/submissions/4830462
// 提出ID : 4830462
// 問題ID : qupc2018_a
// コンテストID : qupc2018
// ユーザID : xryuseix
// コード長 : 906
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

  int n;
  cin >> n;
  cout << (n - 1) * 4 + 2014 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
