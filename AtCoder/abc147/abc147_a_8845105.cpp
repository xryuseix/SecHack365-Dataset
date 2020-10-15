/*
問題文の引用元：https://atcoder.jp/contests/abc147/tasks/abc147_a
A - BlackjackEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 3 個の整数 A_1, A_2, A_3 が与えられます。A_1+A_2+A_3 が 22 以上なら
bust、21 以下なら win を出力してください。
制約1 \leq A_i \leq 13 \ \
(i=1,2,3)入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。A_1
A_2 A_3出力A_1+A_2+A_3 が 22 以上なら bust、21 以下なら win を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc147/submissions/8845105
// 提出ID : 8845105
// 問題ID : abc147_a
// コンテストID : abc147
// ユーザID : xryuseix
// コード長 : 1657
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
#include <unordered_set>
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
#define itn int
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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int a, b, c;
  cin >> a >> b >> c;
  if (a + b + c >= 22)
    fin("bust");
  else
    fin("win");
}