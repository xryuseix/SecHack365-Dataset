/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_c
C - StonesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N
個の石が一列に並んでおり、すべての石は白か黒で塗られています。石の状態は長さ N
の文字列 S で表され、S の i 文字目が  . のとき左から i 個目の石が白であり、#
のとき左から i 個目の石が黒であることを表します。高橋君は、0
個以上の石の色を黒または白に変更し、黒い石のすぐ右に白い石があるような箇所がないようにしたいです。色を変更する必要のある石の個数の最小値を求めてください。
制約1 \leq N \leq 2\times 10^5S は ., # のみからなる長さ N
の文字列である入力入力は以下の形式で標準入力から与えられる。NS出力色を変更する必要のある石の個数の最小値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2019-beginner/submissions/10336241
// 提出ID : 10336241
// 問題ID : tenka1_2019_c
// コンテストID : tenka1-2019-beginner
// ユーザID : xryuseix
// コード長 : 2236
// 実行時間 : 10



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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int stringcount(string s, char c) { return count(s.cbegin(), s.cend(), c); }

int main(void) {

  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = INF;
  int l = 0, r = 0;
  r = stringcount(s, '.');
  rep(i, n) {
    // cout<<i<<" "<<l<<" "<<r<<endl;
    chmin(ans, r + l);
    if (s[i] == '.') {
      r--;
    } else {
      l++;
    }
  }
  chmin(ans, stringcount(s, '#'));
  fin(ans);
}
