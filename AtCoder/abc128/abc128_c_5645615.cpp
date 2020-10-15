/*
問題文の引用元：https://atcoder.jp/contests/abc128/tasks/abc128_c
C - SwitchesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : on と off の状態を持つ N 個の スイッチと、M
個の電球があります。スイッチには 1 から N の、電球には 1 から M
の番号がついています。電球 i は k_i 個のスイッチに繋がっており、スイッチ s_{i1},
s_{i2}, ..., s_{ik_i} のうち on になっているスイッチの個数を 2 で割った余りが
p_i に等しい時に点灯します。全ての電球が点灯するようなスイッチの on/off
の状態の組み合わせは何通りあるでしょうか。
制約1 \leq N, M \leq 101 \leq k_i \leq N1 \leq s_{ij} \leq Ns_{ia} \neq s_{ib}
(a \neq b)p_i は 0 または
1入力は全て整数である入力入力は以下の形式で標準入力から与えられる。N Mk_1 s_{11}
s_{12} ... s_{1k_1}:k_M s_{M1} s_{M2} ... s_{Mk_M}p_1 p_2 ...
p_M出力全ての電球が点灯するようなスイッチの on/off
の状態の組み合わせの個数を出力せよ。
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
