/*
問題文の引用元：https://atcoder.jp/contests/abc124/tasks/abc124_c
C - Coloring ColorfullyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 左右一列に N 枚のタイルが並んでおり、各タイルの初めの色は長さ N
の文字列 S で表されます。左から i 番目のタイルは、S の i 番目の文字が 0
のとき黒色で、1
のとき白色で塗られています。あなたは、いくつかのタイルを黒色または白色に塗り替えることで、どの隣り合う
2
枚のタイルも異なる色で塗られているようにしたいです。最小で何枚のタイルを塗り替えることで条件を満たすようにできるでしょうか。
制約1 \leq |S| \leq 10^5S_i は 0 または 1
である。入力入力は以下の形式で標準入力から与えられる。S出力条件を満たすために塗り替えるタイルの枚数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc124/submissions/4945784
// 提出ID : 4945784
// 問題ID : abc124_c
// コンテストID : abc124
// ユーザID : xryuseix
// コード長 : 1136
// 実行時間 : 2



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

  string s;
  int i, a[2] = {0};
  cin >> s;
  for (i = 0; i < s.length(); i++) {
    if (i % 2 == 0 && s[i] != '1')
      a[0]++;
    if (i % 2 == 1 && s[i] != '0')
      a[0]++;
  }
  for (i = 0; i < s.length(); i++) {
    if (i % 2 == 1 && s[i] != '1')
      a[1]++;
    if (i % 2 == 0 && s[i] != '0')
      a[1]++;
  }
  cout << min(a[0], a[1]) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
