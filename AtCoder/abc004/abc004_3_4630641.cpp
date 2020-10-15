/*
問題文の引用元：https://atcoder.jp/contests/abc004/tasks/abc004_3
C - 入れ替えEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :             ここにカードが 6 枚あり、それぞれ 1 から 6
までの整数が書かれています。        最初、左から右へ 1 のカードから 6
のカードまでがソートされた状態で並んでいます。
高橋君には整数 N が与えられます。高橋君は以下の操作を i = 0,1,2, ... ,N-1
に対して i = 0 から 順番に行います。                    左から (i mod 5)+1
番目にあるカードと、左から (i mod 5)+2 番目にあるカードの位置を入れ替える。
mod とは、「剰余」を意味し、例えば 8 mod 5 は 3 であり、15 mod 5 は 0
になります。        ここで実際に N = 5 のときに行われる操作を例示します。
i = 0 のとき：            (0 mod 5)+1 = 1、(0 mod 5)+2 = 2
より、左から 1 番目のカード」と、「左から 2 番目のカード」を入れ替えます。
i = 1 のとき：                                                    i = 2 のとき：
i = 3 のとき：                                                    i = 4 のとき：
よって、N=5 のとき、カードの並びは左から234561の順に並びます。
あなたは高橋君の代わりに、上記の操作が全て終わった後のカードの並びを答えてください。
入力            入力は以下の形式で標準入力から与えられる。N        1
行目には、高橋君に与えられた整数 N(1≦N≦10^9) を与える。
この問題には部分点が設定されている。後述する部分点の項も参照すること。
出力            操作が終わった後のカードの並びを左から順に 1
行で出力してください。また、出力の末尾には改行を入れること。        部分点
1≦N≦50 を満たすテストケース全てに正解すると、100 点満点のうち 30
点が与えられる。
// ソースコードの引用元 : https://atcoder.jp/contests/abc004/submissions/4630641
// 提出ID : 4630641
// 問題ID : abc004_3
// コンテストID : abc004
// ユーザID : xryuseix
// コード長 : 1102
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

  int a[] = {1, 2, 3, 4, 5, 6};
  int i, n, j;
  cin >> n;
  n %= 30;
  for (i = 0; i < n; i++) {
    swap(a[i % 5 + 0], a[i % 5 + 1]);
  }
  // cout<<i<<":";
  rep(j, 6) {

    cout << a[j];
    if (j != 5)
      ;
    else
      cout << endl;
  }

  //}

  //////////////////////////////////////////////////////
  return 0;
}
