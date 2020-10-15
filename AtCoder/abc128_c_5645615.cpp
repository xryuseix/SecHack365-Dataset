/*
引用元：https://atcoder.jp/contests/abc128/tasks/abc128_c
C - SwitchesEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc128/submissions/5645615
// 提出ID : 5645615
// 問題ID : abc128_c
// コンテストID : abc128
// ユーザID : xryuseix
// コード長 : 1865
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

  int sw = 0;
  int i, j;
  int n, m, k, t;
  cin >> n >> m;
  vector<vector<int>> v(m, vector<int>());
  for (i = 0; i < m; i++) {
    cin >> k;
    for (j = 0; j < k; j++) {
      cin >> t;
      v[i].push_back(t);
    }
  }
  int p[m];
  rep(i, m) cin >> p[i];
  int ans = 0;
  vector<int> st(n * n, 0);
  vector<int> swn(m, 0);
  int onsw;
  for (sw = 0; sw < pow(2, n); sw++) { //すべてのスイッチ
    onsw = 0;
    rep(i, n * n) st[i] = 0;
    rep(i, m) swn[i] = 0;
    t = sw;
    i = 0;
    while (t > 0) {
      st[i] = t % 2;
      t /= 2;
      i++;
    }
    //		for(i=0;i<n;i++)cout<<st[i];
    //		cout<<endl;
    rep(i, m) {             //各電球
      rep(j, v[i].size()) { //スイッチがオンか
        if (st[v[i][j] - 1] == 1)
          swn[i]++;
      }
      if (swn[i] % 2 == p[i])
        onsw++;
    }
    if (onsw == m)
      ans++;
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
