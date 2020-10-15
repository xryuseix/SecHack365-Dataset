/*
問題文の引用元：https://atcoder.jp/contests/arc023/tasks/arc023_2
B - 謎の人物XEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は謎の人物Xに連れ去られてしまい、謎の施設に閉じ込められてしまいました。この施設の床には
R 行 C 列 のマス目が書かれていて、それぞれのマスには 1
つずつ数字が書かれています。高橋君はこのマス目の 1 行目の 1
列目のマスにいます。長い時間閉じ込められていたので、高橋君はお腹が減ってきました。謎の人物Xによると、「隣のマスに移動する」ということをちょうど
D
回行った後に高橋君がいるマスに書いてある数字と同じ値段のたこ焼きを用意してくれるそうです。あるマスの「隣のマス」とは、そのマスと辺を共有するマスのことを指します。高橋君は出来るだけ値段の高いたこ焼きが食べたいと思ったので、最大でいくらのたこ焼きを食べることが出来るかを考えることにしました。入力入力は以下の形式で標準入力から与えられる。R
C DA_{1,1} A_{1,2} ... A_{1,C}A_{2,1} A_{2,2} ... A_{2,C}:A_{R,1} A_{R,2} ...
A_{R,C}1 行目には、マス目の行数を表した整数 R (2 ≦ R ≦ 1,000)
と、マス目の列数を表した整数 C (2 ≦ C ≦ 1,000)
と、高橋君が移動しなければならない回数を表した整数 D (1 ≦ D ≦ 2,000)
が空白区切りで与えられる。続く R
行には、マス目に書かれている数字の情報が与えられる。このうちの i 番目の行には C
個の整数が空白区切りで与えられる。このうち j 番目の整数 A_{i,j} (1 ≦ A_{i,j} ≦
999) は、i 行目の j 列目のマスに書かれている数字が A_{i,j}
であることを表す。部分点この問題には部分点が設定されている。R ≦ 100 かつ C ≦ 100
かつ D ≦ 200 を満たすテストケースすべてに正解した場合は 60
点が与えられる。出力高橋君が食べることができるたこ焼きの値段の最大値を 1
行に出力せよ。出力の末尾に改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc023/submissions/11662633
// 提出ID : 11662633
// 問題ID : arc023_2
// コンテストID : arc023
// ユーザID : xryuseix
// コード長 : 3827
// 実行時間 : 269



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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
#define endl '\n';
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

int ans = 0;
// 各座標に格納したい情報を構造体にする
// 今回はX座標,Y座標,深さ(距離)を記述している
struct Corr {
  int x;
  int y;
  int depth;
};
queue<Corr> q;
void bfs(vector<vector<int>> grid, int n) {
  // 既に探索の場所を1，探索していなかったら0を格納する配列
  vector<vector<int>> ispassed(grid.size(), vector<int>(grid[0].size(), false));
  // このような記述をしておくと，この後のfor文が綺麗にかける
  int dx[8] = {1, 0, -1, 0};
  int dy[8] = {0, 1, 0, -1};
  while (!q.empty()) {
    Corr now = q.front();
    q.pop();
    if (now.depth % 2 == n % 2)
      chmax(ans, grid[now.y][now.x]);
    for (int i = 0; i < 4; i++) {
      int nextx = now.x + dx[i];
      int nexty = now.y + dy[i];

      // 次に探索する場所のX座標がはみ出した時
      if (nextx >= grid[0].size())
        continue;
      if (nextx < 0)
        continue;

      // 次に探索する場所のY座標がはみ出した時
      if (nexty >= grid.size())
        continue;
      if (nexty < 0)
        continue;

      // 次に探索する場所が既に探索済みの場合
      if (ispassed[nexty][nextx])
        continue;
      if (now.depth == n)
        continue;

      ispassed[nexty][nextx] = true;
      Corr next = {nextx, nexty, now.depth + 1};
      q.push(next);
    }
  }
}

int main() {

  int h, w, d;
  cin >> h >> w >> d;
  vvi v(h, vi(w));
  rep(i, h) rep(j, w) cin >> v[i][j];
  Corr c = {0, 0, 0};
  q.push(c);
  bfs(v, d);
  fin(ans);
}
