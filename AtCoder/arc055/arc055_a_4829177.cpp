/*
問題文の引用元：https://atcoder.jp/contests/arc055/tasks/arc055_a
A - 数え上げEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
シカのAtCoDeerくんは数え上げ問題が大好きです。数え上げ問題のmodの値としてよく出てくるものに10^N
+7 の形のものがあります。Nが与えられるので、整数10^N +7を計算してください。
制約Nは整数1≦N≦100入力入力は以下の形式で標準入力から与えられる。N出力10^N
+7を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc055/submissions/4829177
// 提出ID : 4829177
// 問題ID : arc055_a
// コンテストID : arc055
// ユーザID : xryuseix
// コード長 : 963
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

  int i, n;
  string s = "1";
  cin >> n;
  rep(i, n) { s += '0'; }
  s[s.length() - 1] = '7';
  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
