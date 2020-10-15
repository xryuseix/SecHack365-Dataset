/*
引用元：https://atcoder.jp/contests/abc123/tasks/abc123_d
D - Cake 123Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc123/submissions/4867451
// 提出ID : 4867451
// 問題ID : abc123_d
// コンテストID : abc123
// ユーザID : xryuseix
// コード長 : 1562
// 実行時間 : 18



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll max, maxnum, pm, x, y, z, k, i, j, m;
  cin >> x >> y >> z >> k;
  vector<ll> a, b, c;
  rep(i, x) {
    cin >> pm;
    a.push_back(pm);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  rep(i, y) {
    cin >> pm;
    b.push_back(pm);
  }
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());

  rep(i, z) {
    cin >> pm;
    c.push_back(pm);
  }
  sort(c.begin(), c.end());
  reverse(c.begin(), c.end());

  vector<ll> v;
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      for (m = 0; m < z; m++) {
        if ((i + 1) * (j + 1) * (m + 1) > k)
          break;
        else
          v.push_back(a[i] + b[j] + c[m]);
      }
    }
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for (i = 0; i < k; i++) {
    cout << v[i] << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
