/*
問題文の引用元：https://atcoder.jp/contests/abc011/tasks/abc011_2
B - 名前の確認Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
新米プログラマーであるあなたは、簡単な文字列操作を行うプログラムを作成する仕事を任されました。名前が入力として与えられるので、正しいフォーマットに直すプログラムです。正しい名前のフォーマットは、以下の通りです。1
文字目は大文字アルファベット2
文字目以降は小文字アルファベット要件を満たすプログラムを作成してください。入力入力は以下の形式で標準入力から与えられる。S1
行目には、名前 S (1 ≦ |S| ≦ 12) が与えられる。S
に含まれる文字は、全て小文字、もしくは大文字のアルファベットであることが保障されている。出力正しいフォーマットに変換した文字列を
1 行で出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc011/submissions/4593328
// 提出ID : 4593328
// 問題ID : abc011_2
// コンテストID : abc011
// ユーザID : xryuseix
// コード長 : 999
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

  string s;
  cin >> s;
  int i;
  s[0] = toupper(s[0]);
  for (i = 1; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }

  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
