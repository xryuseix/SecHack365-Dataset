/*
問題文の引用元：https://atcoder.jp/contests/agc007/tasks/agc007_a
A - Shik and StoneEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :    #nck {      width: 30px;      height: auto;   }縦 H 行、横 W
列のマス目に区切られた盤面があります。はじめ、駒が左上隅のマスに置かれていました。シックはこの駒を
1
マスずつ上下左右に動かし、右下隅のマスに移動させました。このとき、駒が同じマスを複数回通った可能性もあります（左上隅や右下隅のマスも含む）。縦横に並んだ文字
a_{ij} (1 \leq i \leq H, 1 \leq j \leq W) が与えられます。a_{ij} が #
のとき、駒が移動する過程で i 行 j
列目のマスを一度以上通ったことを表します（左上隅や右下隅のマスは必ず通ったものとして扱います）。a_{ij}
が . のとき、駒が i 行 j
列目のマスを一度も通らなかったことを表します。移動する過程で、駒が常に右または下に動いていた可能性があるか判定してください。
制約2 \leq H, W \leq 8a_{i,j} は # または . である。
問題文 : および a
で与えられる情報と整合するような駒の動き方が存在する。入力入力は以下の形式で標準入力から与えられる。H
WA_{11}A_{12}...A_{1W}:A_{H1}A_{H2}...A_{HW}出力移動する過程で、駒が常に右または下に動いていた可能性があれば
Possible 、なければ Impossible と出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc007/submissions/9005398
// 提出ID : 9005398
// 問題ID : agc007_a
// コンテストID : agc007
// ユーザID : xryuseix
// コード長 : 2500
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
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int h, w;
  cin >> h >> w;
  int x = 0, y = 0;
  vs v(h);
  rep(i, h) cin >> v[i];
  while (x < w - 1 || y < h - 1) {
    bool ch = false;
    if (v[y][x] != '#') {
      fin("Impossible");
      return 0;
    } else if (x < w - 1 && v[y][x + 1] == '#') {
      v[y][x] = '.';
      x++;
      ch = 1;
    } else if (y < h - 1 && v[y + 1][x] == '#') {
      v[y][x] = '.';
      y++;
      ch = 1;
    }
    if ((x == 0 && y == 0) || (x == w - 1 && y == h - 1)) {
      v[y][x] = '.';
      ch = 1;
    }
    if (!ch) {
      fin("Impossible");
      return 0;
    }
  }
  // rep(i,h){rep(j,w){
  //     cout<<v[i][j]<<" ";
  // }
  //     cout<<endl;
  // }
  rep(i, h) rep(j, w) {
    if (v[i][j] == '#') {
      fin("Impossible");
      return 0;
    }
  }
  fin("Possible");
}
