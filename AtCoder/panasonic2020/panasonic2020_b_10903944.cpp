/*
問題文の引用元：https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
B - BishopEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 縦 H マス、横 W
マスの盤面があります。この盤面の左上隅のマスに角行の駒が置かれています。駒が 0
回以上の好きな回数の移動を繰り返して到達できるマス目は何個あるでしょうか？ただし、角行の駒は斜めに動くものとします。より厳密には、駒が上から
r_1 番目、左から c_1 番目のマスから上から r_2 番目、左から c_2
番目のマス目に動ける条件はr_1 + c_1 = r_2 + c_2r_1 - c_1 = r_2 -
c_2のうちちょうど一方が成立することです。たとえば、駒が図の位置にあるとき、一回で移動できる場所は赤くなっているマスです。
制約1 \leq H, W \leq
10^9入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。H \
W出力駒が到達できるマス目の個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/panasonic2020/submissions/10903944
// 提出ID : 10903944
// 問題ID : panasonic2020_b
// コンテストID : panasonic2020
// ユーザID : xryuseix
// コード長 : 1956
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

  ll h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << 1 << endl;
  } else
    cout << (h * w + 1) / 2 << endl;
}
