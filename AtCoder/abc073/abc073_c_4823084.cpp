/*
問題文の引用元：https://atcoder.jp/contests/abc073/tasks/abc073_c
C - Write and EraseEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
あなたは、joisinoお姉ちゃんと以下のようなゲームをしています。最初、何も書いていない紙がある。joisinoお姉ちゃんが一つの数字を言うので、その数字が紙に書いてあれば紙からその数字を消し、書いていなければその数字を紙に書く。これを
N
回繰り返す。その後、紙に書かれている数字がいくつあるかを答える。joisinoお姉ちゃんが言った数字が、言った順番に
A_1, ... ,A_N
として与えられるので、ゲーム終了後に紙に書かれている数字がいくつあるか答えてください。
制約1≦N≦1000001≦A_i≦1000000000(=10^9)入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。NA_1:A_N出力ゲーム終了後に紙に書かれている数字の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc073/submissions/4823084
// 提出ID : 4823084
// 問題ID : abc073_c
// コンテストID : abc073
// ユーザID : xryuseix
// コード長 : 1024
// 実行時間 : 50



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

  set<int> s;
  int n, i, a;
  cin >> n;
  rep(i, n) {
    cin >> a;
    if (s.find(a) != s.end())
      s.erase(a);
    else
      s.insert(a);
  }
  cout << s.size() << endl;

  //////////////////////////////////////////////////////
  return 0;
}
