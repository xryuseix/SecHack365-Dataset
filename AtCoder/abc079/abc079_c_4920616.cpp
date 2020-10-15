/*
問題文の引用元：https://atcoder.jp/contests/abc079/tasks/abc079_c
C - Train TicketEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 駅の待合室に座っているjoisinoお姉ちゃんは、切符を眺めています。切符には
4 つの 0 以上 9 以下の整数 A,B,C,D が整理番号としてこの順に書かれています。A op1
B op2 C op3 D = 7 となるように、op1,op2,op3 に + か -
を入れて式を作って下さい。なお、答えが存在しない入力は与えられず、また答えが複数存在する場合はどれを出力してもよいものとします。
制約0≦A,B,C,D≦9入力は整数からなる答えが存在しない入力は与えられない入力入力は以下の形式で標準入力から与えられる。ABCD出力作った式を、=7
の部分を含めて出力せよ。ただし、記号は半角で出力せよ。また、数字と記号の間に空白を入れてはならない。
// ソースコードの引用元 : https://atcoder.jp/contests/abc079/submissions/4920616
// 提出ID : 4920616
// 問題ID : abc079_c
// コンテストID : abc079
// ユーザID : xryuseix
// コード長 : 1396
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

  int i;
  vector<char> v;
  string s;
  cin >> s;
  int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0', d = s[3] - '0';
  if (a + b + c + d == 7)
    printf("%d+%d+%d+%d=7", a, b, c, d);
  else if (a + b + c - d == 7)
    printf("%d+%d+%d-%d=7", a, b, c, d);
  else if (a + b - c + d == 7)
    printf("%d+%d-%d+%d=7", a, b, c, d);
  else if (a + b - c - d == 7)
    printf("%d+%d-%d-%d=7", a, b, c, d);
  else if (a - b + c + d == 7)
    printf("%d-%d+%d+%d=7", a, b, c, d);
  else if (a - b + c - d == 7)
    printf("%d-%d+%d-%d=7", a, b, c, d);
  else if (a - b - c + d == 7)
    printf("%d-%d-%d+%d=7", a, b, c, d);
  else if (a - b - c - d == 7)
    printf("%d-%d-%d-%d=7", a, b, c, d);

  //////////////////////////////////////////////////////
  return 0;
}
