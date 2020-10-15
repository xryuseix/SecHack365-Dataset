/*
問題文の引用元：https://atcoder.jp/contests/abc143/tasks/abc143_c
C - SlimesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 匹のスライムが横一列に並んでいます。これらの色に関する情報が、長さ N
の英小文字から成る文字列 S で与えられます。左から i 番目のスライムは、 S の i
文字目に対応する色を持っています。同じ色を持ち隣接するスライムは融合し、色は変わらずに
1
匹のスライムとなります。このとき、融合した後のスライムは、融合する前の各スライムが隣接していた他のスライムと隣接した状態になります。最終的に存在するスライムは何匹となるでしょうか。
制約1 ≤ N ≤ 10^5|S| = NS
は英小文字から成る入力入力は以下の形式で標準入力から与えられる。NS出力最終的に存在するスライムの数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc143/submissions/8091143
// 提出ID : 8091143
// 問題ID : abc143_c
// コンテストID : abc143
// ユーザID : xryuseix
// コード長 : 1782
// 実行時間 : 5



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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define _LIBCPP_DEBUG 0
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  string s;
  int n;
  cin >> n;
  cin >> s;
  int ans = 1;
  char last = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (s[i] != last) {
      last = s[i];
      ans++;
    }
  }
  fin(ans);
}
