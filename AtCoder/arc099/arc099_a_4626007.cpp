/*
問題文の引用元：https://atcoder.jp/contests/arc099/tasks/arc099_a
C - MinimizationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 長さ N の数列 A_1, A_2, ..., A_N があります．最初，この数列の要素は 1,
2, ..., N
を並び替えたものになっています．スヌケ君は，この数列に対して次の操作を行うことができます．数列のうち，連続した
K
個の要素を選ぶ．その後，選んだ要素それぞれの値を，選んだ要素の中の最小値で置き換える．スヌケ君は，上の操作を何回か繰り返すことで，この数列の要素をすべて等しくしたいです．必要な操作の回数の最小値を求めてください．この問題の
制約の下，このようなことは必ず可能であることが証明できます．
制約2 \leq K \leq N \leq 100000A_1, A_2, ..., A_N は 1, 2, ..., N
の並び替え入力入力は以下の形式で標準入力から与えられる．N KA_1 A_2 ...
A_N出力必要な操作の回数の最小値を出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/arc099/submissions/4626007
// 提出ID : 4626007
// 問題ID : arc099_a
// コンテストID : arc099
// ユーザID : xryuseix
// コード長 : 1042
// 実行時間 : 9



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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
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
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, k, i, ipos, ans = 0, ansmin = 100000000;
  cin >> n >> k;
  int a[n];
  rep(i, n) {
    cin >> a[i];
    if (a[i] == 1)
      ipos = i;
  }
  int l = ipos, r = (n - 1 - ipos);

  cout << (n - 2) / (k - 1) + 1 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
