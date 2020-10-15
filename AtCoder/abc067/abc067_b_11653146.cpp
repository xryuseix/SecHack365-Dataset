/*
問題文の引用元：https://atcoder.jp/contests/abc067/tasks/abc067_b
B - Snake ToyEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけくんは N 本の棒を持っています。i 番目の棒の長さは l_i
です。すぬけくんは K
本の棒を選んでつなげて、ヘビのおもちゃを作りたいです。ヘビのおもちゃの長さは選んだ棒たちの長さの総和で表されます。ヘビのおもちゃの長さとしてありうる長さのうち、最大値を求めなさい。
制約1 \leq K \leq N \leq 501 \leq l_i \leq 50l_i
は整数入力入力は以下の形式で標準入力から与えられる。N Kl_1 l_2 l_3 ...
l_{N}出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc067/submissions/11653146
// 提出ID : 11653146
// 問題ID : abc067_b
// コンテストID : abc067
// ユーザID : xryuseix
// コード長 : 2356
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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
#define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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

  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  Rort(v);
  int ans = 0;
  rep(i, k) ans += v[i];
  fin(ans);
}