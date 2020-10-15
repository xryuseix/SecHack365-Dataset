/*
問題文の引用元：https://atcoder.jp/contests/abc063/tasks/abc063_b
B - VariedEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 英小文字からなる文字列 S が与えられます。S
に含まれる文字がすべて異なるか判定してください。
制約2 ≤ |S| ≤ 26, ここで |S| は S の長さを表す。S
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。S出力S
に含まれる文字がすべて異なる場合は yes（英小文字）、そうでない場合は no
と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc063/submissions/4276876
// 提出ID : 4276876
// 問題ID : abc063_b
// コンテストID : abc063
// ユーザID : xryuseix
// コード長 : 832
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

  int i, m, n;
  string s;
  cin >> s;
  set<char> p;
  set<char>::iterator it;
  for (i = 0; i < s.length(); i++)
    p.insert(s[i]);
  int charnum = 0;
  for (it = p.begin(); it != p.end(); it++) {
    charnum++;
  }
  //	cout<<charnum<<endl;
  if (s.length() == charnum)
    cout << "yes" << endl;
  else
    cout << "no" << endl;

  return 0;
}