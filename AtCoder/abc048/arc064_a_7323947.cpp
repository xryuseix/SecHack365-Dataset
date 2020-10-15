/*
問題文の引用元：https://atcoder.jp/contests/abc048/tasks/arc064_a
C - Boxes and CandiesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : N 個の箱が横一列に並んでいます。最初、左から i 番目の箱には a_i
個のキャンディが入っています。すぬけ君は次の操作を好きな回数だけ行うことができます。キャンディが
1 個以上入っている箱をひとつ選び、その箱のキャンディを 1
個食べる。すぬけ君の目標は次の通りです。どの隣り合う 2
つの箱を見ても、それらの箱に入っているキャンディの個数の総和が x
以下である。目標を達成するために必要な操作回数の最小値を求めてください。
制約2 ≤ N ≤ 10^50 ≤ a_i ≤ 10^90 ≤ x ≤
10^9入力入力は以下の形式で標準入力から与えられる。N xa_1 a_2 ...
a_N出力目標を達成するために必要な操作回数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc048/submissions/7323947
// 提出ID : 7323947
// 問題ID : arc064_a
// コンテストID : abc048
// ユーザID : xryuseix
// コード長 : 1942
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

  int n, x;
  cin >> n >> x;
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = 0;
  if (v[0] > x) {
    ans += v[0] - x;
    v[0] = x;
  }
  for (int i = 1; i < n; i++) {
    int sum = v[i] + v[i - 1];
    if (sum <= x)
      continue;
    int reduce = sum - x;
    ans += reduce;
    v[i] -= reduce;
  }
  fin(ans);
  // rep(i,n)cout<<v[i]<<" ";
  // cout<<endl;

  //////////////////////////////////////////////////////
  return 0;
}
