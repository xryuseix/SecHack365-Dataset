/*
問題文の引用元：https://atcoder.jp/contests/abc157/tasks/abc157_c
C - Guess The NumberEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 以下の条件を満たす 0
以上の整数が存在すれば、それらのうち最小のものを出力してください。そのような整数が存在しなければ、
-1と出力してください。十進表記で丁度 N 桁である。(0 は 1
桁の整数とする。その他の整数については、先頭に 0
をつけた表記は認めない。)左から数えて s_i 桁目は c_i である。\left(i = 1, 2,
\cdots, M\right)
制約入力は全て整数1 \leq N \leq 30 \leq M \leq 51 \leq s_i \leq N0 \leq c_i \leq
9入力入力は以下の形式で標準入力から与えられる。N Ms_1 c_1\vdotss_M
c_M出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc157/submissions/10441385
// 提出ID : 10441385
// 問題ID : abc157_c
// コンテストID : abc157
// ユーザID : xryuseix
// コード長 : 2262
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

  int n, m;
  cin >> n >> m;
  vi v(n, -1);
  rep(i, m) {
    int s, c;
    cin >> s >> c;
    s--;
    if (v[s] == -1 || v[s] == c) {
      v[s] = c;
    } else {
      fin(-1);
      return 0;
    }
  }
  if (v[0] == -1 && n > 1) {
    v[0] = 1;
  }
  rep(i, n) {
    if (v[i] == -1)
      v[i] = 0;
  }
  if (n > 1 && v[0] == 0) {
    fin(-1);
    return 0;
  }
  rep(i, n) cout << v[i];
  cout << endl;
}
