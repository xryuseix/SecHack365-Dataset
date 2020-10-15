/*
問題文の引用元：https://atcoder.jp/contests/abc123/tasks/abc123_b
B - Five DishesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB﻿
配点: 200 点
問題文 : AtCoder 料理店では、以下の 5
つの料理が提供されています。ここで、「調理時間」は料理を注文してから客に届くまでの時間とします。
ABC 丼： 調理時間 A 分ARC カレー： 調理時間 B 分AGC パスタ： 調理時間 C 分APC
ラーメン： 調理時間 D 分ATC ハンバーグ： 調理時間 E
分また、この店には以下のような「注文のルール」があります。  注文は、10
の倍数の時刻 (時刻 0, 10, 20, 30, ...)
にしかできない。一回の注文につき一つの料理しか注文できない。ある料理を注文したら、それが届くまで別の注文ができない。ただし、料理が届いたちょうどの時刻には注文ができる。E869120
君は時刻 0 に料理店に着きました。彼は 5
つの料理全てを注文します。最後の料理が届く最も早い時刻を求めてください。ただし、料理を注文する順番は自由であり、時刻
0 に注文することも可能とであるとします。
制約A, B, C, D, E は 1 以上 123
以下の整数入力入力は以下の形式で標準入力から与えられる。
ABCDE出力最後の料理が届く最も早い時刻を整数で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc123/submissions/4846680
// 提出ID : 4846680
// 問題ID : abc123_b
// コンテストID : abc123
// ユーザID : xryuseix
// コード長 : 1200
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

  int i, a[5], b[5], num;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  for (i = 0; i < 5; i++)
    b[i] = (10 - a[i] % 10) % 10;
  int diff = 0;
  for (i = 0; i < 5; i++) {
    if (diff < b[i]) {
      diff = max(diff, b[i]);
      num = i;
    }
  }
  ll ans = 0;
  for (i = 0; i < 5; i++) {
    if (i != num) {
      ans += a[i];
      ans += 9;
      ans = ans / 10 * 10;
    } else
      num = i;
  }
  ans += a[num];
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
