/*
問題文の引用元：https://atcoder.jp/contests/ddcc2017-qual/tasks/ddcc2017_qual_b
B - 鉛筆Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 鉛筆 1 ダースは 12 本、 1 グロスは 144 本、 1 グレートグロスは 1728
本です。A グレートグロスの鉛筆と、 B グロスの鉛筆と、 C ダースの鉛筆と、 D
本の鉛筆があるとき、合計で鉛筆は何本あるか答えてください。
制約0≦A,B,C,D≦11
入力は整数からなる入力入力は以下の形式で標準入力から与えられる。A B C
D出力合計で鉛筆が x 本あるとき、 x を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/ddcc2017-qual/submissions/8260038
// 提出ID : 8260038
// 問題ID : ddcc2017_qual_b
// コンテストID : ddcc2017-qual
// ユーザID : xryuseix
// コード長 : 1653
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << a * 1728 + b * 144 + c * 12 + d << endl;
}