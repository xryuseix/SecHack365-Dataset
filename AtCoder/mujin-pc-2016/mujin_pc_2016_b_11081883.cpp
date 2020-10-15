/*
問題文の引用元：https://atcoder.jp/contests/mujin-pc-2016/tasks/mujin_pc_2016_b
B - Robot ArmEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
あなたはロボットアームを持っています。ロボットアームの構造は、二次元平面上の折れ線
O-A-B-C で表されます（下図）。点 O は原点 (0,\ 0)
に固定されています。ロボットアームは、点 O，A，B
で折れ線の角度を自由に変えられますが、線分 OA，AB，BC
の長さは変えられません。また、折れ線には自己交差があっても構いません。線分
OA，AB，BC の長さが与えられるので、点 C
が移動できる領域の面積を求めてください。入力入力は以下の形式で標準入力から与えられる。l_{OA}
l_{AB} l_{BC}1 行目には、線分 OA，AB，BC の長さを表す整数 l_{OA}，l_{AB}，l_{BC}
(1≦l_{OA},\ l_{AB},\ l_{BC}≦100) が空白区切りで与えられる。出力点 C
が移動できる領域の面積を出力せよ。絶対誤差または相対誤差が 10^{-6}
以下ならば正解となる。出力の末尾には改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/mujin-pc-2016/submissions/11081883
// 提出ID : 11081883
// 問題ID : mujin_pc_2016_b
// コンテストID : mujin-pc-2016
// ユーザID : xryuseix
// コード長 : 2281
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

  double a, b, c;
  cin >> a >> b >> c;
  if (a > b)
    swap(a, b);
  if (b > c)
    swap(b, c);
  if (a > b)
    swap(a, b);
  double D = a + b + c;
  double d = (a + b <= c) ? c - a - b : 0;
  printf("%.6f\n", MATHPI * (D * D - d * d));
}
