/*
問題文の引用元：https://atcoder.jp/contests/abc065/tasks/abc065_b
B - Trained?Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 筋力をつけたい高橋君は、AtCoder
社のトレーニング設備で、トレーニングをすることにしました。AtCoder
社のトレーニング設備には N 個のボタンがついており、ちょうど 1
個のボタンが光っています。ボタンには、1 から N までの番号がついています。ボタン
i が光っているときにそのボタンを押すと、ボタン i の明かりが消え、その後ボタン
a_i が光ります。i=a_i
であることもあります。光っていないボタンを押しても、何も起こりません。最初、ボタン
1 が光っています。高橋君は、ボタン 2
が光っている状態で、トレーニングをやめたいと思っています。そのようなことは可能かどうか判定し、もし可能なら最低で何回ボタンを押す必要があるかを求めてください。
制約2 ≦ N ≦ 10^51 ≦ a_i ≦
N入力入力は以下の形式で標準入力から与えられる。Na_1a_2:a_N出力ボタン 2
を光らせることが不可能な場合、-1 を出力せよ。そうでない場合、ボタン 2
を光らせるために必要なボタンを押す回数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc065/submissions/4277769
// 提出ID : 4277769
// 問題ID : abc065_b
// コンテストID : abc065
// ユーザID : xryuseix
// コード長 : 767
// 実行時間 : 17



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, n, p = 1;
  cin >> n;
  int a[n + 1] = {0};
  for (i = 1; i <= n; i++)
    cin >> a[i];
  for (i = 0; i < 1000000; i++) {
    //		cout<<i<<" "<<p<<" "<<a[p]<<endl;;
    p = a[p];
    if (p == 2) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}
