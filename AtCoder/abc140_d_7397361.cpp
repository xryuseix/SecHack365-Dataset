/*
引用元：https://atcoder.jp/contests/abc140/tasks/abc140_d
D - Face Produces UnhappinessEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc140/submissions/7397361
// 提出ID : 7397361
// 問題ID : abc140_d
// コンテストID : abc140
// ユーザID : xryuseix
// コード長 : 2135
// 実行時間 : 2



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
#include <cfloat>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
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

int count(string &s) {
  int res = 0;
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i + 1])
      res++;
  }
  return res;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, k;
  cin >> n >> k;
  string s, t;
  cin >> s;
  t = s;
  //全部左のに揃える
  int kn = k;
  for (int i = 1; i < n; i++) {
    if (kn > 0 && s[i] != s[0]) {
      kn--;
      int j = 0;
      while (i + j < n && s[i + j] != s[0]) {
        s[i + j] = s[0];
        j++;
      }
      i = max(i + j - 1, i);
    }
    if (kn == 0)
      break;
  }
  fin(count(s));
  // fin(s);

  //////////////////////////////////////////////////////
  return 0;
}
