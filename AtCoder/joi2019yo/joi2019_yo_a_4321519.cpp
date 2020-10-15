/*
問題文の引用元：https://atcoder.jp/contests/joi2019yo/tasks/joi2019_yo_a
A - ソーシャルゲーム (Social Game)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点： 100 点
問題文 : JOI
君は明日から新たにソーシャルゲームを始めることにした．このソーシャルゲームでは，1
日につき 1 回までログインすることができ，ログインするたびに A
枚のコインが得られる．また，月曜日から日曜日まで 7
日連続でログインすると，そのたびに，追加で B
枚のコインが得られる．これ以外にコインがもらえることはない．明日は月曜日である．JOI
君が少なくとも C
枚のコインを得るためにログインしなければならない回数の最小値を求めよ．
制約1 ≦ A ≦ 10000 ≦ B ≦ 10001 ≦ C ≦ 1000000 (=
10^6)入力入力は以下の形式で標準入力から与えられる．A B C出力JOI 君が少なくとも C
枚のコインを得るためにログインしなければならない回数の最小値を出力せよ．小課題(40
点) B = 0(60 点) 追加の
制約はない．
// ソースコードの引用元 :
https://atcoder.jp/contests/joi2019yo/submissions/4321519
// 提出ID : 4321519
// 問題ID : joi2019_yo_a
// コンテストID : joi2019yo
// ユーザID : xryuseix
// コード長 : 714
// 実行時間 : 3



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
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
const long long INF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, a, b, c, my = 0;
  cin >> a >> b >> c;
  for (i = 1;; i++) {
    if (i % 7 == 0)
      my += b;
    my += a;
    if (my >= c)
      break;
  }
  cout << i << endl;

  return 0;
}
