/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_b
B - Similar ArraysEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点: 200 点
問題文 : 2 つの長さ N の整数列 x_1, x_2, ..., x_N と y_1, y_2, ..., y_N
が「似ている」とは、任意の i (1 \leq i \leq N) に対して |x_i - y_i| \leq 1
が成り立つことをいうものとします。とくに、どの整数列もその数列自身と似ていると考えます。整数
N および長さ N の整数列 A_1, A_2, ..., A_N が与えられます。A と似ている整数列
b_1, b_2, ..., b_N であって、すべての項の積 b_1 b_2 ... b_N
が偶数となるものはいくつあるか求めてください。
制約1 \leq N \leq 101 \leq A_i \leq
100入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力条件を満たす整数列の個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2017-qualc/submissions/6200878
// 提出ID : 6200878
// 問題ID : code_festival_2017_qualc_b
// コンテストID : code-festival-2017-qualc
// ユーザID : xryuseix
// コード長 : 1573
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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = pow(3, n);
  ll odd = 1;
  rep(i, n) {
    if (v[i] % 2 == 0)
      odd *= 2;
  }
  cout << ans - odd << endl;
  //////////////////////////////////////////////////////
  return 0;
}
