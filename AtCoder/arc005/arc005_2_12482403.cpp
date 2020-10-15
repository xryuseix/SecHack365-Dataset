/*
問題文の引用元：https://atcoder.jp/contests/arc005/tasks/arc005_2
B - P-CASカードと高橋君Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 　高橋君は来る 7 月 27
日の土用の丑の日に備えて、高級なうなぎを通販で買うことにしました。支払いはネット銀行を通して行います。　高橋君が利用しているネット銀行のカードの裏には、下図のような縦
9 文字 ×横 9
文字の数字から成る乱数表がついています。支払う時は、この乱数表の指定された位置から縦横斜めの中で指定された向きに
4
文字連続で抜き出して入力し、それが正しいかによって本人確認を行います。　下図は「上から
1 文字目、左から 1 文字目」の位置から「右下斜め」の方向が指定された時の 4
文字を抜き出した例です。この場合は 7930 が入力する数字になります。図：1 行目 1
文字目から右下方向に 4
文字抜き出す例　乱数表の一番端の文字を抜き出した後もさらに文字を抜き出す必要がある場合は、向きを変更して残りの文字を抜き出します。向きの変更は以下のように行います。読み込み時に進んでいた方向が上下左右の場合向きを
180 度変える読み込み時に進んでいた方向が斜めの場合角で向きを変更する場合向きを
180
度変える左右の端で向きを変更する場合左右への向きのみ逆にし、上下への向きはそのままにする上下の端で向きを変更する場合上下への向きのみ逆にし、左右への向きはそのままにする　これらの向きの変更を図で示すと下図のようになる。図：変更する向きの一覧　乱数表、抜き出す最初の数字の位置、抜き出す向きが与えられる時、本人確認のため入力する
4 文字を答えてください。入力入力は以下の形式で標準入力から与えられる。x y
Wc_{11}c_{12}…c_{19}c_{21}c_{22}…c_{29}::c_{91}c_{92}…c_{99}入力は 10 行ある。1
行目には、抜き出す最初の数字が左から何文字目かを表す整数
x(1≦x≦9)、抜き出す最初の数字が上から何文字目かを表す整数
y(1≦y≦9)、抜き出す方向を表す W が空白で区切られて与えられる。抜き出す方向 W は
R、L、U、D、RU、RD、LU、LD
のいずれかで与えられ、抜き出す方向が以下であることを表す。R : 右方向L : 左方向U
: 上方向D : 下方向RU : 右上に斜め方向RD : 右下に斜め方向LU : 左上に斜め方向LD :
左下に斜め方向2 行目からの 9 行は、乱数表の数字を表す整数 c_{ij}(1≦i,j≦9)
が与えられる。i 行目 j 番目の数字は、乱数表の上から i 番目、左から j
番目の数字が c_{ij} であることを表す。c_{ij} は
0-9のいずれかである。出力指定された位置から指定された方向に数字を 4
文字抜き出し、それらの数字を標準出力に 1
行で出力せよ。なお、最後には改行を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc005/submissions/12482403
// 提出ID : 12482403
// 問題ID : arc005_2
// コンテストID : arc005
// ユーザID : xryuseix
// コード長 : 3452
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

  int x, y;
  string s;
  cin >> x >> y >> s;
  vvi w(9, vi(25));
  rep(i, 9) {
    string t;
    cin >> t;
    rep(j, 9) w[i][j + 8] = t[j] - '0';
    rep(j, 8) w[i][17 + j] = w[i][15 - j];
    rep(j, 8) w[i][7 - j] = w[i][9 + j];
  }
  vvi v;
  rep(i, 8) { v.pb(w[8 - i]); }
  rep(i, 9) { v.pb(w[i]); }
  rep(i, 8) { v.pb(w[7 - i]); }
  // rep(i,25)dump(v[i]);
  x += 7;
  y += 7;
  int dx, dy;

  if (s == "R") {
    dx = 1;
    dy = 0;
  }
  if (s == "L") {
    dx = -1;
    dy = 0;
  }
  if (s == "U") {
    dx = 0;
    dy = -1;
  }
  if (s == "D") {
    dx = 0;
    dy = 1;
  }
  if (s == "RU") {
    dx = 1;
    dy = -1;
  }
  if (s == "RD") {
    dx = 1;
    dy = 1;
  }
  if (s == "LU") {
    dx = -1;
    dy = -1;
  }
  if (s == "LD") {
    dx = -1;
    dy = 1;
  }
  vi ans;
  rep(i, 4) {
    ans.pb(v[y][x]);
    y += dy;
    x += dx;
  }
  rep(i, 4) cout << ans[i];
  cout << endl;
}
