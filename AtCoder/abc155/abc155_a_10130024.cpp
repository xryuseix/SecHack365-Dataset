/*
問題文の引用元：https://atcoder.jp/contests/abc155/tasks/abc155_a
A - Poor
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : 3 つ組の数について、ある 2 つが等しく、残りの 1
つがそれらと異なるとき、その 3 つ組を「かわいそう」であるといいます。3 つの整数
A, B, C が与えられるので、この 3 つ組がかわいそうであれば Yes を、そうでなければ
No を出力してください。
制約A, B, C はいずれも 1 以上 9
以下の整数入力入力は以下の形式で標準入力から与えられる。A B C出力与えられる 3
つ組がかわいそうであれば Yes を、そうでなければ No を出力せよ。



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
#include <cassert>
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

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  if (a[0] == a[1] && a[1] != a[2])
    fin("Yes");
  else if (a[2] == a[1] && a[1] != a[0])
    fin("Yes");
  else
    fin("No");
}