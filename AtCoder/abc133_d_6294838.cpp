/*
引用元：https://atcoder.jp/contests/abc133/tasks/abc133_d
D - Rain Flows into DamsEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc133/submissions/6294838
// 提出ID : 6294838
// 問題ID : abc133_d
// コンテストID : abc133
// ユーザID : xryuseix
// コード長 : 1867
// 実行時間 : 21



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  ll n;
  cin >> n;
  vll a(n), b(n), c(n);
  rep(i, n) {
    cin >> a[i];
    b[i] = a[i];
    c[i] = a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    b[i + 1] -= b[i];
    b[i] = 0;
  }
  ll lest = b[n - 1];
  cout << lest << " ";
  for (int i = 0; i < n - 1; i++) {
    c[i] -= lest / 2;
    lest = c[i] * 2;
    cout << lest;
    if (i != n - 2)
      cout << " ";
    else
      cout << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
