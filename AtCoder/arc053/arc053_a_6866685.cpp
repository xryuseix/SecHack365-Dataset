/*
問題文の引用元：https://atcoder.jp/contests/arc053/tasks/arc053_a
A - ドミノ色塗りEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 縦 H マス、横 W
マスの白いマス目があります。高橋君は、上下または左右に隣り合う 2
マスを選び、それら 2 マスを黒く塗ります。高橋君が 2
マスを黒く塗る方法は何通りか求めてください。
制約1≦H，W≦100入力入力は以下の形式で標準入力から与えられる。H W出力高橋君が 2
マスを黒く塗る方法は何通りか出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc053/submissions/6866685
// 提出ID : 6866685
// 問題ID : arc053_a
// コンテストID : arc053
// ユーザID : xryuseix
// コード長 : 1587
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
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
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll n, m;
  cin >> n >> m;
  cout << (m - 1) * n + (n - 1) * m << endl;

  //////////////////////////////////////////////////////
  return 0;
}