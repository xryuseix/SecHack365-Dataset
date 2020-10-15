/*
問題文の引用元：https://atcoder.jp/contests/arc026/tasks/arc026_1
A - ダイナミックなポーズEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君はプログラミングコンテストに参加しようとしています。このコンテストでは簡単な問題が
N 問出題されます。高橋君は普段 1 問あたり A
分で解くことが出来ますが、ダイナミックなポーズをとりながら問題を解くことで 1
問あたり B
分で解くことが出来るようになります。ただし、ダイナミックなポーズには体力を著しく消耗してしまうので、1
回のプログラミングコンテストでは 5
問までしかダイナミックなポーズをとりながら解くことができません。高橋君は最短何分で
N
問の問題を全て解くことが出来るでしょうか。入力入力は以下の形式で標準入力から与えられる。N
A B1 行目には、問題数を表した整数 N (1 ≦ N ≦ 10) と、高橋君が普段 1
問の問題を解くためにかかる時間を分単位で表した整数 A (2 ≦ A ≦ 60)
と、高橋君がダイナミックなポーズをとりながら 1
問の問題を解くためにかかる時間を分単位で表した整数 B (1 ≦ B < A)
が空白区切りで与えられる。出力最短時間で高橋君が全ての問題を解いたときにかかる時間を分単位で表した整数
1 行に出力せよ。出力の末尾に改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc026/submissions/4330886
// 提出ID : 4330886
// 問題ID : arc026_1
// コンテストID : arc026
// ユーザID : xryuseix
// コード長 : 670
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

  int n, a, b;
  cin >> n >> a >> b;

  if (n >= 5)
    cout << (n - 5) * a + 5 * b << endl;
  else
    cout << n *b << endl;

  return 0;
}