/*
問題文の引用元：https://atcoder.jp/contests/abc160/tasks/abc160_e
E - Red and Green ApplesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : あなたは、X 個の赤色のリンゴと Y
個の緑色のリンゴを食べようとしています。あなたは A
個の赤色のリンゴを持っており、美味しさはそれぞれ p_1,p_2, \dots ,p_A
です。あなたは B 個の緑色のリンゴを持っており、美味しさはそれぞれ q_1,q_2, \dots
,q_B です。あなたは C 個の無色のリンゴを持っており、美味しさはそれぞれ r_1,r_2,
\dots ,r_C
です。無色のリンゴは食べる前に着色することで、赤色のリンゴもしくは緑色のリンゴと見なすことができます。以上のリンゴの中から、できるだけ美味しさの総和が大きくなるように食べるリンゴを選びます。0
個以上の無色のリンゴに適切に着色したとき、食べる X+Y
個のリンゴの美味しさの総和が最大でいくつになるか求めてください。
制約1 \leq X \leq A \leq 10^51 \leq Y \leq B \leq 10^51 \leq C \leq 10^51 \leq
p_i \leq 10^91 \leq q_i \leq 10^91 \leq r_i \leq
10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。X Y A
B Cp_1 p_2 ... p_Aq_1 q_2 ... q_Br_1 r_2 ...
r_C出力リンゴの美味しさの総和の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc160/submissions/11289894
// 提出ID : 11289894
// 問題ID : abc160_e
// コンテストID : abc160
// ユーザID : xryuseix
// コード長 : 2370
// 実行時間 : 166



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

  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  vi v(a), w(b), z(c);
  rep(i, a) cin >> v[i];
  rep(i, b) cin >> w[i];
  rep(i, c) cin >> z[i];
  Rort(v);
  Rort(w);
  rep(i, x) z.pb(v[i]);
  rep(i, y) z.pb(w[i]);
  Rort(z);
  ll ans = 0;
  rep(i, x + y) ans += z[i];
  fin(ans);
}
