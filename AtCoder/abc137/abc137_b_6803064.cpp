/*
問題文の引用元：https://atcoder.jp/contests/abc137/tasks/abc137_b
B - One ClueEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 数直線上に 2000001 個の石が置かれています。これらの石の座標は -1000000,
-999999, -999998, \ldots, 999999, 1000000 です。これらの石のうち、ある連続する K
個の石が黒で塗られており、それ以外の石は白で塗られています。また、座標 X
にある石は黒で塗られていることが分かっています。黒で塗られている石が置かれている可能性のある座標をすべて、小さい順に出力してください。
制約1 \leq K \leq 1000 \leq X \leq
100入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。K
X出力黒で塗られている石が置かれている可能性のある座標をすべて、空白で区切って小さい順に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc137/submissions/6803064
// 提出ID : 6803064
// 問題ID : abc137_b
// コンテストID : abc137
// ユーザID : xryuseix
// コード長 : 1668
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

  int n, k;
  cin >> n >> k;
  for (int i = k - n + 1; i < k + n; i++) {
    cout << i;
    if (i == k + n - 1)
      cout << endl;
    else
      cout << " ";
  }

  //////////////////////////////////////////////////////
  return 0;
}
