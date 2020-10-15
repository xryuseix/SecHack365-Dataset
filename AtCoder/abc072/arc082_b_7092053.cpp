/*
問題文の引用元：https://atcoder.jp/contests/abc072/tasks/arc082_b
D - DerangementEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : 1,2,..,N からなる順列 p_1,p_2,..,p_N が与えられます。次の操作を何回か
(0回でもよい) 行うことが出来ます。操作:
順列で隣り合う二つの数を選んでスワップする。何回か操作を行って、任意の 1≤i≤N
に対して p_i ≠ i となるようにしたいです。必要な操作の最小回数を求めてください。
制約2≤N≤10^5p_1,p_2,..,p_N は 1,2,..,N
の順列である。入力入力は以下の形式で標準入力から与えられる。Np_1 p_2 ..
p_N出力必要な操作の最小回数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc072/submissions/7092053
// 提出ID : 7092053
// 問題ID : arc082_b
// コンテストID : abc072
// ユーザID : xryuseix
// コード長 : 1883
// 実行時間 : 9



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
  vi v(n);
  rep(i, n) cin >> v[i];
  int num;
  ll ans = 0;
  vector<char> s(n);
  for (int i = 0; i < n; i++) {
    if (v[i] == i + 1)
      s[i] = 'x';
    else
      s[i] = 'o';
  }
  for (int i = 0; i < n; i++) {

    if (s[i] == 'x') {
      s[i] = 'o';
      if (i < n - 1)
        s[i + 1] = 'o';
      ans++;
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
