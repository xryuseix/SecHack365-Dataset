/*
問題文の引用元：https://atcoder.jp/contests/abc127/tasks/abc127_c
C - PrisonEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 枚の ID カードと M 個のゲートがあります。i 番目のゲートは L_i, L_i+1,
..., R_i 番目の ID カードのうちどれか 1 枚を持っていれば通過できます。1
枚だけで全てのゲートを通過できる ID カードは何枚あるでしょうか。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq M \leq 10^51 \leq L_i \leq
R_i \leq N入力入力は以下の形式で標準入力から与えられる。N ML_1 R_1L_2
R_2\vdotsL_M R_M出力1 枚だけで全てのゲートを通過できる ID
カードの枚数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc127/submissions/5598339
// 提出ID : 5598339
// 問題ID : abc127_c
// コンテストID : abc127
// ユーザID : xryuseix
// コード長 : 1384
// 実行時間 : 16



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
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
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

  int i, n, m, a, b, l, r;
  cin >> n >> m;
  l = 1;
  r = n;
  rep(i, m) {
    cin >> a >> b;
    if (a > l) {
      l = a;
    }
    if (b < r) {
      r = b;
    }

    //		cout<<"      "<<l<<" "<<r<<endl;
  }
  cout << max(r - l + 1, 0) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
