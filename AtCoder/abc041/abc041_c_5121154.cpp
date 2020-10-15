/*
問題文の引用元：https://atcoder.jp/contests/abc041/tasks/abc041_c
C - 背の順Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋学級には N 人の生徒がいます。 生徒は 1 から N
まで出席番号が振られています。 i 番目の生徒の身長は a_i です。 a_i
はすべて相異なります。高橋先生は N 人の生徒を背の高い方から順に並べました。 N
人の生徒の出席番号を背の高い方から順に出力してください。
制約2≦N≦10^5a_i は整数である。1≦a_i≦10^9a_i はすべて相異なる。部分点30
点分のテストケースでは、N≦1000
を満たす。入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 ... a_N出力N
行出力せよ。 i 行目には、i 番目に背の高い生徒の出席番号を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc041/submissions/5121154
// 提出ID : 5121154
// 問題ID : abc041_c
// コンテストID : abc041
// ユーザID : xryuseix
// コード長 : 1190
// 実行時間 : 168



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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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

  vector<pair<int, int>> v;
  int i, n, a;
  cin >> n;
  rep(i, n) {
    cin >> a;
    v.push_back(make_pair(a, i + 1));
  }
  sort(v.begin(), v.end());
  for (i = n - 1; i >= 0; i--)
    cout << v[i].second << endl;

  //////////////////////////////////////////////////////
  return 0;
}