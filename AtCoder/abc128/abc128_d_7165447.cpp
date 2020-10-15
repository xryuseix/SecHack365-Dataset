/*
問題文の引用元：https://atcoder.jp/contests/abc128/tasks/abc128_d
D - equeueEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : あなたは誕生日プレゼントとして友人から dequeue D を貰いました。D
は左右に長い筒であり、N 個の宝石が一列に詰められています。宝石の価値は左から順に
V_1, V_2, ..., V_N
です。負の価値の宝石が詰められている場合もあります。はじめ、あなたは 1
つも宝石を持っていません。あなたは、D に対して以下の 4 種類の操作から 1
つを選んで実行することを K 回まで行うことができます。操作 A: D
に詰められた宝石のうち、左端の宝石を取り出して手に入れる。D
が空の場合、この操作を行えない。操作 B: D
に詰められた宝石のうち、右端の宝石を取り出して手に入れる。D
が空の場合、この操作を行えない。操作 C: 持っている宝石を 1 つ選んで D
の左端に詰める。宝石を持っていない場合、この操作を行えない。操作 D:
持っている宝石を 1 つ選んで D
の右端に詰める。宝石を持っていない場合、この操作を行えない。操作終了後に持っている宝石の価値の合計の最大値を求めてください。
制約入力は全て整数である。1 \leq N \leq 501 \leq K \leq 100-10^7 \leq V_i \leq
10^7入力入力は以下の形式で標準入力から与えられる。N KV_1 V_2 ...
V_N出力操作終了後に持っている宝石の価値の合計の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc128/submissions/7165447
// 提出ID : 7165447
// 問題ID : abc128_d
// コンテストID : abc128
// ユーザID : xryuseix
// コード長 : 2267
// 実行時間 : 3



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

  int n, k;
  cin >> n >> k;
  ll ans = 0;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  for (int l = 0; l <= k; l++) {
    for (int r = 0; r <= k - l; r++) {
      if (l + r > n)
        continue;
      vector<int> s;
      int d = k - l - r;
      ll now = 0;
      for (int i = 0; i < l; i++) {
        s.push_back(v[i]);
        now += v[i];
      }
      for (int i = n - 1; i >= n - r; i--) {
        s.push_back(v[i]);
        now += v[i];
      }
      Sort(s);
      // cout<<"aaa"<<endl;
      for (int i = 0; i < d; i++) {
        if (i >= s.size() || s[i] > 0)
          continue;
        now -= s[i];
      }
      ans = max(ans, now);
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
