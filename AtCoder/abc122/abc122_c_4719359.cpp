/*
問題文の引用元：https://atcoder.jp/contests/abc122/tasks/abc122_c
C - GeT ACEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : A, C, G, T からなる長さ N の文字列 S が与えられます。以下の Q
個の問いに答えてください。問 i (1 \leq i \leq Q): 整数 l_i, r_i (1 \leq l_i <
r_i \leq N) が与えられる。S の先頭から l_i 文字目から r_i 文字目までの
(両端含む) 部分文字列を考える。この文字列に AC
は部分文字列として何回現れるか。注記文字列 T の部分文字列とは、T
の先頭と末尾から 0 文字以上を取り去って得られる文字列です。例えば、ATCODER
の部分文字列には TCO, AT, CODER, ATCODER,  (空文字列) が含まれ、AC
は含まれません。
制約2 \leq N \leq 10^51 \leq Q \leq 10^5S は長さ N の文字列である。S の各文字は
A, C, G, T のいずれかである。1 \leq l_i < r_i \leq
N入力入力は以下の形式で標準入力から与えられる。N QSl_1 r_1:l_Q r_Q出力Q
行出力せよ。i 行目に問 i への答えを出力すること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc122/submissions/4719359
// 提出ID : 4719359
// 問題ID : abc122_c
// コンテストID : abc122
// ユーザID : xryuseix
// コード長 : 1239
// 実行時間 : 173



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

  int n, q, i;
  string s;
  vector<int> v, w;

  cin >> n >> q >> s;
  for (i = 0; i < s.length() - 1; i++) {
    if (s[i] == 'A' && s[i + 1] == 'C') {
      v.push_back(1);
    } else
      v.push_back(0);
  }
  w.push_back(0);
  for (i = 0; i < v.size(); i++) {
    w.push_back(v[i] + w[i]);
  }
  //	for(i=0;i<w.size();i++)cout<<w[i]<<endl;
  int r, l;
  for (i = 0; i < q; i++) {
    cin >> l >> r;
    cout << w[r - 1] - w[l - 1] << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}