/*
問題文の引用元：https://atcoder.jp/contests/tdpc/tasks/tdpc_contest
A - コンテストEditorial
Time Limit : 2 sec / Memory Limit : 256 MBProblem StatementN
問の問題があるコンテストがあり、i 問目の問題の
配点は p_i 点である。コンテスタントは、この問題の中から何問か解き、解いた問題の
配点の合計が得点となる。このコンテストの得点は何通り考えられるか。Constraints1 ≤
N ≤ 1001 ≤ p_i ≤ 100Input Format入力は以下の形式で標準入力から与えられる。Np_1
p_2 ... p_NOutput Format答えを一行に出力せよ。Sample Input 132 3 5Sample Output
170, 2, 3, 5, 7, 8, 10 の 7 通りの得点が考えられる。Sample Input 2101 1 1 1 1 1
1 1 1 1Sample Output 2110, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 の 11
通りの得点が考えられる。
// ソースコードの引用元 : https://atcoder.jp/contests/tdpc/submissions/6221260
// 提出ID : 6221260
// 問題ID : tdpc_contest
// コンテストID : tdpc
// ユーザID : xryuseix
// コード長 : 1799
// 実行時間 : 3



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

bool can[10010] = {false};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  vi p(n);
  rep(i, n) cin >> p[i];
  can[0] = true;
  for (int i = 0; i < n; i++) {
    for (int j = 10009; j >= 0; j--) {
      if (can[j] && j + p[i] < 10010) {
        can[j + p[i]] = true;
      }
    }
    can[p[i]] = true;
  }
  int ans = 0;
  for (int i = 0; i < 10010; i++) {
    if (can[i])
      ans++;
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
