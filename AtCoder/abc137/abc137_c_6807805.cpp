/*
問題文の引用元：https://atcoder.jp/contests/abc137/tasks/abc137_c
C - Green BinEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 文字列 a に含まれる文字を何らかの順序で並べることで得られる文字列を a
の アナグラム と呼びます。例えば、greenbin は beginner
のアナグラムです。このように、同じ文字が複数回現れるときはその文字をちょうどその回数だけ使わなければなりません。N
個の文字列 s_1, s_2, \ldots, s_N が与えられます。それぞれの文字列は長さが 10
で英小文字からなり、またこれらの文字列はすべて異なります。二つの整数 i, j (1
\leq i < j \leq N) の組であって、s_i が s_j
のアナグラムであるようなものの個数を求めてください。
制約2 \leq N \leq 10^5s_i は長さ 10 の文字列である。s_i
の各文字は英小文字である。s_1, s_2, \ldots, s_N
はすべて異なる。入力入力は以下の形式で標準入力から与えられる。Ns_1s_2:s_N出力二つの整数
i, j (1 \leq i < j \leq N) の組であって、s_i が s_j
のアナグラムであるようなものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc137/submissions/6807805
// 提出ID : 6807805
// 問題ID : abc137_c
// コンテストID : abc137
// ユーザID : xryuseix
// コード長 : 1947
// 実行時間 : 126



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

ll nCk(ll n) { return n * (n - 1) / 2; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vs v(n);
  rep(i, n) cin >> v[i];
  rep(i, n) { Sort(v[i]); }
  map<string, ll> m;
  rep(i, n) {
    if (m.find(v[i]) == m.end()) {
      m[v[i]] = 1;
    } else {
      m[v[i]]++;
    }
  }
  ll ans = 0;
  for (auto it = m.begin(); it != m.end(); it++) {
    ans += nCk(it->second);
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
