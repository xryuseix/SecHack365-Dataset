/*
問題文の引用元：https://atcoder.jp/contests/abc085/tasks/abc085_b
B - Kagami MochiEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : X 段重ねの鏡餅 (X ≥ 1) とは、X
枚の円形の餅を縦に積み重ねたものであって、どの餅もその真下の餅より直径が小さい（一番下の餅を除く）もののことです。例えば、直径
10、8、6 センチメートルの餅をこの順に下から積み重ねると 3
段重ねの鏡餅になり、餅を一枚だけ置くと 1
段重ねの鏡餅になります。ダックスフンドのルンルンは N
枚の円形の餅を持っていて、そのうち i 枚目の餅の直径は d_i
センチメートルです。これらの餅のうち一部または全部を使って鏡餅を作るとき、最大で何段重ねの鏡餅を作ることができるでしょうか。
制約1 ≤ N ≤ 1001 ≤ d_i ≤
100入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。Nd_1:d_N出力作ることのできる鏡餅の最大の段数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc085/submissions/4312976
// 提出ID : 4312976
// 問題ID : abc085_b
// コンテストID : abc085
// ユーザID : xryuseix
// コード長 : 783
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
// set<set>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  set<int> s;
  int n, i, a;
  set<int>::iterator it;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    s.insert(a);
    //		cout<<i<<endl;
  }
  int ans = 0;
  for (it = s.begin(); it != s.end(); it++) {
    ans++;
  }
  cout << ans << endl;

  return 0;
}
