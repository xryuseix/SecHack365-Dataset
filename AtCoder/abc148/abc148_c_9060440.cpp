/*
問題文の引用元：https://atcoder.jp/contests/abc148/tasks/abc148_c
C - SnackEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 300 点
問題文 : 高橋君はパーティを企画しています。パーティーでは参加者に 1 人 1
個以上のお菓子を配る予定です。高橋君は参加者の人数が A 人か B
人のどちらかになるだろうという予想を立てました。どちらの場合でも均等に配りきることができるようなお菓子の個数の最小値を求めてください。ただし、
1 個のお菓子を分割して複数人で分けることはできないものとします。
制約 1 \le A, B \le 10^5  A \neq B
入力はすべて整数入力入力は以下の形式で標準入力から与えられる。A
B出力参加者の人数が A 人の場合でも B
人の場合でも均等に配りきることができるようなお菓子の個数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc148/submissions/9060440
// 提出ID : 9060440
// 問題ID : abc148_c
// コンテストID : abc148
// ユーザID : xryuseix
// コード長 : 1806
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

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// gcdも呼ぶ！！！
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main(void) {

  ll a, b;
  cin >> a >> b;
  fin(lcm(a, b));
}
