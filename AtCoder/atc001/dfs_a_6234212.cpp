/*
問題文の引用元：https://atcoder.jp/contests/atc001/tasks/dfs_a
A - 深さ優先探索Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
この問題は、講座用問題です。ページ下部に解説が掲載されています。高橋君の住む街は長方形の形をしており、格子状の区画に区切られています。長方形の各辺は東西及び南北に並行です。各区画は道または塀のどちらかであり、高橋君は道を東西南北に移動できますが斜めには移動できません。また、塀の区画は通ることができません。高橋君が、塀を壊したりすることなく道を通って魚屋にたどり着けるかどうか判定してください。入力入力は以下の形式で標準入力から与えられる。H
Wc_{0,0} c_{0,1} c_{0,W-1}c_{1,0} c_{1,1} c_{1,W-1}:c_{H-1,0} c_{H-1,1}
c_{H-1,W-1}1 行目には、街の南北の長さとして整数 H(1≦H≦500)
と東西の長さとして整数 W(1≦W≦500) が空白で区切られて与えられる。2 行目からの H
行には、格子状の街の各区画における状態 c_{i,j}(0≦i≦H-1, 0≦j≦W-1) が与えられる。i
行目 j 文字目の文字 c_{i,j} はそれぞれ s, g, ., # のいずれかで与えられ、座標
(j,i) が下記のような状態であることを表す。s : その区画が家であることを表す。g :
その区画が魚屋であることを表す。. : その区画が道であることを表す。# :
その区画が塀であることを表す。高橋君は家・魚屋・道は通ることができるが、塀は通ることができない。与えられた街の外を通ることはできない。s
と g はそれぞれ 1 つずつ与えられる。出力塀を 1
回も壊さずに、家から魚屋まで辿り着くことができる場合は Yes、辿りつけない場合は
No を標準出力に 1 行で出力せよ。解説    深さ優先探索による塗りつぶし  from
AtCoder Inc.
// ソースコードの引用元 : https://atcoder.jp/contests/atc001/submissions/6234212
// 提出ID : 6234212
// 問題ID : dfs_a
// コンテストID : atc001
// ユーザID : xryuseix
// コード長 : 2499
// 実行時間 : 11



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out
int h, w;
int s_x, s_y, g_x, g_y;
vvi v(510, vi(510, INF));
vs grid(510);
bool goal = false;
int ans = 0;
int dfs(int x, int y, int depth) {
  if (goal)
    return 0;
  if (x == g_x && y == g_y) {
    goal = true;
    ans = depth;
    return 0;
  }
  grid[y][x] = '&';

  // cout<<x<<" "<<y<<endl;

  if (x + 1 < w && (grid[y][x + 1] == 'g' || grid[y][x + 1] == '.'))
    dfs(x + 1, y, depth + 1);
  if (x - 1 >= 0 && (grid[y][x - 1] == 'g' || grid[y][x - 1] == '.'))
    dfs(x - 1, y, depth + 1);
  if (y + 1 < h && (grid[y + 1][x] == 'g' || grid[y + 1][x] == '.'))
    dfs(x, y + 1, depth + 1);
  if (y - 1 >= 0 && (grid[y - 1][x] == 'g' || grid[y - 1][x] == '.'))
    dfs(x, y - 1, depth + 1);
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  cin >> h >> w;
  rep(i, h) cin >> grid[i];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (grid[i][j] == 's') {
        s_x = j;
        s_y = i;
      }
      if (grid[i][j] == 'g') {
        g_x = j;
        g_y = i;
      }
    }
  }
  int d = dfs(s_x, s_y, 0);

  if (ans > 0) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
