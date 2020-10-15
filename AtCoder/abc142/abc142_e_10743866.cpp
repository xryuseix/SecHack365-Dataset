/*
問題文の引用元：https://atcoder.jp/contests/abc142/tasks/abc142_e
E - Get EverythingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 鍵のかかった宝箱が N 個あり、1 から N
までの番号がつけられています。店で M 個の鍵が売られています。i 個目の鍵は a_i
円で販売されており、b_i 種類の宝箱 c_{i1} ,  c_{i2} , ..., c_{i{b_i}}
を開けることが出来ます。購入した鍵は何度でも使うことが出来ます。全ての宝箱を開ける為に必要な費用の最小値を答えてください。全ての宝箱を開けることが不可能である場合は
-1 を出力してください。
制約入力は全て整数1 ≤ N ≤ 121 ≤ M ≤ 10^31 \leq a_i \leq 10^51 \leq b_i \leq N1
\leq c_{i1} < c_{i2} < ... < c_{i{b_i}} \leq
N入力入力は以下の形式で標準入力から与えられる。N Ma_1 b_1c_{11} c_{12} ...
c_{1{b_1}}:a_M b_Mc_{M1} c_{M2} ...
c_{M{b_M}}出力全ての宝箱を開ける為に必要な費用の最小値を出力せよ。全ての宝箱を開けることが不可能である場合は
-1 を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc142/submissions/10743866
// 提出ID : 10743866
// 問題ID : abc142_e
// コンテストID : abc142
// ユーザID : xryuseix
// コード長 : 2546
// 実行時間 : 28



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
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {

  int n, m;
  cin >> n >> m;
  vi cost(m), keys(m);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    bitset<12> bs;
    rep(j, b) {
      int c;
      cin >> c;
      bs[c - 1] = 1;
    }
    int sum = 0;
    rep(j, 12) { sum += bs[j] * pow(2, j); }
    keys[i] = sum;
    cost[i] = a;
  }
  vll dp((1 << n) + 10, INF);
  dp[0] = 0;
  for (int i = 0; i < (1 << n); i++) {
    rep(j, m) { chmin(dp[i | keys[j]], dp[i] + cost[j]); }
  }
  if (dp[(1 << n) - 1] != INF)
    fin(dp[(1 << n) - 1]);
  else
    fin(-1);
  // rep(i,n)cout<<i<<" : "<<keys[i]<<endl;
  // cout<<endl;
  // rep(i,1<<n)cout<<i<<" : "<<dp[i]<<endl;
}
