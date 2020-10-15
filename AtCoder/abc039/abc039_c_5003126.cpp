/*
問題文の引用元：https://atcoder.jp/contests/abc039/tasks/abc039_c
C - ピアニスト高橋君Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は青木君に突然魔法で小さくされ、ピアノの上に乗せられてしまいました。高橋君は、今ピアノのある鍵盤の上に立っていますが、どの鍵盤の上にいるのかを知りたいです。高橋君は、自分の今いる鍵盤から右
20
個の鍵盤の色を調べました。高橋君のいる鍵盤の音階を調べてください。調べた鍵盤の色は、W、B
からなる文字列 S として与えられ、W は白色、B
は黒色を表します。そして、高橋くんのいる鍵盤の色は文字列の先頭に対応します。なお、ピアノの鍵盤は下図のように、色は"白黒白黒白白黒白黒白黒白"、音階は
"ド ド# レ レ# ミ ファ ファ# ソ ソ# ラ ラ# シ" を繰り返しています。
制約与えられる鍵盤の色は正しい高橋君は白い鍵盤の上に立っているS は 20 文字の W B
からなる文字列である入力入力は以下の形式で標準入力から与えられる。S出力高橋君のいる鍵盤の音階が、"ド"
ならば Do"レ" ならば Re"ミ" ならば Mi"ファ" ならば Fa"ソ" ならば So"ラ" ならば
La"シ" ならば Siと出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/abc039/submissions/5003126
// 提出ID : 5003126
// 問題ID : abc039_c
// コンテストID : abc039
// ユーザID : xryuseix
// コード長 : 1133
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

  string order = "WBWBWWBWBWBW",
         onkai[] = {"Do",  "Do#", "Re",  "Re#", "Mi",  "Fa",
                    "Fa#", "So",  "So#", "La",  "La#", "Si"};
  string s;
  cin >> s;
  s = s.substr(0, 12);
  int i;
  for (i = 0; i < 12; i++) {
    if (s == order.substr(i) + order.substr(0, i)) {
      cout << onkai[i] << endl;
      break;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
