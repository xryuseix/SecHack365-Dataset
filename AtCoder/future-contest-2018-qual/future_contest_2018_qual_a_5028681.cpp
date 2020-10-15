/*
問題文の引用元：https://atcoder.jp/contests/future-contest-2018-qual/tasks/future_contest_2018_qual_a
A - 山型足し算Editorial
Time Limit : 6 sec / Memory Limit : 1024 MB
配点 : 10000000000 点
問題文 : N 行 N 列のマス目 A が与えられます。一番左上のマスの位置を (0,0)
と定義します。このとき、左上のマスから下に i\ (0 ≦ i ≦ N-1) マス、右に j\ (0 ≦ j
≦ N-1) マス進んだマスの位置は (j,i) で表されます。
また，各マスに整数が書かれており、位置 (j,i) のマスに書かれている整数を A_{i,j}
で表します。   ここで、マス目に対して全てのマスに書かれている整数が 0
である状態を「初期マス目」と定義します。また、マス目 P に対する「山型足し算」
(X,Y,H) を以下のように定義します。   まず，山の中心となるマスの位置 (X,Y)\ (0 ≦
X,Y ≦ N-1) と山の高さを表す整数 H\ (1 ≦ H ≦ N) を指定します。
その後、全てのマスの P_{y,x} を P_{y,x} + max(0, H - |x-X| - |y-Y|)
に書き換えます。   例として、8 行 8 列の初期マス目であるマス目 Q
を考えます。マス目 Q に対して、 3 回の山型足し算 (X,Y,H) =
(1,2,5),(5,1,3),(6,6,2) を行った後のマス目を以下の図に示します。 図
山型足し算の例 (空白のマスは 0 を表す。)与えられたマス目 A は、N 行 N
列の初期マス目に対して、山型足し算を 1000
回行って生成されたマス目です。あなたの目的は、マス目 A
にできる限り近いマス目を生成する山型足し算の手順を求めることです。
具体的にはまず、N 行 N 列の初期マス目であるマス目 B
を用意します。次に、あなたはマス目 B に対して山型足し算を最大 1000
回まで行うことができます。そして、マス目 A とマス目 B を比較したとき
を最小化する山型足し算の手順を求めることを目的とします。さらに、マス目 A
を生成するような山型足し算の手順が複数存在する場合には、山型足し算の回数を最小化することを目指してください。
採点方法各テストケースの得点は以下のように計算される。縦 N マス、横 N
マスの初期マス目に対し、あなたのプログラムが出力した山型足し算の手順に従い、マス目
B を生成する。まず、基本点として  点が得られる。マス目 A とマス目 B
に書かれている整数が全てのマスで一致した場合、山型足し算の回数を Q
とすると、ボーナス点として 1,000-Q
点が得られる。問題全体の得点は以下のように計算される。テストケースの数は、以下の
// ソースコードの引用元 :
https://atcoder.jp/contests/future-contest-2018-qual/submissions/5028681
// 提出ID : 5028681
// 問題ID : future_contest_2018_qual_a
// コンテストID : future-contest-2018-qual
// ユーザID : xryuseix
// コード長 : 1176
// 実行時間 : 2



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
#define INF INT_MAX
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

#include <bits/stdc++.h>

#include <time.h>

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int a[100][100], i, j;
  int SIZE = 100;
  int mp[SIZE][SIZE] = {};
  srand((unsigned)time(NULL));
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      cin >> mp[i][j];
    }
  }
  cout << 10 << endl;
  rep(i, 10) cout << rand() % 100 << " " << rand() % 100 << " " << 50 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
