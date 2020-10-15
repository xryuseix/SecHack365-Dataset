/*
問題文の引用元：https://atcoder.jp/contests/exawizards2019/tasks/exawizards2019_a
A - Regular TriangleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 3 つの整数 A,B,C が与えられます。三辺の長さがそれぞれ A,B,C
であるような正三角形が存在するかどうか判定してください。
制約入力は全て整数である。1 \leq A,B,C \leq
100入力入力は以下の形式で標準入力から与えられる。A B C出力三辺の長さが A,B,C
であるような正三角形が存在するなら Yes を、そうでなければ No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/exawizards2019/submissions/4766033
// 提出ID : 4766033
// 問題ID : exawizards2019_a
// コンテストID : exawizards2019
// ユーザID : xryuseix
// コード長 : 1070
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

  int i, j;
  string s;
  //	char c;

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  if (a[0] == a[1] && a[1] == a[2])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
