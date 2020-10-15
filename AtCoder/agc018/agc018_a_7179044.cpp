/*
問題文の引用元：https://atcoder.jp/contests/agc018/tasks/agc018_a
A - Getting DifferenceEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 箱に N 個のボールが入っていて、i 番目のボールには整数 A_i
が書かれています。すぬけ君は、次の操作を好きな回数だけ行うことができます。箱から二つのボールを取り出し、その二つのボールに書かれている数の差の絶対値を書いた新しいボールと一緒に箱に戻す。すぬけ君が、整数
K の書かれたボールが箱の中に入っている状態にできるかどうか判定してください。
制約1 \leq N \leq 10^51 \leq A_i \leq 10^91 \leq K \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。N KA_1
A_2 ... A_N出力すぬけ君が、整数 K
がかかれたボールが箱の中に入っている状態にできる場合には
POSSIBLE、できない場合には IMPOSSIBLE と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc018/submissions/7179044
// 提出ID : 7179044
// 問題ID : agc018_a
// コンテストID : agc018
// ユーザID : xryuseix
// コード長 : 1901
// 実行時間 : 17



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

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
int ngcd(int n, vi a) {
  int i, d;
  d = a[0];
  for (i = 1; i < n && d != 1; i++)
    d = gcd(a[i], d);
  return d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  int k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  if (k % ngcd(n, v) == 0 && v[n - 1] >= k) {
    fin("POSSIBLE");
  } else {
    fin("IMPOSSIBLE");
  }

  //////////////////////////////////////////////////////
  return 0;
}
