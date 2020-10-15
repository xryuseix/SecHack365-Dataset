/*
問題文の引用元：https://atcoder.jp/contests/arc100/tasks/arc100_a
C - Linear ApproximationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : すぬけ君は、長さ N の整数列 A を持っています。すぬけ君は、整数 b
を自由に選びます。この時、A_i と b+i
が離れているとすぬけ君は悲しいです。より具体的には、すぬけ君の悲しさの値は、次の式で計算されます。なおここで、abs(x)
は x の絶対値を返す関数です。abs(A_1 - (b+1)) + abs(A_2 - (b+2)) + ... + abs(A_N
- (b+N))すぬけ君の悲しさの値の最小値を求めてください。
制約1 \leq N \leq 2 \times 10^51 \leq A_i \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1
A_2 ... A_N出力すぬけ君の悲しさの値の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc100/submissions/7188086
// 提出ID : 7188086
// 問題ID : arc100_a
// コンテストID : arc100
// ユーザID : xryuseix
// コード長 : 1999
// 実行時間 : 35



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

  int n;
  cin >> n;
  vi v(n), a;
  ;
  rep(i, n) cin >> v[i];
  a = v;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    v[i] -= (i + 1);
  }

  Sort(v);
  int b1, b2 = INF;
  if (v.size() % 2 == 1)
    b1 = v[n / 2];
  else {
    b1 = v[n / 2];
    b2 = v[n / 2 + 1];
  }
  // cout<<b1<<" "<<b2<<endl;
  ll ans = 0, ans2 = 0;
  rep(i, n) { ans += abs(a[i] - (b1 + (i + 1))); }
  rep(i, n) { ans2 += abs(a[i] - (b2 + (i + 1))); }
  fin(min(ans, ans2));

  //////////////////////////////////////////////////////
  return 0;
}