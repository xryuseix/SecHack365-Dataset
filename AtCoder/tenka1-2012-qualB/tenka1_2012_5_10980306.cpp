/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2012-qualB/tasks/tenka1_2012_5
A - 孫子算経Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : いま、物が有る。その数は 1 以上 127 以下である。 3 で割ると、 a 余る。5
で割ると、 b 余る。7 で割ると、 c
余る。いくつ物があるとそうなるか小さい順に答えよ。入力入力は以下の形式で標準入力から与えられる。a
b c入力として 3 つの整数 a ( 0 \leq a \leq 2 ),b ( 0 \leq b \leq 4 ),c ( 0 \leq
c \leq 6 ) が空白で区切られて 1
行で与えられる。出力条件を満たす物の数を小さい順に改行区切りで出力せよ。なお、行の終端には改行が必要である。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2012-qualB/submissions/10980306
// 提出ID : 10980306
// 問題ID : tenka1_2012_5
// コンテストID : tenka1-2012-qualB
// ユーザID : xryuseix
// コード長 : 1948
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
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i < 128; i++) {
    if (i % 3 == a && i % 5 == b && i % 7 == c)
      fin(i);
  }
}
