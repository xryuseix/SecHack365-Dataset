/*
問題文の引用元：https://atcoder.jp/contests/tkppc2/tasks/tkppc2016_a
A - 入社（Join the Company）Editorial
Time Limit : 1 sec / Memory Limit : 64 MB
問題文 :
joisinoお姉ちゃんは、AtJump社というゲーム会社に就職した。joisinoお姉ちゃんは極めて優秀なプログラマーなので、ゲームプログラミングだけでなく、社内のいろいろな問題を解決するプログラムの作成も仕事として任されている。joisinoお姉ちゃんの最初の仕事は、二つの文字列に分割されてしまった文字列を元に戻すプログラムを作成することである。入力入力は以下の形式で標準入力から与えられる。ST1行目には、分割された文字の前方の文字列S(1≦|S|≦50,Sはすべて小文字アルファベットからなる)が書かれている。2行目には、分割された文字の後方の文字列T(1≦|T|≦50,Tはすべて小文字アルファベットからなる)が書かれている。出力与えられた二つの文字列を順番通りつなげた文字列を1行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/tkppc2/submissions/5663361
// 提出ID : 5663361
// 問題ID : tkppc2016_a
// コンテストID : tkppc2
// ユーザID : xryuseix
// コード長 : 1169
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

  string s, t;
  cin >> s >> t;
  cout << s + t << endl;

  //////////////////////////////////////////////////////
  return 0;
}
