/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_c
C - VacationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 :
明日から太郎君の夏休みが始まります。太郎君は夏休みの計画を立てることにしました。夏休みは
N 日からなります。各 i (1 \leq i \leq N) について、i
日目には太郎君は次の活動のうちひとつを選んで行います。A: 海で泳ぐ。 幸福度 a_i
を得る。B: 山で虫取りをする。 幸福度 b_i を得る。C: 家で宿題をする。 幸福度 c_i
を得る。太郎君は飽き性なので、2
日以上連続で同じ活動を行うことはできません。太郎君が得る幸福度の総和の最大値を求めてください。
制約入力はすべて整数である。1 \leq N \leq 10^51 \leq a_i, b_i, c_i \leq
10^4入力入力は以下の形式で標準入力から与えられる。Na_1 b_1 c_1a_2 b_2 c_2:a_N
b_N c_N出力太郎君が得る幸福度の総和の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/10721298
// 提出ID : 10721298
// 問題ID : dp_c
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 2212
// 実行時間 : 99



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

  int n;
  cin >> n;
  vvi dp(n + 10, vi(3, 0));
  vvi a(n, vi(3));
  rep(i, n) cin >> a[i][0] >> a[i][1] >> a[i][2];
  dp[0][0] = 0;
  dp[0][1] = 0;
  dp[0][2] = 0;
  rep(i, n) {
    rep(j, 3) {
      rep(k, 3) {
        if (j == k)
          continue;
        chmax(dp[i + 1][j], dp[i][k] + a[i][j]);
      }
    }
  }
  fin(max({dp[n][0], dp[n][1], dp[n][2]}));
}
