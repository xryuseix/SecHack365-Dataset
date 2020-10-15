/*
問題文の引用元：https://atcoder.jp/contests/abc069/tasks/arc080_b
D - Grid ColoringEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : 縦 H 行、横 W 列のマス目があります。すぬけ君は、このマス目を色 1, 2,
..., N で塗り分けようとしています。このとき、次の条件が成り立つようにします。各
i (1 ≤ i ≤ N) について、色 i のマスはちょうど a_i 個存在する。 ただし、a_1 + a_2
+ ... + a_N = H W である。各 i (1 ≤ i ≤ N) について、色 i
のマスは上下左右に連結である。 すなわち、どの色 i のマスからどの色 i
のマスへも、上下左右に隣り合う色 i
のマスのみを辿って行き来できる。条件を満たす塗り分け方をひとつ求めてください。解は必ず存在することが示せます。
制約1 ≤ H, W ≤ 1001 ≤ N ≤ H Wa_i ≥ 1a_1 + a_2 + ... + a_N = H
W入力入力は以下の形式で標準入力から与えられる。H WNa_1 a_2 ...
a_N出力条件を満たす塗り分け方をひとつ出力せよ。塗り分け方は次のフォーマットで出力せよ。ただし、c_{i
j} は、上から i 行目、左から j 列目のマスの色である。c_{1 1} ... c_{1 W}:c_{H 1}
... c_{H W}
// ソースコードの引用元 : https://atcoder.jp/contests/abc069/submissions/7057147
// 提出ID : 7057147
// 問題ID : arc080_b
// コンテストID : abc069
// ユーザID : xryuseix
// コード長 : 1759
// 実行時間 : 3



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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int h, w, i, j, n;
  cin >> h >> w >> n;
  vector<int> a(n, 0);
  vector<int> num;
  rep(i, n) cin >> a[i];
  rep(i, n) rep(j, a[i]) num.push_back(i + 1);

  vvi ans(h, vi(w, 0));
  int p = 0;
  rep(i, h) {
    if (i % 2 == 0) {
      rep(j, w) {
        ans[i][j] = num[p];
        p++;
      }
    } else {
      for (j = w - 1; j >= 0; j--) {
        ans[i][j] = num[p];
        p++;
      }
    }
  }
  rep(i, h) {
    rep(j, w) {
      if (j != w - 1)
        cout << ans[i][j] << " ";
      else
        cout << ans[i][j] << endl;
    }
  }
  //////////////////////////////////////////////////////
  return 0;
}
