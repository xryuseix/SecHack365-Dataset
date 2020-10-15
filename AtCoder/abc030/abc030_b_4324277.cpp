/*
問題文の引用元：https://atcoder.jp/contests/abc030/tasks/abc030_b
B - 時計盤Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : n 時 m
分のアナログ時計があります。短針と長針のなす角度のうち小さい方を度数法で求めてください。入力入力は以下の形式で標準入力から与えられる。n
m1 行目には、アナログ時計の時刻を表す整数 n, m ( 0 ≦ n ≦ 23, 0 ≦ m ≦ 59 )
が空白区切りで書かれている。出力短針と長針のなす角度を 1
行目に出力せよ。絶対誤差または相対誤差が 10^{-4}
以下であれば許容される。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc030/submissions/4324277
// 提出ID : 4324277
// 問題ID : abc030_b
// コンテストID : abc030
// ユーザID : xryuseix
// コード長 : 770
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

  double n, m;
  cin >> n >> m;
  if (n >= 12)
    n -= 12;
  n = n * 30 + m / 2;
  m = 6 * m;
  //	cout<<n<<" "<<m<<endl;;
  double d = max(m, n) - min(m, n);
  if (d > 180)
    d = 360 - d;
  if (d < 0)
    d = -d;
  cout << d << endl;

  return 0;
}
