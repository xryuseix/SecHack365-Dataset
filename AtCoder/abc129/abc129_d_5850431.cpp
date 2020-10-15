/*
問題文の引用元：https://atcoder.jp/contests/abc129/tasks/abc129_d
D - LampEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 縦 H 行横 W
列のグリッドが与えられます。このグリッドのうち、いくつかのマスには障害物が存在します。すぬけ君は、障害物のないマスのうち一つを選び、そのマスに明かりを設置しようとしています。設置されたマスから、上下左右の四方向にまっすぐに光線が伸びます。それぞれの方向について、最初に障害物が存在するマスにぶつかる、もしくはグリッドの端にぶつかる手前のマスまで照らされます。明かりを設置したマスも照らされますが、障害物が存在するマスは照らされません。すぬけ君は明かりによって照らされるマスの個数を最大化したいです。H
個の長さ W の文字列 S_i (1 ≤ i ≤ H) が与えられます。S_i の j 文字目 (1 ≤ j ≤ W)
が # のとき、グリッドの上から i 行目で左から j 列目のマスには障害物があり、 .
のときは障害物がありません。照らされるマスの個数の最大値を求めてください。
制約1 ≤ H ≤ 2,0001 ≤ W ≤ 2,000S_i は # と . のみからなる長さ W の文字列S_i (1 ≤
i ≤ H) のうちいずれかに . は最低 1
つ存在する入力入力は以下の形式で標準入力から与えられる。H
WS_1:S_H出力照らされるマスの個数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc129/submissions/5850431
// 提出ID : 5850431
// 問題ID : abc129_d
// コンテストID : abc129
// ユーザID : xryuseix
// コード長 : 2669
// 実行時間 : 157



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
#define STI(s) atoi(s.c_str()) // string to int
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
  int h, w, i, j;
  cin >> h >> w;
  vector<vector<char>> v(h + 2, vector<char>(w + 2, '%'));
  vector<vector<pair<int, int>>> ans(
      h + 2, vector<pair<int, int>>(w + 2, make_pair(0, 0)));
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= w; j++)
      cin >> v[i][j];
  }
  for (i = 1; i <= h; i++) { // yoko
    for (j = 1; j <= w; j++) {
      if (v[i][j] == '#')
        continue;
      else {
        int sum = 0;
        int t = 0;
        while (v[i][j + t] == '.') {
          sum++;
          t++;
        }
        for (t = 0; t < sum; t++) {
          ans[i][j + t].second = sum;
        }
        j += sum;
      }
    }
  }
  for (i = 1; i <= w; i++) { // tate
    for (j = 1; j <= h; j++) {
      if (v[j][i] == '#')
        continue;
      else {
        int sum = 0;
        int t = 0;
        while (v[j + t][i] == '.') {
          sum++;
          t++;
        }
        for (t = 0; t < sum; t++) {
          ans[j + t][i].first = sum;
        }
        j += sum;
      }
    }
  }
  int maxans = 0;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= w; j++) {
      maxans = max(maxans, ans[i][j].first + ans[i][j].second - 1);
    }
  }
  fin(maxans); /*
   for(i=1;i<=h;i++){
       for(j=1;j<=w;j++){
           cout<<"("<<ans[i][j].first<<" "<<ans[i][j].second<<") ";
       }
       cout<<endl;
   }*/
  //////////////////////////////////////////////////////
  return 0;
}
