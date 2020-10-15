/*
引用元：https://atcoder.jp/contests/abc112/tasks/abc112_c
C - PyramidEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc112/submissions/5550908
// 提出ID : 5550908
// 問題ID : abc112_c
// コンテストID : abc112
// ユーザID : xryuseix
// コード長 : 1712
// 実行時間 : 4



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

  int n, i, j, x, y, h = 0, k, yn, hn;
  cin >> n;
  int a[n + 1][3];
  rep(i, n) { cin >> a[i + 1][0] >> a[i + 1][1] >> a[i + 1][2]; }

  for (i = 0; i <= 100; i++) { // y
    for (j = 0; j <= 100; j++) { // x

      int hmax = (1 << 30) + (1 << 29);
      int hmin = -1;
      for (k = 1; k <= n; k++) {
        int hn = abs(a[k][0] - j) + abs(a[k][1] - i);
        if (a[k][2] == 0) {
          hmax = min(hmax, hn);
        } else {
          hmin = max(hmin, a[k][2] + hn);
          hmax = min(hmax, a[k][2] + hn);
        }
        //				cout<<hn<<" "<<hmin<<" "<<hmax<<endl;
      }

      if (hmax == hmin) {
        cout << j << " " << i << " " << hmin << endl;
        return 0;
      }
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
