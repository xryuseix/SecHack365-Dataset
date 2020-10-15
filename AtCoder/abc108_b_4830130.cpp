/*
引用元：https://atcoder.jp/contests/abc108/tasks/abc108_b
B - Ruined SquareEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc108/submissions/4830130
// 提出ID : 4830130
// 問題ID : abc108_b
// コンテストID : abc108
// ユーザID : xryuseix
// コード長 : 1385
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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
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

  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dx = abs(x2 - x1), dy = abs(y2 - y1);
  //	cout<<dx<<" "<<dy<<endl;
  int x3, x4, y3, y4;
  if (x1 < x2) {
    if (y1 < y2) {
      x3 = x2 - dy;
      y3 = y2 + dx;
      x4 = x3 - dx;
      y4 = y3 - dy;
    } else {
      x3 = x2 + dx;
      y3 = y2 + dy;
      x4 = x3 - dy;
      y4 = y3 + dx;
    }
  } else {
    if (y1 < y2) {
      //			cout<<dx<<" "<<dy<<endl;
      x3 = x2 - dy;
      y3 = y2 - dx;
      x4 = x3 + dx;
      y4 = y3 - dy;
    } else {
      x3 = x2 + dy;
      y3 = y2 - dx;
      x4 = x3 + dx;
      y4 = y3 + dy;
    }
  }
  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
