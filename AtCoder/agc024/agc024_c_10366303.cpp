/*
問題文の引用元：https://atcoder.jp/contests/agc024/tasks/agc024_c
C - Sequence Growing EasyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 700 点
問題文 : 長さ N の数列 X があり、最初はすべての要素が 0 です。X の i 項目を X_i
で表すことにします。長さ N の数列 A が与えられます。A の i 項目は A_i
です。以下の操作を繰り返すことで X を A
と等しくすることができるかどうか判定し、できるなら最小の操作回数を求めてください。1\leq
i\leq N-1 なる整数 i を選ぶ。X_{i+1} の値を X_i の値に 1
を足したもので置き換える。
制約1 \leq N \leq 2 \times 10^50 \leq A_i \leq 10^9(1\leq i\leq
N)入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。NA_1:A_N出力操作を繰り返すことで
X を A と等しくすることができるなら最小の操作回数を、できないなら -1
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/agc024/submissions/10366303
// 提出ID : 10366303
// 問題ID : agc024_c
// コンテストID : agc024
// ユーザID : xryuseix
// コード長 : 2221
// 実行時間 : 80



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
#define STI(s) atoi(s.c_str())
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

int main(void) {

  int n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  rep(i, n) {
    if (v[i] <= i)
      continue;
    fin(-1);
    return 0;
  }
  ll ans = 0;
  rep(i, n - 1) {
    if (v[i] + 1 < v[i + 1]) {
      fin(-1);
      return 0;
    }
    if (v[i] + 1 == v[i + 1]) {
      ans++;
    }
    if (v[i] >= v[i + 1]) {
      ans += v[i + 1];
    }
  }
  fin(ans);
}
