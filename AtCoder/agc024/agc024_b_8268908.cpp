/*
問題文の引用元：https://atcoder.jp/contests/agc024/tasks/agc024_b
B - BackfrontEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 1 以上 N 以下の整数を並び替えてできる数列 (P_1,P_2,...,P_N)
が与えられます。次の操作を繰り返してこの列を昇順に並び替えるとき、操作の回数の最小値を求めてください。数列の要素を
1
つ選び、その要素を列の先頭または末尾のうち好きなほうに移動するなお、この操作によって与えられた列を昇順に並び替えられることは証明できます。
制約1 \leq N \leq 2\times 10^5(P_1,P_2,...,P_N) は (1,2,...,N)
の並び替えである入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。NP_1:P_N出力操作の回数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc024/submissions/8268908
// 提出ID : 8268908
// 問題ID : agc024_b
// コンテストID : agc024
// ユーザID : xryuseix
// コード長 : 2225
// 実行時間 : 62



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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int lis(vector<int> &v) {
  vi dp(1, v[0]);
  for (int i = 1; i < v.size(); i++) {
    if (v[i] > dp[dp.size() - 1]) {
      dp.push_back(v[i]);
    } else {
      int pos = distance(lower_bound(dp.begin(), dp.end(), v[i]), dp.begin());
      dp[pos] = v[i];
    }
  }
  return (int)dp.size();
}

int conlis(vector<int> &v) {
  vi dp(v.size() + 1, 0);
  int ans = 0;
  for (int i = 0; i < v.size(); i++) {
    dp[v[i]] = dp[v[i] - 1] + 1;
    ans = max(ans, dp[v[i]]);
  }
  return ans;
}

int main(void) {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];

  fin(n - conlis(v));
}
