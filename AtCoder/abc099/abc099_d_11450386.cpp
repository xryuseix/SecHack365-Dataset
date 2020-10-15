/*
問題文の引用元：https://atcoder.jp/contests/abc099/tasks/abc099_d
D - Good GridEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : N 行 N 列からなるグリッドがあり、上から i 行目の左から j 列目のマスを
(i,j) とします。これらのマスは色 1 から 色 C
までのいずれかの色で塗られていなければならず、はじめに (i,j) は色 c_{i,j}
で塗られています。グリッドが、1 \leq i,j,x,y \leq N を満たす任意の i,j,x,y
に対して以下の条件を満たす場合、良いグリッドであるとします。(i+j) \% 3=(x+y) \%
3 ならば (i,j) の色と (x,y) の色は同じ(i+j) \% 3 \neq (x+y) \% 3 ならば (i,j)
の色と (x,y) の色は異なるただし、X \% Y は X を Y
で割った余りを表すこととします。グリッドが良いグリッドになるように 0
個以上のマスを塗り替えます。あるマスにおいて、塗り替える前の色が X
であり、塗り替えた後の色が Y である場合に感じる、そのマスに対して感じる違和感は
D_{X,Y}
です。すべてのマスに対して感じる違和感の和のとりうる最小値を求めてください。
制約1 \leq N \leq 5003 \leq C \leq 301 \leq D_{i,j} \leq 1000 (i \neq
j),D_{i,j}=0 (i=j)1 \leq c_{i,j} \leq
C入力は全て整数入力入力は以下の形式で標準入力から与えられる。N CD_{1,1} ...
D_{1,C}:D_{C,1} ... D_{C,C}c_{1,1} ... c_{1,N}:c_{N,1} ...
c_{N,N}出力すべてのマスに対して感じる違和感の和のとりうる最小値が x のとき、x
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc099/submissions/11450386
// 提出ID : 11450386
// 問題ID : abc099_d
// コンテストID : abc099
// ユーザID : xryuseix
// コード長 : 2936
// 実行時間 : 91



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
#include <random>
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
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

  int n, c;
  cin >> n >> c;
  vvll d(c, vll(c));
  vvll v(n, vll(n));
  vector<map<ll, ll>> A(3);
  rep(i, c) rep(j, c) { cin >> d[i][j]; }
  rep(i, n) rep(j, n) {
    cin >> v[i][j];
    v[i][j]--;
    A[(i + j) % 3][v[i][j]]++;
  }
  ll ans = LLINF;
  rep(i, c) {
    rep(j, c) {
      if (i == j)
        continue;
      rep(k, c) {
        if (i == k || j == k)
          continue;
        ll sum = 0;
        irep(m, A[0]) { sum += d[m->first][i] * m->second; }
        irep(m, A[1]) { sum += d[m->first][j] * m->second; }
        irep(m, A[2]) { sum += d[m->first][k] * m->second; }
        chmin(ans, sum);
      }
    }
  }
  fin(ans);
}
