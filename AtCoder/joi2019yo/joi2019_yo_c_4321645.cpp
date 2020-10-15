/*
問題文の引用元：https://atcoder.jp/contests/joi2019yo/tasks/joi2019_yo_c
C - マルバツスタンプ (Circle Cross Stamps)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点： 100 点
問題文 : JOI
君はマルスタンプ，バツスタンプ，マルバツスタンプの3種類のスタンプをそれぞれ 0
個以上持っている．これらはマルやバツのマークを紙に印字することができるスタンプである．マルスタンプを使うとマルが
1 つ印字され，バツスタンプを使うとバツが 1
つ印字される．マルバツスタンプを使うとマルとバツが横一列に 1
つずつ印字され，スタンプの向きを変えることで，マルの右にバツが来るようにも，バツの右にマルが来るようにも印字できる．JOI
君は，持っているスタンプをそれぞれちょうど 1
回ずつ適当な順番で使い，紙に横一列にマルとバツを印字した．印字されたマルとバツの列は文字列
S で表される．S は O と X から構成された長さ N の文字列であり，S_i =  O ならば
JOI 君が印字したマークのうち左から i 番目のものがマルであることを表し，S_i = X
ならばそれがバツであることを表す (1 ≦ i ≦ N)．あなたは，JOI
君が持っているスタンプの個数は分からないが，JOI
君が印字したマルとバツの列は知っている．印字されたマルとバツの列から，JOI
君が持っているマルバツスタンプの個数としてあり得るもののうち最大値を求めよ．
制約1 ≦ N ≦ 100000 (= 10^5)S は長さ N の文字列である．S の各文字は O か X
である．入力入力は以下の形式で標準入力から与えられる．NS出力JOI
君が持っているマルバツスタンプの個数としてあり得るもののうち最大値を出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/joi2019yo/submissions/4321645
// 提出ID : 4321645
// 問題ID : joi2019_yo_c
// コンテストID : joi2019yo
// ユーザID : xryuseix
// コード長 : 735
// 実行時間 : 2



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

  int i, n, a = 0, b = 0;
  cin >> n;
  string s;
  cin >> s;
  for (i = 0; i < n - 1; i += 2) {
    if (s[i] != s[i + 1])
      a++;
    else
      i--;
  }
  cout << a << endl;

  return 0;
}
