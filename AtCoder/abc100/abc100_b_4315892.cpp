/*
問題文の引用元：https://atcoder.jp/contests/abc100/tasks/abc100_b
B - Ringo's Favorite NumbersEditorial
Time Limit : 2 sec / Memory Limit : 976 MB
配点: 200 点
問題文 : 今日は, 記念すべき AtCoder Beginner Contest 100 が開催される. そのため,
高橋君はりんごさんに,
ある整数をプレゼントしようと思った.今日のコンテストは「AtCoder Beginner Contest
100」なので, りんごさんは 100 で ちょうど D
回割りきれる正の整数をプレゼントされると喜ぶ.  さて,
りんごさんがプレゼントされると喜ぶような整数のうち N
番目に小さいものを求めなさい.
制約D は 0, 1, 2 のいずれかであるN は 1 以上 100
以下の整数入力入力は以下の形式で標準入力から与えられる.  D N出力100 でちょうど D
回割りきれる正の整数の中で N 番目に小さいものを出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc100/submissions/4315892
// 提出ID : 4315892
// 問題ID : abc100_b
// コンテストID : abc100
// ユーザID : xryuseix
// コード長 : 659
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

  int a, b;
  cin >> a >> b;
  int x = pow(100, a);
  if (b == 100)
    b++;
  cout << x *b << endl;

  return 0;
}
