/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_f
F - LCSEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 文字列 s および t が与えられます。s の部分列かつ t
の部分列であるような文字列のうち、最長のものをひとつ求めてください。注釈文字列 x
の部分列とは、x から 0
個以上の文字を取り除いた後、残りの文字を元の順序で連結して得られる文字列のことです。
制約s および t は英小文字からなる文字列である。1 \leq |s|, |t| \leq
3000入力入力は以下の形式で標準入力から与えられる。st出力s の部分列かつ t
の部分列であるような文字列のうち、最長のものをひとつ出力せよ。答えが複数ある場合、どれを出力してもよい。
// ソースコードの引用元 : https://atcoder.jp/contests/dp/submissions/6241230
// 提出ID : 6241230
// 問題ID : dp_f
// コンテストID : dp
// ユーザID : xryuseix
// コード長 : 2602
// 実行時間 : 74



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
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
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

string lcs(string s, string t) {
  vvi dp(s.size() + 1, vi(t.size() + 1));

  for (int i = 0; i < s.size(); i++) { // LCS
    for (int j = 0; j < t.size(); j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }
  string ans = "";
  int i = (int)s.size(), j = (int)t.size();
  while (i > 0 && j > 0) {
    // (i-1, j) -> (i, j) と更新されていた場合
    if (dp[i][j] == dp[i - 1][j]) {
      --i; // DP の遷移を遡る
    }
    // (i, j-1) -> (i, j) と更新されていた場合
    else if (dp[i][j] == dp[i][j - 1]) {
      --j; // DP の遷移を遡る
    }
    // (i-1, j-1) -> (i, j) と更新されていた場合
    else {
      ans = s[i - 1] +
            ans; // このとき s[i-1] == t[j-1] なので、t[j-1] + res でも OK
      --i, --j; // DP の遷移を遡る
    }
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  string s, t;
  cin >> s >> t;

  cout << lcs(s, t) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
