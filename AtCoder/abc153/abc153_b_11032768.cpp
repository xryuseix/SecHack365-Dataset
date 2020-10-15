/*
問題文の引用元：https://atcoder.jp/contests/abc153/tasks/abc153_b
B - Common Raccoon vs MonsterEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : アライグマはモンスターと戦っています。モンスターの体力は H
です。アライグマは N 種類の必殺技を使うことができ、i
番目の必殺技を使うとモンスターの体力を A_i
減らすことができます。必殺技を使う以外の方法でモンスターの体力を減らすことはできません。モンスターの体力を
0 以下にすればアライグマの勝ちです。アライグマが同じ必殺技を 2
度以上使うことなくモンスターに勝つことができるなら Yes を、できないなら No
を出力してください。
制約1 \leq H \leq 10^91 \leq N \leq 10^51 \leq A_i \leq
10^4入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。H
NA_1 A_2 ... A_N出力アライグマが同じ必殺技を 2
度以上使うことなくモンスターに勝つことができるなら Yes を、できないなら No
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc153/submissions/11032768
// 提出ID : 11032768
// 問題ID : abc153_b
// コンテストID : abc153
// ユーザID : xryuseix
// コード長 : 2097
// 実行時間 : 37



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
inline void yn(const bool b) { b ? fin("Yes") : fin("No"); }
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
  ll sum = 0;
  rep(i, k) {
    int a;
    cin >> a;
    sum += a;
  }
  yn(sum >= n);
}