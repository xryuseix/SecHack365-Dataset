/*
問題文の引用元：https://atcoder.jp/contests/abc086/tasks/arc089_a
C - TravelingEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
シカのAtCoDeerくんは二次元平面上で旅行をしようとしています。AtCoDeerくんの旅行プランでは、時刻
0 に 点 (0,0) を出発し、 1 以上 N 以下の各 i に対し、時刻 t_i に 点 (x_i,y_i)
を訪れる予定です。AtCoDeerくんが時刻 t に 点 (x,y) にいる時、 時刻 t+1 には 点
(x+1,y), (x-1,y), (x,y+1), (x,y-1)
のうちいずれかに存在することができます。その場にとどまることは出来ないことに注意してください。AtCoDeerくんの旅行プランが実行可能かどうか判定してください。
制約1 ≤ N ≤ 10^50 ≤ x_i ≤ 10^50 ≤ y_i ≤ 10^51 ≤ t_i ≤ 10^5t_i < t_{i+1} (1 ≤ i ≤
N-1)入力は全て整数入力入力は以下の形式で標準入力から与えられる。Nt_1 x_1 y_1t_2
x_2 y_2:t_N x_N
y_N出力旅行プランが実行可能ならYesを、不可能ならNoを出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc086/submissions/4625658
// 提出ID : 4625658
// 問題ID : arc089_a
// コンテストID : abc086
// ユーザID : xryuseix
// コード長 : 1186
// 実行時間 : 22



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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX;
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

  bool ch = true;
  int n, i;
  cin >> n;
  int t1 = 0, t2, x1 = 0, x2, y1 = 0, y2;
  for (i = 0; i < n; i++) {
    cin >> t2 >> x2 >> y2;
    ll dis = (ll)abs(x2 - x1) + (ll)abs(y2 - y1), dt = t2 - t1;
    if (dis <= dt && dis % 2 == dt % 2) {
    } else {
      ch = false;
      break;
    }
    t1 = t2;
    x1 = x2;
    y1 = y2;
  }
  if (ch)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
