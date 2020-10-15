/*
問題文の引用元：https://atcoder.jp/contests/abc157/tasks/abc157_b
B - BingoEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 3\times3 のサイズのビンゴカードがあります。上から i 行目、左から j
列目の数は A_{i, j} です。続けて、 N 個の数 b_1, b_2, \cdots, b_N
が選ばれます。選ばれた数がビンゴカードの中にあった場合、ビンゴカードのその数に印を付けます。N
個の数字が選ばれた時点でビンゴが達成されているか、則ち、縦・横・斜めのいずれか 1
列に並んだ 3
つの数の組であって、全てに印の付いているものが存在するかどうかを判定してください。
制約入力は全て整数1 \leq A_{i, j} \leq 100A_{i_1, j_1} \neq A_{i_2, j_2} ((i_1,
j_1) \neq (i_2, j_2))1 \leq N \leq 101 \leq b_i \leq 100b_i \neq b_j (i \neq
j)入力入力は以下の形式で標準入力から与えられる。A_{1, 1} A_{1, 2} A_{1, 3}A_{2,
1} A_{2, 2} A_{2, 3}A_{3, 1} A_{3, 2} A_{3,
3}Nb_1\vdotsb_N出力ビンゴが達成されているならば Yes と、そうでないならば No
と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc157/submissions/10431925
// 提出ID : 10431925
// 問題ID : abc157_b
// コンテストID : abc157
// ユーザID : xryuseix
// コード長 : 2553
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

  int n;
  vvi a(3, vi(3));
  rep(i, 3) rep(j, 3) cin >> a[i][j];
  cin >> n;
  set<int> s;
  rep(i, n) {
    int b;
    cin >> b;
    s.insert(b);
  }
  rep(i, 3) rep(j, 3) {
    if (s.count(a[i][j]) == 1) {
      a[i][j] = -1;
    }
  }
  rep(i, 3) {
    if (a[i][0] == -1 && a[i][1] == -1 && a[i][2] == -1) {
      fin("Yes");
      return 0;
    }
  }
  rep(i, 3) {
    if (a[0][i] == -1 && a[1][i] == -1 && a[2][i] == -1) {
      fin("Yes");
      return 0;
    }
  }
  if (a[0][0] == -1 && a[1][1] == -1 && a[2][2] == -1) {
    fin("Yes");
    return 0;
  }
  if (a[2][0] == -1 && a[1][1] == -1 && a[0][2] == -1) {
    fin("Yes");
    return 0;
  }
  fin("No");
}
