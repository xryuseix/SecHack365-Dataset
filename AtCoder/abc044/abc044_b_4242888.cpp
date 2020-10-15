/*
問題文の引用元：https://atcoder.jp/contests/abc044/tasks/abc044_b
B - Beautiful StringsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : w を、英小文字のみからなる文字列とします。w
が以下の条件を満たすならば、w
を美しい文字列と呼ぶことにします。どの英小文字も、w 中に偶数回出現する。文字列 w
が与えられます。w が美しい文字列かどうか判定してください。
制約1 \leq |w| \leq 100w は英小文字 (a-z)
のみからなる文字列である入力入力は以下の形式で標準入力から与えられる。w出力w
が美しい文字列ならば Yes を、それ以外の場合は No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc044/submissions/4242888
// 提出ID : 4242888
// 問題ID : abc044_b
// コンテストID : abc044
// ユーザID : xryuseix
// コード長 : 825
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
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

  string s;
  int i;
  cin >> s;
  if (s.length() % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }
  char ch[s.length()];
  for (i = 0; i < s.length(); i++)
    ch[i] = s[i];
  sort(ch, ch + s.length());
  for (i = 0; i < s.length(); i += 2) {
    if (ch[i] != ch[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
