/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_h
H - Grid 1Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 縦 H 行、横 W 列のグリッドがあります。上から i 行目、左から j
列目のマスを (i, j) で表します。各 i, j (1 \leq i \leq H, 1 \leq j \leq W)
について、マス (i, j) の情報が文字 a_{i, j} によって与えられます。a_{i, j} が .
ならばマス (i, j) は空マスであり、a_{i, j} が # ならばマス (i, j)
は壁のマスです。マス (1, 1) および (H, W)
は空マスであることが保証されています。太郎君は、マス (1, 1)
から出発し、右または下に隣り合う空マスへの移動を繰り返すことで、マス (H, W)
まで辿り着こうとしています。マス (1, 1) から (H, W)
までの太郎君の経路は何通りでしょうか？答えは非常に大きくなりうるので、10^9 + 7
で割った余りを求めてください。
制約H および W は整数である。2 \leq H, W \leq 1000a_{i, j} は . または #
である。マス (1, 1) および (H, W)
は空マスである。入力入力は以下の形式で標準入力から与えられる。H Wa_{1,
1}\ldotsa_{1, W}:a_{H, 1}\ldotsa_{H, W}出力マス (1, 1) から (H, W)
までの太郎君の経路は何通りか？10^9 + 7 で割った余りを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/6221550
// 提出ID : 6221550
// 問題ID : dp_h
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 2238
// 実行時間 : 19



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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int h, w;
  cin >> h >> w;
  char grid[h][w];
  int path[h][w];
  rep(i, h) rep(j, w) cin >> grid[i][j];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      path[i][j] = 0;
    }
  }
  for (int i = 0; i < w; i++) {
    if (grid[0][i] == '.')
      path[0][i] = 1;
    else
      break;
  }
  for (int i = 0; i < h; i++) {
    if (grid[i][0] == '.')
      path[i][0] = 1;
    else
      break;
  }
  for (int i = 1; i < h; i++) {
    for (int j = 1; j < w; j++) {
      if (grid[i][j] == '#')
        path[i][j] = 0;
      else {
        path[i][j] = max(path[i][j], path[i - 1][j] + path[i][j - 1]);
        path[i][j] %= P;
      }
    }
  }
  cout << path[h - 1][w - 1] << endl;
  /*
  for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
          cout<<path[i][j]<<" ";
      }
      cout<<endl;
  }*/

  //////////////////////////////////////////////////////
  return 0;
}
