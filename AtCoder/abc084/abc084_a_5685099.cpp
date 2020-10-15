/*
問題文の引用元：https://atcoder.jp/contests/abc084/tasks/abc084_a
A - New YearEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 12 月 30 日の M 時から次の年になるまでは何時間か、求めてください。
制約1≦M≦23入力は全て整数入力入力は以下の形式で標準入力から与えられる。M出力12 月
30 日の M 時から次の年になるまでが x 時間のとき、x を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc084/submissions/5685099
// 提出ID : 5685099
// 問題ID : abc084_a
// コンテストID : abc084
// ユーザID : xryuseix
// コード長 : 1165
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
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
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

  int n;
  cin >> n;
  cout << 24 + 24 - n << endl;

  //////////////////////////////////////////////////////
  return 0;
}
