/*
問題文の引用元：https://atcoder.jp/contests/abc058/tasks/arc071_a
C - Dubious Document
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
すぬけ君は、文字列の書かれた紙から文字をいくつか切り抜いて、並び替えて別の文字列を作るのが好きです。明日になると、すぬけ君は文字列
S_1,...,S_n のうちどれか 1
つが書かれた紙がもらえます。すぬけ君は文字列を作る事をとても楽しみにしているので、どんな文字列を作るか計画を立てることにしました。ただし、すぬけ君はまだどの文字列が書かれた紙がもらえるかを知らないため、どの文字列が書かれていた場合にも作れる文字列を考えることにしました。S_1,...,S_n
のどの文字列が書かれていても作れる文字列のうち、最長のものを求めてください。最長のものが複数ある場合は、辞書順で最小のものを求めてください。
制約1 \leq n \leq 50i = 1, ... , n に対して、 1 \leq |S_i| \leq 50i = 1, ... , n
に対して、 S_i は小文字のアルファベット( a - z
)からなる文字列入力入力は以下の形式で標準入力から与えられる。nS_1...S_n出力条件を満たす最長の文字列のうち、辞書順で最小のものを出力せよ。そのような文字列が空文字列である場合は、空行を出力せよ。



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
  vector<map<char, int>> v(n);
  rep(i, n) {
    string S;
    cin >> S;
    rep(j, S.size()) { v[i][S[j]]++; }
  }
  map<char, int> ansm = v[0];
  for (int i = 1; i < n; i++) {
    irep(j, ansm) { j->second = min(j->second, v[i][j->first]); }
  }
  string anss = "";
  irep(i, ansm) {
    rep(j, i->second) { cout << i->first; }
  }
  cout << endl;
}
