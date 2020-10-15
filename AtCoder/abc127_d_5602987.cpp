/*
引用元：https://atcoder.jp/contests/abc127/tasks/abc127_d
D - Integer CardsEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc127/submissions/5602987
// 提出ID : 5602987
// 問題ID : abc127_d
// コンテストID : abc127
// ユーザID : xryuseix
// コード長 : 1821
// 実行時間 : 43



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

  vector<pair<int, int>> v;
  vector<int> w;
  int n, m, i, a, b, c;
  cin >> n >> m;
  rep(i, n) {
    cin >> a;
    w.push_back(a);
  }
  rep(i, m) {
    cin >> b >> c;
    v.push_back(make_pair(c, b));
  }
  sort(v.rbegin(), v.rend());
  sort(w.rbegin(), w.rend());
  int p = 0, q = 0;
  ll ans = 0;
  for (i = 0; i < n; i++) {
    if (v.size() <= p || w.size() <= q) {
      if (v.size() <= p) {
        ans += w[q];
        q++;
      } else {
        ans += v[p].first;
        v[p].second--;
        if (v[p].second <= 0)
          p++;
      }
    } else {
      if (v[p].second > 0 && v[p].first > w[q]) {
        ans += v[p].first;
        v[p].second--;
        if (v[p].second <= 0)
          p++;
      } else {
        ans += w[q];
        q++;
      }
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
