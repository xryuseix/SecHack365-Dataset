/*
問題文の引用元：https://atcoder.jp/contests/abc069/tasks/abc069_b
B - i18nEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : internationalization という英単語は、i18n
と略されることがあります。これは、先頭文字 i と末尾文字 n の間に 18
文字が挟まっていることに由来します。長さ 3 以上の英小文字のみからなる文字列 s
が与えられます。同様の規則によって s を略してください。
制約3 ≤ |s| ≤ 100 (ただし、|s| は s の長さを表す。)s
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。s出力s
を略したものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc069/submissions/4299087
// 提出ID : 4299087
// 問題ID : abc069_b
// コンテストID : abc069
// ユーザID : xryuseix
// コード長 : 630
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

  string s;
  cin >> s;
  cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;

  return 0;
}
