/*
問題文の引用元：https://atcoder.jp/contests/bitflyer2018-qual/tasks/bitflyer2018_qual_b
B - 洋菓子店Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : あなたは洋菓子店を経営しています。本日はショートケーキを A
個、チーズケーキを B 個用意しました。本日はこの洋菓子店を N
人の客が訪れることがわかっています。また、それぞれの客のふるまいは、文字 S、C、E
からなる長さ N の文字列 X を用いて以下のように表されます。X の i 文字目が S
の場合、i 番目に来る客はショートケーキを 1
個買う。ただし、到着した時点でショートケーキがすでに売り切れている場合は何も買わない。X
の i 文字目が C の場合、i 番目に来る客はチーズケーキを 1
個買う。ただし、到着した時点でチーズケーキがすでに売り切れている場合は何も買わない。X
の i 文字目が E の場合、i
番目に来る客はショートケーキとチーズケーキのうち到着した時点で多く残っている方を
1 個買う。ただし、両方がすでに売り切れている場合は何も買わない。また、両方が 1
以上の同じ数ずつ残っている場合はショートケーキを 1
個買う。すべての客が帰ったあと、ショートケーキおよびチーズケーキはそれぞれいくつ残っているでしょうか。
制約0 \leq A, B \leq 10^51 \leq N \leq 10^5|X| = NX の各文字は S、C、E
のいずれかである。入力入力は以下の形式で標準入力から与えられる。A B NX出力2
行出力せよ。このうち 1 行目には残ったショートケーキの個数を、2
行目には残ったチーズケーキの個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/bitflyer2018-qual/submissions/4753509
// 提出ID : 4753509
// 問題ID : bitflyer2018_qual_b
// コンテストID : bitflyer2018-qual
// ユーザID : xryuseix
// コード長 : 1126
// 実行時間 : 2



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

  string s;
  int n, i, a, b;
  cin >> a >> b >> n >> s;
  for (i = 0; i < n; i++) {
    if (s[i] == 'S' && a > 0)
      a--;
    else if (s[i] == 'C' && b > 0)
      b--;
    else if (s[i] == 'E' && a > b && a > 0)
      a--;
    else if (s[i] == 'E' && b > a && b > 0)
      b--;
    else if (s[i] == 'E' && a == b && a > 0)
      a--;
  }
  cout << a << endl << b << endl;

  //////////////////////////////////////////////////////
  return 0;
}
