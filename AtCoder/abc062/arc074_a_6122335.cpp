/*
問題文の引用元：https://atcoder.jp/contests/abc062/tasks/arc074_a
C - Chocolate BarEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : 縦 H ブロック、横 W
ブロックの板チョコがあります。すぬけ君は、この板チョコをちょうど 3
つのピースに分割しようとしています。ただし、各ピースはブロックの境目に沿った長方形でなければなりません。すぬけ君は、3
つのピースの面積 (ブロック数)
をできるだけ均等にしようとしています。具体的には、3 つのピースの面積の最大値を
S_{max}、最小値を S_{min} としたとき、S_{max} - S_{min}
を最小化しようとしています。S_{max} - S_{min} の最小値を求めてください。
制約2 ≤ H, W ≤ 10^5入力入力は以下の形式で標準入力から与えられる。H W出力S_{max}
- S_{min} の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc062/submissions/6122335
// 提出ID : 6122335
// 問題ID : arc074_a
// コンテストID : abc062
// ユーザID : xryuseix
// コード長 : 2045
// 実行時間 : 4



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

  ll h, w;
  cin >> h >> w;
  if (h % 3 == 0 || w % 3 == 0) {
    fin(0);
    return 0;
  }
  ll cmin = LLINF;
  ll a[3];
  if (h >= 3)
    cmin = min(cmin, w);
  if (w >= 3)
    cmin = min(cmin, h);

  for (ll i = 1; i < w; i++) {
    a[0] = i * h;

    a[1] = (w - i) * (h / 2);
    a[2] = (w - i) * (h - h / 2);

    sort(a, a + 3);
    cmin = min(cmin, a[2] - a[0]);
    // cout<<cmin<<endl;
  }
  for (ll i = 1; i < h; i++) {
    a[0] = i * w;

    a[1] = (h - i) * (w / 2);
    a[2] = (h - i) * (w - w / 2);

    sort(a, a + 3);
    cmin = min(cmin, a[2] - a[0]);
    // cout<<cmin<<endl;
  }
  cout << cmin << endl;
  //////////////////////////////////////////////////////
  return 0;
}
