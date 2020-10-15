/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_b
B - Problem SetEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : りんごさんは CODEFESTIVAL
の予選の問題セットを組もうとしています。りんごさんは N 個の問題案を持っており、i
個目の問題案の難易度は D_i です。予選の問題セットには M 問の問題が必要で、i
問目の問題に使う問題案の難易度はちょうど T_i でなければなりません。ただし、1
つの問題案を複数の問題に使うことはできません。りんごさんが新しく問題案を作ることなく予選の問題セットを完成させることができるかを判定して下さい。
制約1 \leq N \leq 200,0001 \leq D_i \leq 10^91 \leq M \leq 200,0001 \leq T_i
\leq 10^9入力される値は全て整数である部分点N \leq 100 かつ M \leq 100
を満たすデータセットに正解した場合は、100
点が与えられる。入力入力は以下の形式で標準入力から与えられる。ND_1 D_2 ...
D_NMT_1 T_2 ...
T_M出力りんごさんが新しく問題案を作ることなく予選の問題セットを完成させることができる場合は
YES、できない場合は NO を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2017-qualb/submissions/5791399
// 提出ID : 5791399
// 問題ID : code_festival_2017_qualb_b
// コンテストID : code-festival-2017-qualb
// ユーザID : xryuseix
// コード長 : 1684
// 実行時間 : 67



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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, i, m, j;
  cin >> n;
  vector<int> d(n, 0);
  rep(i, n) cin >> d[i];
  cin >> m;
  vi t(m, 0);
  rep(i, m) cin >> t[i];
  sort(d.begin(), d.end());
  sort(t.begin(), t.end());

  bool ch = false;
  for (i = 0, j = 0; i < n && j < m;) {
    if (d[i] == t[j]) {
      if (j == m - 1)
        ch = true;
      i++;
      j++;
    } else if (d[i] > t[j]) {
      cout << "NO" << endl;
      return 0;
    } else {
      i++;
    }
  }
  if (ch)
    fin("YES");
  else
    fin("NO");

  //////////////////////////////////////////////////////
  return 0;
}
