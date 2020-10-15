/*
問題文の引用元：https://atcoder.jp/contests/abc068/tasks/arc079_a
C - Cat Snuke and a VoyageEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 高橋キングダムには、高橋諸島という、N
個の島からなる諸島があります。便宜上、これらの島を島 1、島 2、 ...、島 N
と呼ぶことにします。これらの諸島の間では、船の定期便が M
種類運行されています。定期便はそれぞれ 2 つの島の間を行き来しており、i
種類目の定期便を使うと、島 a_i と島 b_i
の間を行き来する事ができます。すぬけくんは今島 1 にいて、島 N
に行きたいと思っています。しかし、島 1 から島 N
への定期便は存在しないことがわかりました。なので、定期便を 2 つ使うことで、島 N
に行けるか調べたいと思っています。これを代わりに調べてあげてください。
制約3 ≦ N ≦ 200,0001 ≦ M ≦ 200,0001 ≦ a_i < b_i ≦ N(a_i, b_i) \neq (1, N)i \neq
j ならば (a_i, b_i) \neq (a_j,
b_j)入力入力は以下の形式で標準入力から与えられる。N Ma_1 b_1a_2 b_2:a_M
b_M出力定期便を 2 つ使いたどり着けるならば POSSIBLE、たどり着けないならば
IMPOSSIBLE と出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/abc068/submissions/5547130
// 提出ID : 5547130
// 問題ID : arc079_a
// コンテストID : abc068
// ユーザID : xryuseix
// コード長 : 1499
// 実行時間 : 111



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
#include <bits/stdc++.h>
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

  set<int> s, t;
  int i, n, m, a, b;
  cin >> n >> m;
  rep(i, m) {
    cin >> a >> b;
    if (a > b)
      swap(a, b);
    if (a == 1)
      s.insert(b);
    if (b == n)
      t.insert(a);
  }
  bool ch = false;

  set<int>::iterator it;
  for (it = t.begin(); it != t.end(); it++) {
    if (s.find(*it) != s.end()) {
      ch = true;
      break;
    }
  }

  if (ch)
    cout << "POSSIBLE" << endl;
  else
    cout << "IMPOSSIBLE" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
