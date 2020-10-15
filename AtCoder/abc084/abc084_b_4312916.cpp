/*
問題文の引用元：https://atcoder.jp/contests/abc084/tasks/abc084_b
B - Postal CodeEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : Atcoder国では、郵便番号は A+B+1 文字からなり、A+1 文字目はハイフン
-、それ以外の全ての文字は 0 以上 9 以下の数字です。文字列 S
が与えられるので、Atcoder国の郵便番号の形式を満たすかどうか判定してください。
制約1≦A,B≦5|S|=A+B+1S は 0 以上 9 以下の数字、およびハイフン -
からなる入力入力は以下の形式で標準入力から与えられる。A BS出力S
がAtcoder国の郵便番号の形式を満たすならば Yes 、そうでなければ No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc084/submissions/4312916
// 提出ID : 4312916
// 問題ID : abc084_b
// コンテストID : abc084
// ユーザID : xryuseix
// コード長 : 739
// 実行時間 : 1



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

  int i, a, b;
  bool ch = true;
  ;
  string s;

  cin >> a >> b >> s;
  for (i = 0; i < s.length(); i++)
    if (i != a && (s[i] < '0' || s[i] > '9'))
      ch = false;
  if (ch && s[a] == '-')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
