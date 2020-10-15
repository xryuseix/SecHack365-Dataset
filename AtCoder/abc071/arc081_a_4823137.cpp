/*
問題文の引用元：https://atcoder.jp/contests/abc071/tasks/arc081_a
C - Make a RectangleEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 太さが無視できる棒が N 本あります．i 番目の棒の長さは A_i
です．すぬけ君は，これらの棒から 4
本の異なる棒を選び，それらの棒を辺として長方形（正方形を含む）を作りたいです．作ることができる最大の長方形の面積を求めてください．
制約4 \leq N \leq 10^51 \leq A_i \leq 10^9A_i
は整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力すぬけ君が作ることのできる最大の長方形の面積を出力せよ．ただし，長方形を作れない場合は，0
を出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/abc071/submissions/4823137
// 提出ID : 4823137
// 問題ID : arc081_a
// コンテストID : abc071
// ユーザID : xryuseix
// コード長 : 1144
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

  int i, n;
  cin >> n;
  int a[n];
  int first = 0, second = 0;
  rep(i, n) cin >> a[i];
  sort(a, a + n);
  for (i = n - 1; i > 0; i--) {
    if (a[i] == a[i - 1]) {
      if (first == 0) {
        first = a[i];
      } else {
        second = a[i];
        break;
      }
      i--;
    }
  }

  cout << (ll)first * second << endl;

  //////////////////////////////////////////////////////
  return 0;
}
