/*
問題文の引用元：https://atcoder.jp/contests/abc038/tasks/abc038_b
B - ディスプレイEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんは2つのディスプレイを買いました。片方のディスプレイのサイズは高さH_1mm、幅W_1mmで、もう片方のサイズは高さH_2mm、幅W_2mmです。ディスプレイを机に横に並べて置くことになりました。それぞれのディスプレイは、そのまま置くか、90度回転させて置くかのどちらかです。2つのディスプレイを机に横に並べて置き、高さを揃えることができるか判定してください。
制約1≦ H_1, W_1, H_2, W_2 ≦10^5H_1, W_1, H_2,
W_2は全て整数である入力入力は以下の形式で標準入力から与えられる。H_1 W_1H_2
W_2出力高さを揃えることができるとき YES、そうでないとき NO と 1 行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc038/submissions/4320870
// 提出ID : 4320870
// 問題ID : abc038_b
// コンテストID : abc038
// ユーザID : xryuseix
// コード長 : 682
// 実行時間 : 5



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

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == c || a == d || b == c || b == d)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
