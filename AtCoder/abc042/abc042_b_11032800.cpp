/*
問題文の引用元：https://atcoder.jp/contests/abc042/tasks/abc042_b
B - Iroha Loves Strings (ABC Edition)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : いろはちゃんは 長さ L の文字列を N 個持っており、それぞれ S_1, S_2,
..., S_N
です。それらの文字列を好きな順番で全て結合してできる文字列のうち、もっとも辞書順で小さいものを求めてください。なお、ある文字列
s=s_1s_2s_3...s_n と t=t_1t_2t_3...t_m
について、以下のどちらかを満たすとき、辞書順比較で s<t
であるといいます。ある整数 i(1≦i≦min(n,m)) に関して、 1≦j<i を満たす任意の整数 j
において s_j = t_j が成立し、かつ s_i<t_i が成立する。任意の整数 i(1≦i≦min(n,m))
に関して s_i = t_i が成立し、かつ  n<m が成立する。
制約1 ≦ N, L ≦ 100全ての i (1≦i≦N) に対し、S_i の長さは L に等しい。各 i
について, S_i
は全て半角英小文字のみから成る文字列である。入力入力は以下の形式で標準入力から与えられる。N
LS_1S_2:S_N出力与えられる文字列を好きな順番で全て結合してできる文字列のうち、もっとも辞書順で小さいものを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc042/submissions/11032800
// 提出ID : 11032800
// 問題ID : abc042_b
// コンテストID : abc042
// ユーザID : xryuseix
// コード長 : 2087
// 実行時間 : 3



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
inline void yn(const bool b) { b ? fin("Yes") : fin("No"); }
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
  int n, l;
  cin >> n >> l;
  vs v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  rep(i, n) cout << v[i];
  cout << endl;
}
