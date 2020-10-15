/*
引用元：https://atcoder.jp/contests/arc001/tasks/arc001_2
B - リモコンEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/arc001/submissions/7072763
// 提出ID : 7072763
// 問題ID : arc001_2
// コンテストID : arc001
// ユーザID : xryuseix
// コード長 : 1928
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
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
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int a, b;
  cin >> a >> b;
  int ans = 0;
  if (a > b)
    swap(a, b);
  while (a != b) {
    if (b - a >= 10) {
      a += 10;
      ans++;
    } else if (b - a >= 4 && b - a <= 7) {
      a += 5;
      ans++;
    } else if (b - a > 7) {
      a += 10;
      ans++;
    } else {
      ans += abs(b - a);
      a = b;
    }
  }
  fin(ans);
  //////////////////////////////////////////////////////
  return 0;
}
