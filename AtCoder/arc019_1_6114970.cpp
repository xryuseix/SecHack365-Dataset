/*
引用元：https://atcoder.jp/contests/arc019/tasks/arc019_1
A - お買い物クライシスEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/arc019/submissions/6114970
// 提出ID : 6114970
// 問題ID : arc019_1
// コンテストID : arc019
// ユーザID : xryuseix
// コード長 : 1693
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
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
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

  string s;
  cin >> s;
  int i;
  rep(i, s.length()) {
    if (s[i] == 'O' || s[i] == 'D') {
      s[i] = '0';
    } else if (s[i] == 'I') {
      s[i] = '1';
    } else if (s[i] == 'Z') {
      s[i] = '2';
    } else if (s[i] == 'S') {
      s[i] = '5';
    } else if (s[i] == 'B') {
      s[i] = '8';
    }
  }
  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
