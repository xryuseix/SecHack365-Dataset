/*
問題文の引用元：https://atcoder.jp/contests/abc063/tasks/abc063_a
A - RestrictedEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 二つの整数 A, B が入力されます。A + B の値を出力してください。ただし、A
+ B が 10 以上の場合は、代わりに error と出力してください。
制約A, B は整数である。1 ≤ A, B ≤
9入力入力は以下の形式で標準入力から与えられる。A B出力A + B が 10
以上の場合は、文字列 error を英小文字で出力せよ。そうでない場合は、A + B
の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc063/submissions/9272957
// 提出ID : 9272957
// 問題ID : abc063_a
// コンテストID : abc063
// ユーザID : xryuseix
// コード長 : 1749
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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  int a, b;
  cin >> a >> b;
  if (a + b >= 10)
    fin("error");
  else
    fin(a + b);
  // cout<<((a+b<10)?(a+b):"error")<<endl;
}