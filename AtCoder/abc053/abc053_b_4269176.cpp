/*
問題文の引用元：https://atcoder.jp/contests/abc053/tasks/abc053_b
B - A to Z StringEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけくんは文字列 s
の連続した一部分(部分文字列という)を取り出して先頭が A であり末尾が Z
であるような文字列を作ることにしました。すぬけくんが作ることのできる文字列の最大の長さを求めてください。なお，s
には先頭が A であり末尾が Z
であるような部分文字列が必ず存在することが保証されます。
制約1 ≦ |s| ≦ 200{,}000s は英大文字のみからなるs には先頭が A であり末尾が Z
であるような部分文字列が必ず存在する入力入力は以下の形式で標準入力から与えられる。s出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc053/submissions/4269176
// 提出ID : 4269176
// 問題ID : abc053_b
// コンテストID : abc053
// ユーザID : xryuseix
// コード長 : 774
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, n, left, right;
  string s;
  cin >> s;
  for (i = 0; i < s.length(); i++) {
    if (s[i] == 'A') {
      left = i;
      break;
    }
  }
  for (i = s.length(); i >= 0; i--) {
    if (s[i] == 'Z') {
      right = i;
      break;
    }
  }
  cout << right - left + 1 << endl;

  return 0;
}
