/*
問題文の引用元：https://atcoder.jp/contests/abc131/tasks/abc131_d
D - Megalomania
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 400 点
問題文 :
AtCoder王国の王立問題工房でABC管理官の座に就いたキザハシ君は、浮かれるあまり仕事を引き受けすぎてしまいました。現在の時刻は
0 です。キザハシ君は 1 から N までの番号が振られた N
件の仕事を持っています。キザハシ君が仕事 i を終えるには A_i
単位時間かかります。また、仕事 i の〆切は時刻 B_i
であり、これまでに仕事を終わらせる必要があります。時刻 B_i ちょうどに仕事 i
を終わらせてもかまいません。キザハシ君は 2
件以上の仕事を同時にすることはできませんが、ある仕事を終わらせた直後に別の仕事を始めることはできます。キザハシ君はすべての仕事を〆切までに終わらせることができるでしょうか。可能ならば
Yes、不可能ならば No を出力してください。
制約入力はすべて整数1 \leq N \leq 2 \times 10^51 \leq A_i, B_i \leq 10^9 (1 \leq
i \leq N)入力入力は以下の形式で標準入力から与えられます。NA_1 B_1...A_N
B_N出力全ての仕事を〆切までに終わらせることが可能ならば Yes、不可能ならば No
を出力してください。



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
  vpii v(n);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v[i] = mp(b, a);
  }
  Sort(v);
  ll now = 0;
  for (int i = 0; i < n; i++) {
    if (now + v[i].second > v[i].first) {
      fin("No");
      return 0;
    } else {
      now += v[i].second;
    }
  }
  fin("Yes");
}
