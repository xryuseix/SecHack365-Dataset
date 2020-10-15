/*
引用元：https://atcoder.jp/contests/arc006/tasks/arc006_1
A - 宝くじEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/arc006/submissions/5247177
// 提出ID : 5247177
// 問題ID : arc006_1
// コンテストID : arc006
// ユーザID : xryuseix
// コード長 : 1563
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

  vector<int> e(6, 0), l(6, 0), v;
  int i, ans = 0;
  rep(i, 6) cin >> e[i];
  int b;
  cin >> b;
  rep(i, 6) cin >> l[i];
  if (e == l) {
    cout << 1 << endl;
    return 0;
  }
  rep(i, 6) v.push_back(e[i]);
  rep(i, 6) v.push_back(l[i]);
  v.push_back(b);
  sort(v.begin(), v.end());
  bool f = false;
  rep(i, 12) {
    if (v[i] == v[i + 1]) {
      if (v[i] == b)
        f = true;
      else
        ans++;

      i++;
    }
  }
  //	rep(i,v.size())cout<<v[i];
  if (ans == 5 && f)
    fin(2);
  else {
    //		if(f)ans--;
    if (ans == 5)
      fin(3);
    else if (ans == 4)
      fin(4);
    else if (ans == 3)
      fin(5);
    else
      fin(0);
  }

  //////////////////////////////////////////////////////
  return 0;
}
