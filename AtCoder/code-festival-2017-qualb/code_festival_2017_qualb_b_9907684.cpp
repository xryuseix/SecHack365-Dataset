/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_b
B - Problem Set
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : りんごさんは CODEFESTIVAL
の予選の問題セットを組もうとしています。りんごさんは N 個の問題案を持っており、i
個目の問題案の難易度は D_i です。予選の問題セットには M 問の問題が必要で、i
問目の問題に使う問題案の難易度はちょうど T_i でなければなりません。ただし、1
つの問題案を複数の問題に使うことはできません。りんごさんが新しく問題案を作ることなく予選の問題セットを完成させることができるかを判定して下さい。
制約1 \leq N \leq 200,0001 \leq D_i \leq 10^91 \leq M \leq 200,0001 \leq T_i
\leq 10^9入力される値は全て整数である部分点N \leq 100 かつ M \leq 100
を満たすデータセットに正解した場合は、100
点が与えられる。入力入力は以下の形式で標準入力から与えられる。ND_1 D_2 ...
D_NMT_1 T_2 ...
T_M出力りんごさんが新しく問題案を作ることなく予選の問題セットを完成させることができる場合は
YES、できない場合は NO を出力せよ。



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
  vi d(n);
  rep(i, n) cin >> d[i];
  int m;
  cin >> m;
  vi t(m);
  rep(i, m) cin >> t[i];
  map<int, int> s;
  rep(i, n) s[d[i]]++;
  rep(i, m) {
    if (s[t[i]] <= 0) {
      fin("NO");
      return 0;
    } else {
      s[t[i]]--;
    }
  }
  fin("YES");
}
