/*
問題文の引用元：https://atcoder.jp/contests/abc120/tasks/abc120_a
A - Favorite SoundEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋くんは、自動販売機でジュースを買ったときの音が好きです。その音は 1
回 A 円で聞くことができます。高橋くんは B 円持っていますが、お気に入りの音を C
回聞くと満足するため、B 円で最大 C
回まで聞けるだけ聞きます。高橋くんはお気に入りの音を何回聞くことになるでしょうか。
制約入力は全て整数である。1 \leq A, B, C \leq
100入力入力は以下の形式で標準入力から与えられる。A B
C出力高橋くんはお気に入りの音を何回聞くことになるか出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc120/submissions/4443390
// 提出ID : 4443390
// 問題ID : abc120_a
// コンテストID : abc120
// ユーザID : xryuseix
// コード長 : 667
// 実行時間 : 1



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

  int a, b, c;
  cin >> a >> b >> c;
  if (b >= a * c)
    cout << c << endl;
  else
    cout << b / a << endl;

  return 0;
}
