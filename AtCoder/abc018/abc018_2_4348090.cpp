/*
問題文の引用元：https://atcoder.jp/contests/abc018/tasks/abc018_2
B - 文字列の反転Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 半角の小文字アルファベットのみからなる文字列 S が与えられる。文字列 S
に対して以下の操作 1 から操作 N までを番号の昇順に行う。操作 i : 左から l_i
番目の文字を左端、左から r_i (1 ≦ l_i ＜ r_i ≦ |S|)
番目の文字を右端とした部分文字列を逆順にする。例えば，文字列 abcdef
に対して、左から 3 番目の文字 c を左端、左から 5 番目の文字 e
を右端とした部分文字列を逆順にすると、文字列 abedcf が得られる。操作 1 から操作
N
までを番号の昇順に行った後の文字列を出力せよ。入力入力は以下の形式で標準入力から与えられる。SNl_1
r_1l_2 r_2:l_N r_N1 行目には、半角の小文字アルファベットのみからなる文字列 S (1
≦ |S| ≦ 100) が与えられる。2 行目には、操作の回数を表す整数 N (1 ≦ N ≦ 100)
が与えられる。3 行目から N 行では、操作に関する情報が与えられる。N 行のうち i
行目では、2 つの整数 l_i と r_i (1 ≦ l_i ＜ r_i ≦ |S|)
が空白区切りで与えられる。これは、操作 i が左から l_i 番目の文字を左端、左から
r_i
番目の文字を右端とした部分文字列を逆順にする操作であることを表す。出力全操作後の文字列を
1 行に出力せよ。(21:49 表現の変更)出力の末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc018/submissions/4348090
// 提出ID : 4348090
// 問題ID : abc018_2
// コンテストID : abc018
// ユーザID : xryuseix
// コード長 : 814
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

  string s, t;
  int l, r, n, i;
  cin >> s >> n;
  for (i = 0; i < n; i++) {
    cin >> l >> r;
    t = s.substr(l - 1, r - l + 1);
    //		cout<<t<<endl;
    reverse(t.begin(), t.end());
    //		cout<<t<<endl;
    s.replace(l - 1, r - l + 1, t);
    //		cout<<s<<endl;
  }
  cout << s << endl;

  return 0;
}
