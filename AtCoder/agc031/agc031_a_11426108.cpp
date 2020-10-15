/*
問題文の引用元：https://atcoder.jp/contests/agc031/tasks/agc031_a
A - Colorful SubsequenceEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 長さ N の文字列 S が与えられます。S
の部分列であって、すべて異なる文字からなるものの数を 10^9+7
で割った余りを答えてください。文字列として同一でも、異なる位置から取り出された部分列は区別して数えることとします。ただし、文字列の部分列とは、文字列から文字をいくつか
正の個数 取り出し、もとの文字列から順序を変えずにつなげたものを指します。
制約1 \leq N \leq 100000S
は英小文字からなる|S|=N入力入力は以下の形式で標準入力から与えられる。NS出力異なる文字からなる部分列の個数を
10^9+7 で割った余りを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/agc031/submissions/11426108
// 提出ID : 11426108
// 問題ID : agc031_a
// コンテストID : agc031
// ユーザID : xryuseix
// コード長 : 2333
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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <random>
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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

int main() {

  ll alpha[26] = {0};
  int n;
  cin >> n;
  string s;
  cin >> s;
  rep(i, s.size()) alpha[s[i] - 'a']++;

  ll ans = 1;
  rep(i, 26) {
    ans *= alpha[i] + 1;
    ans %= MOD;
  }
  ans--;
  fin(ans);
}
