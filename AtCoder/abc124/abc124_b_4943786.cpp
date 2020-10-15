/*
問題文の引用元：https://atcoder.jp/contests/abc124/tasks/abc124_b
B - Great Ocean ViewEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 東西に N
個の山が連なっており、西の果てには広大な海が広がっています。各山頂には旅館があり、あなたは海を眺められる旅館を選ぶことにしました。西から
i 番目の山の高さは H_i です。西から 1
番目の山頂にある旅館からは必ず海を眺めることができます。西から i (i = 2, 3, ...,
N) 番目の山頂にある旅館については、H_1 \leq H_i, H_2 \leq H_i, ..., かつ H_{i-1}
\leq H_i のとき、その旅館から海を眺めることができます。これら N
個の旅館のうち、海を眺められる旅館はいくつあるでしょうか。
制約入力は全て整数である。1 \leq N \leq 201 \leq H_i \leq
100入力入力は以下の形式で標準入力から与えられる。NH_1 H_2 ...
H_N出力海を眺められる旅館の数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc124/submissions/4943786
// 提出ID : 4943786
// 問題ID : abc124_b
// コンテストID : abc124
// ユーザID : xryuseix
// コード長 : 1065
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

  int i, j, n, ans = 0;
  cin >> n;
  int a[n];
  rep(i, n) cin >> a[i];
  for (i = 0; i < n; i++) {
    bool ch = true;
    for (j = i - 1; j >= 0; j--) {
      if (a[j] > a[i])
        ch = false;
    }
    if (ch)
      ans++;
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
