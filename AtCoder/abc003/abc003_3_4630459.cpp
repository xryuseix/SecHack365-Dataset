/*
問題文の引用元：https://atcoder.jp/contests/abc003/tasks/abc003_3
C - AtCoderプログラミング講座Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : AtCoder社では、優秀な競技プログラマーの講座動画を N
個配信しています。初心者競技プログラマーの高橋くんは、AtCoder社が配信している動画を見て修練しようとしています。高橋くんの実力はレートという実数値で表され、レートが高いほど実力が高いことを表します。高橋くんのレートが
C の時に、レート R の競技プログラマーの講座動画を見ると、高橋くんのレートは
(C+R)/2 に変化します。高橋くんは、講座動画を合計で K
個まで好きな順番で見ることができますが、同じ競技プログラマーの講座動画は一度までしか見ることができません。講座動画を配信している
N
人のレートが与えられた時、高橋くんが講座動画を見ることによって達成できるレートの最大値を求めるプログラムを書いてください。ただし、高橋くんの初期レートは
0 です。入力入力は以下の形式で標準入力から与えられる。N KR_1 R_2 ... R_N  1
行目には、講座動画の数を表す整数 N\ (1 ≦ N ≦ 100)
と高橋くんが見ることのできる動画の数を表す整数 K\ (1 ≦ K ≦ N)
がスペース区切りで与えられる。  2
行目には、講座動画を配信している競技プログラマーのレートを表す整数 R_i\ (1 ≦ R_i
≦ 4,000) がスペース区切りで与えられる。出力高橋くんが達成できる最大レートを 1
行で出力せよ。絶対誤差、または、相対誤差が 10^{-6}
以下であれば許容される。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc003/submissions/4630459
// 提出ID : 4630459
// 問題ID : abc003_3
// コンテストID : abc003
// ユーザID : xryuseix
// コード長 : 1056
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
#include <bitset>
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

  int i, n, k;
  cin >> n >> k;
  int a[n];
  double rate = 0;
  rep(i, n) cin >> a[i];
  sort(a, a + n);
  for (i = n - k; i < n; i++) {
    rate = (rate + a[i]) / 2;
  }
  printf("%.7f\n", rate);

  //////////////////////////////////////////////////////
  return 0;
}
