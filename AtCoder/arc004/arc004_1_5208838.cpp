/*
問題文の引用元：https://atcoder.jp/contests/arc004/tasks/arc004_1
A - 2点間距離の最大値 ( The longest distance )Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 平面上に N 個の点があり、それぞれ 0 から N-1
までの番号が付けられており、それぞれの点について x 座標と y
座標が与えられています。その N 点のうち 2
点を選び結んで得られる線分のうち、最も長くなる線分の長さを求めてください。入力入力は以下の形式で標準入力から与えられる。Nx_{0}
y_{0}x_{1} y_{1}::x_{N-1} y_{N-1}入力は N+1 行ある。1
行目には、点の個数を表す整数 N (2≦N≦100)が与えられる。2 行目から N+1 行目までの
i+2 (0 ≦ i < N) 行目には、i 番の点の x 座標を表す整数 x_{i}(0≦x_{i}≦100) と y
座標を表す整数 y_{i}(0≦y_{i}≦100)
が空白を区切りとして与えられる。与えられる点のうち x 座標と y
座標がともに一致する点の組は存在しないが、2
つの点を繋ぐ線分上に他の点が存在することはありうる。出力N 点のうち 2
点を選び結んで得られる線分のうち、最も長い線分の長さを標準出力に 1
行で出力せよ。誤差は絶対誤差あるいは相対誤差の少なくとも片方が 10^{-3}
以下であれば許容する。なお、最後には改行を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc004/submissions/5208838
// 提出ID : 5208838
// 問題ID : arc004_1
// コンテストID : arc004
// ユーザID : xryuseix
// コード長 : 1297
// 実行時間 : 1



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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i, n, j;
  cin >> n;
  int a[n][2];
  double dis, longest = 0.0;
  rep(i, n) cin >> a[i][0] >> a[i][1];
  rep(i, n) {
    for (j = i + 1; j < n; j++) {
      dis = sqrt((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) +
                 (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]));
      longest = max(longest, dis);
    }
  }
  printf("%.4f\n", longest);

  //////////////////////////////////////////////////////
  return 0;
}
