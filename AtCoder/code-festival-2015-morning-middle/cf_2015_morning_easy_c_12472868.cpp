/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2015-morning-middle/tasks/cf_2015_morning_easy_c
A - ヘイホー君と最終試験Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : Codefes大学の競技プログラミングの授業では、成績評価のために、N
回の試験を行うことにしています。各試験での成績は、0 以上 M 以下の整数値です。N
個の試験成績のうち、上位 K 個の平均が R
点以上であれば、めでたく単位が認定されます。上位 K 個の平均が R
点未満の場合には不合格となり、単位は認定されません。N-1
回の試験を終えたヘイホー君は、最終試験に臨もうとしています。最終試験を除く N-1
回の試験におけるヘイホー君の成績は、それぞれ S_1, S_2, …, S_{N-1}
点でした。ヘイホー君は、最終試験で何点以上取れば単位が認定されるでしょうか？入力入力は以下の形式で標準入力から与えられる。N
K M RS_1S_2:S_{N-1}1 行目には、整数 N (1 ≦ N ≦ 100), K (1 ≦ K ≦ N), M (1 ≦ M ≦
10^9), R (0 ≦ R ≦ M) が、空白区切りで与えられる。ここで、N は試験の回数、K
は成績評価に用いる試験の個数、M は各試験の満点、R
は単位認定に必要な平均点を表す。2 行目以降の N-1 行には、整数 S_i (0 ≦ S_i ≦ M)
が与えられる。これは i 回目の試験におけるヘイホー君の成績を表す。S_N
が与えられないことに注意せよ。出力出力は 1
行からなる。最終試験の結果が何点であってもヘイホー君に単位が認定されるならば、0
を出力せよ。最終試験の結果が何点であってもヘイホー君に単位が認定されないならば、-1
を出力せよ。どちらでもない場合、ヘイホー君が最終試験で取る必要のある最低点を出力せよ。いずれの場合も、出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2015-morning-middle/submissions/12472868
// 提出ID : 12472868
// 問題ID : cf_2015_morning_easy_c
// コンテストID : code-festival-2015-morning-middle
// ユーザID : xryuseix
// コード長 : 2703
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
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
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

  ll n, k, m, r;
  cin >> n >> k >> m >> r;
  vll v(n - 1);
  rep(i, n - 1) cin >> v[i];
  ll sum = 0;
  Rort(v);
  rep(i, k - 1) sum += v[i];
  if (sum + m >= k * r) {
    if (sum + ((k - 1 < n - 1) ? v[k - 1] : 0) >= k * r)
      fin(0);
    else {
      fin(k * r - sum);
    }
  } else {
    fin(-1);
  }
}
