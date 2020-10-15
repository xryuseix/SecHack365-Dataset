/*
問題文の引用元：https://atcoder.jp/contests/abc148/tasks/abc148_b
B - Strings with the Same LengthEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 英小文字のみからなる長さ N の文字列 S, T が与えられます。S の 1
文字目、T の 1 文字目、S の 2 文字目、T の2 文字目、S の 3 文字目、...、S のN
文字目、T のN 文字目というように、S の各文字と T
の各文字を先頭から順に交互に文字を並べ、新しい文字列を作ります。この新しくできた文字列を出力してください。
制約1 ≤ N ≤ 100|S| = |T| = NS, T
は英小文字のみからなる文字列入力入力は以下の形式で標準入力から与えられる。NS
T出力新しくできた文字列を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc148/submissions/9056307
// 提出ID : 9056307
// 問題ID : abc148_b
// コンテストID : abc148
// ユーザID : xryuseix
// コード長 : 1762
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
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  string s, t;
  int n;
  cin >> n;
  cin >> s >> t;
  for (int i = 0; i < s.size(); i++) {
    cout << s[i] << t[i];
  }
  cout << endl;
}