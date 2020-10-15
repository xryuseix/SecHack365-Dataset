/*
問題文の引用元：https://atcoder.jp/contests/abc082/tasks/arc087_a
C - Good SequenceEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 長さ N の正整数の列 a = (a_1, a_2, ..., a_N)
が与えられます。あなたの目標は、a のうちいくつかの要素を取り除き、a を 良い数列
にすることです。ここで、数列 b が 良い数列
であるとは、次の条件が成り立つことです。b の各要素 x について、b に値 x
はちょうど x 個含まれる。例えば、(3, 3, 3), (4, 2, 4, 1, 4, 2, 4), () (空の数列)
は良い数列です。一方、(3, 3, 3, 3), (2, 4, 1, 4, 2) は良い数列ではありません。a
を良い数列にするために取り除くべき要素の個数の最小値を求めてください。
制約1 \leq N \leq 10^5a_i は整数である。1 \leq a_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 ... a_N出力a
を良い数列にするために取り除くべき要素の個数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc082/submissions/5547419
// 提出ID : 5547419
// 問題ID : arc087_a
// コンテストID : abc082
// ユーザID : xryuseix
// コード長 : 1457
// 実行時間 : 17



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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
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
  int i, j;
  int ans = 0, tmp;
  vector<int> v(n, 0);
  rep(i, n) cin >> v[i];
  sort(v.begin(), v.end());
  rep(i, n) {
    tmp = v[i];
    j = 0;
    while (i + j < n && v[i + j] == v[i]) {
      j++;
    }
    if (j > tmp)
      ans += j - tmp;
    else if (j < tmp)
      ans += j;
    i += j - 1;
    //		cout<<ans<<endl;
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}