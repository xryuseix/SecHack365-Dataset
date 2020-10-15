/*
問題文の引用元：https://atcoder.jp/contests/abc017/tasks/abc017_2
B - choku語Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は、ある日不思議な生物を見た。その生物は choku
語という言語を用いていることがわかった。文字列 S
が以下の条件を満たしているときに S は choku 語であると定義する。文字列 S
が空文字列であるとき。文字列 S が、choku 語である文字列 T の末尾に ch
をつけた文字列であるとき。文字列 S が、choku 語である文字列 T の末尾に o
をつけた文字列であるとき。文字列 S が、choku 語である文字列 T の末尾に k
をつけた文字列であるとき。文字列 S が、choku 語である文字列 T の末尾に u
をつけた文字列であるとき。choku 語の理解を深めるため、与えられた文字列が choku
語であるかを判定するプログラムを作成することにした。入力入力は以下の形式で標準入力から与えられる。X1
行目には、choku 語か判定したい文字列 X (1 ≦ |X| ≦ 50) が与えられる。X
は半角小文字アルファベットのみで構成されている。出力X が choku 語なら文字列 YES
を、そうでないなら文字列 NO を 1 行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc017/submissions/4348218
// 提出ID : 4348218
// 問題ID : abc017_2
// コンテストID : abc017
// ユーザID : xryuseix
// コード長 : 847
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
  cin >> s;
  while (s.length() > 0) {
    if (s[0] == 'o' || s[0] == 'k' || s[0] == 'u') {
      s = s.substr(1, s.length() - 1);
    } else if (s[0] == 'c' && s[1] == 'h')
      s = s.substr(2, s.length() - 2);
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}
