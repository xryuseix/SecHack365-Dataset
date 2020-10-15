/*
問題文の引用元：https://atcoder.jp/contests/agc006/tasks/agc006_a
A - Prefix and SuffixEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけ君は次の条件を満たす文字列に興味があります。長さ N
以上である。先頭 N 文字が文字列 s に一致する。末尾 N 文字が文字列 t
に一致する。条件を満たす文字列のうち、最も短いものの長さを求めてください。
制約1≤N≤100s, t は長さ N である。s, t
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。Nst出力条件を満たす文字列のうち、最も短いものの長さを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc006/submissions/4321231
// 提出ID : 4321231
// 問題ID : agc006_a
// コンテストID : agc006
// ユーザID : xryuseix
// コード長 : 878
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, i;
  string s, t;
  cin >> n >> s >> t;
  if (s == t) {
    cout << s.length() << endl;
    return 0;
  }
  if (s.length() == 1) {
    cout << 2 << endl;
    return 0;
  }
  for (i = 1; i < n; i++) {
    if (s.substr(i, n - i) == t.substr(0, n - i)) {
      s += t.substr(n - i, i);
      cout << s.length() << endl;
      return 0;
    }
  }
  cout << n * 2 << endl;

  return 0;
}
