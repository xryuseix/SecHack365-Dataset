/*
問題文の引用元：https://atcoder.jp/contests/arc034/tasks/arc034_2
B - 方程式Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 正整数 n に対し、n の十進表記における各桁の数の和を f(n)
で表す。例えば、 f(123) = 1 + 2 + 3 = 6, f(4) = 4 となる。正整数 N
が与えられる。等式 x + f(x) = N を満たす正整数 x
を全て求めよ。入力入力は以下の形式で標準入力から与えられる。N1 行目に、1
個の整数 N (1 ≦ N ≦ 1018)
が与えられる。部分点この問題には部分点が設定されている。20 点分のテストケースは
1 ≦ N ≦ 1000 を満たす。出力等式を満たす正整数 x の値の個数を k とする。1 行目に
k の値を出力し、続く k 行に等式を満たす正整数 x の値を昇順で各行に 1
個ずつ出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc034/submissions/11425678
// 提出ID : 11425678
// 問題ID : arc034_2
// コンテストID : arc034
// ユーザID : xryuseix
// コード長 : 2415
// 実行時間 : 2



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

ll calc(ll n) {
  ll res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main() {

  ll n;
  cin >> n;
  vll ans;
  for (ll i = max(n - 10000, 1LL); i <= n; i++) {
    if (i + calc(i) == n)
      ans.pb(i);
  }
  fin(ans.size());
  Sort(ans);
  rep(i, ans.size()) fin(ans[i]);
}
