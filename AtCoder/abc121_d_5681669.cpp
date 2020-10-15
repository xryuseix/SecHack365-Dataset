/*
引用元：https://atcoder.jp/contests/abc121/tasks/abc121_d
D - XOR WorldEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc121/submissions/5681669
// 提出ID : 5681669
// 問題ID : abc121_d
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 1458
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

  ll a, b, i, ans;
  cin >> a >> b;
  ans = 0;

  if (a % 2 == 0) {
    if (b % 2 == 0) {
      cout << (b ^ ((max(b - a, (ll)0) + 1) / 2 % 2)) << endl;
    } else {
      cout << ((max(b - a, (ll)0) + 1) / 2 % 2) << endl;
    }
  } else {
    if (b % 2 == 0) {
      cout << (a ^ b ^ ((max(b - a - 1, (ll)0) + 1) / 2 % 2)) << endl;
    } else {
      cout << (a ^ (max(b - a - 1, (ll)0) + 1) / 2 % 2) << endl;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
