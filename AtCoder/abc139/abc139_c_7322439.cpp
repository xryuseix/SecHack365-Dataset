/*
問題文の引用元：https://atcoder.jp/contests/abc139/tasks/abc139_c
C - LowerEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 左右一列に N 個のマスが並んでいます。左から i 番目のマスの高さは H_i
です。あなたは好きなマスに降り立ち、右隣のマスの高さが今居るマスの高さ以下である限り右隣のマスへ移動し続けます。最大で何回移動できるでしょうか。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq H_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NH_1 H_2 ...
H_N出力移動できる回数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc139/submissions/7322439
// 提出ID : 7322439
// 問題ID : abc139_c
// コンテストID : abc139
// ユーザID : xryuseix
// コード長 : 1845
// 実行時間 : 12



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
#include <cfloat>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  int ans = 0;
  for (int i = 0; i < n; i++) { //始点
    int j = i;
    while (i + 1 < n && v[i] >= v[i + 1]) {
      i++;
    }
    // cout<<i<<" "<<j<<endl;
    ans = max(ans, i - j);
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}