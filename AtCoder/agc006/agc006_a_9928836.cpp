/*
問題文の引用元：https://atcoder.jp/contests/agc006/tasks/agc006_a
A - Prefix and Suffix
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけ君は次の条件を満たす文字列に興味があります。長さ N
以上である。先頭 N 文字が文字列 s に一致する。末尾 N 文字が文字列 t
に一致する。条件を満たす文字列のうち、最も短いものの長さを求めてください。
制約1≤N≤100s, t は長さ N である。s, t
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。Nst出力条件を満たす文字列のうち、最も短いものの長さを出力せよ。



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
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main(void) {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < n; i++) {
    if (s.substr(i) == t.substr(0, n - i)) {
      fin(2 * i + s.substr(i).size());
      return 0;
      //    else fin(s.substr(0,i)+s.substr(i)+t.substr(i-1));
    }
  }
  fin(n * 2);
}
