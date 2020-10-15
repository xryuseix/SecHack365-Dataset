/*
問題文の引用元：https://atcoder.jp/contests/abc120/tasks/abc120_c
C - UnificationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 机の上に N 個のキューブが縦に積まれています。長さ N の文字列 S
が与えられます。下から i 番目のキューブの色は、S の i 文字目が 0 のとき赤色、1
のとき青色です。あなたは、赤色のキューブと青色のキューブが隣り合っているような部分を選んで、それら
2
個のキューブを取り除く操作を何度でも行えます。このとき、取り除いたキューブの上にあったキューブは真下の物体の上に落下します。最大で何個のキューブを取り除けるでしょうか。
制約1 \leq N \leq 10^5|S| = NS の各文字は 0 または 1
である。入力入力は以下の形式で標準入力から与えられる。S出力最大で何個のキューブを取り除けるかを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc120/submissions/4450732
// 提出ID : 4450732
// 問題ID : abc120_c
// コンテストID : abc120
// ユーザID : xryuseix
// コード長 : 875
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
#include <stack>
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int ans = 0, i, tmp;
  string t;
  cin >> t;
  stack<int> s;
  for (i = 0; i < t.length(); i++) {
    s.push(t[i] - '0');
    if (s.size() >= 2) {
      tmp = s.top();
      s.pop();
      if (tmp != s.top()) {
        s.pop();
        ans += 2;
      } else {
        s.push(tmp);
      }
    }
  }
  cout << ans << endl;

  return 0;
}