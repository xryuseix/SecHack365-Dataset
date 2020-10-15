/*
問題文の引用元：https://atcoder.jp/contests/abc027/tasks/abc027_b
B - 島と橋Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : N 個の島が横一列に並んでいる。1≦i≦N-1 について、左から i 番目の島と i+1
番目の島は隣り合っている。はじめ、左から i (1≦i≦N) 番目の島には a_i
人の住人が住んでいる。高橋君はすべての島に同じ人数の住人が住むようにしたいと考えている。高橋君は隣り合う
2
つの島の間に橋を架けることができる。また、直接的または間接的に橋で結ばれた複数の島の間で、住人を自由に移動させることができる。すべての島に同じ人数の住人が住むようにするために、架ける必要のある橋の本数の最小値を求めよ。入力入力は以下の形式で標準入力から与えられる。Na_1
a_2 .. a_N1 行目には、島の個数を表す整数 N (2≦N≦100) が与えられる。2
行目には、整数 a_i (0≦a_i≦100) が空白区切りで与えられる。これは、左から i
番目の島には a_i
人の住人が住んでいることを表す。出力すべての島に同じ人数の住人が住むようにするために、架ける必要のある橋の本数の最小値を
1
行に出力せよ。ただし、どのように橋を架けてもすべての島に同じ人数の住人が住むようにできないならば、代わりに
-1 を出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc027/submissions/4330740
// 提出ID : 4330740
// 問題ID : abc027_b
// コンテストID : abc027
// ユーザID : xryuseix
// コード長 : 904
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

  int i, p, n, ans = 0, dx, sum = 0;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  if (sum % n != 0) {
    cout << -1 << endl;
    return 0;
  }
  dx = sum / n;
  p = 0;
  sum = 0;
  for (i = 0; i < n - 1; i++) {
    sum += a[i];
    p++;
    if (sum == p * dx) {
      sum = 0;
      p = 0;
    } else {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
