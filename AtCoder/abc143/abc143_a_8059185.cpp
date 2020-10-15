/*
問題文の引用元：https://atcoder.jp/contests/abc143/tasks/abc143_a
A - CurtainEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君の家の窓の横方向の長さは A であり、横方向の長さが B のカーテンが
2
枚取り付けられています。(カーテンは縦方向には窓を覆うのに十分な長さがあります。)窓のうちカーテンで隠されていない部分の横方向の長さが最小になるようにカーテンを閉めます。このとき、窓のカーテンで隠されていない部分の合計の横方向の長さを求めてください。
制約1 ≤ A ≤ 1001 ≤ B ≤ 100A, B
は整数である。入力入力は以下の形式で標準入力から与えられる。A
B出力窓のうちカーテンで隠されていない部分の合計の横方向の長さを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc143/submissions/8059185
// 提出ID : 8059185
// 問題ID : abc143_a
// コンテストID : abc143
// ユーザID : xryuseix
// コード長 : 1595
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
#include <cfloat>
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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int a, b;
  cin >> a >> b;
  cout << max(0, a - b * 2) << endl;
}
