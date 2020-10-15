/*
問題文の引用元：https://atcoder.jp/contests/arc008/tasks/arc008_1
A - たこ焼き買えるかな？Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : ある日、あなたはたこ焼きを買いに行きました。そのお店ではたこ焼き 1 個
15 円、 10 個まとめて 100 円で売っています。今、あなたは N
個のたこ焼きを買おうと思っています。あなたはたこ焼きを N
個以上買うのに少なくともいくら必要でしょうか。入力入力は以下の形式で標準入力から与えられる。N入力は
1 行ある。 1 行目には、購入したいたこ焼きの個数を表す整数 N(1≦N≦50)
が与えられる。出力たこ焼きを N 個以上買うのに必要な最小金額を標準出力に 1
行で出力すること。なお、最後には改行を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc008/submissions/5909933
// 提出ID : 5909933
// 問題ID : arc008_1
// コンテストID : arc008
// ユーザID : xryuseix
// コード長 : 1399
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
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  int sum = 0;
  while (n >= 7) {
    n -= 10;
    sum += 100;
  }
  if (n > 0)
    sum += n * 15;
  cout << sum << endl;
  //////////////////////////////////////////////////////
  return 0;
}
