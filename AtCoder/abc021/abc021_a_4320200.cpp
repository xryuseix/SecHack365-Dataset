/*
問題文の引用元：https://atcoder.jp/contests/abc021/tasks/abc021_a
A - 足し算Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 正整数 N と、 2 の累乗数 1,2,4,8 があります。これらのうち、 同じ 2
の累乗数をいくつ使っても良い ので、それらの和が N となるような組み合わせを 1
つ求めてください。組み合わせが複数考えられる場合は、そのうちのどれを出力しても構いません。例えば
N=5 のとき、5=1+2+2 となることから 1 つの組み合わせとして {1,2,2}
が考えられます。入力入力は以下の形式で標準入力から与えられる。N1
行目には、正整数 N (1 ≦ N ≦ 10) が与えられる。出力1
行目に、組み合わせを構成する整数の個数 K を出力せよ。2 行目から K
行には、組み合わせを構成する K 個の整数をそれぞれ出力せよ。和がちょうど N
になり、組み合わせを構成する各整数が 2
の累乗数であるならば正解として扱われる。それ以外の場合は不正解として扱われる。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc021/submissions/4320200
// 提出ID : 4320200
// 問題ID : abc021_a
// コンテストID : abc021
// ユーザID : xryuseix
// コード長 : 685
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

  int n;
  cin >> n;
  cout << n << endl;
  for (int i = 0; i < n; i++) {
    cout << 1 << endl;
  }

  return 0;
}