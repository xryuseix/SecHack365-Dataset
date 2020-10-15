/*
問題文の引用元：https://atcoder.jp/contests/abc144/tasks/abc144_d
D - Water BottleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 高橋君は、底面が 1 辺 a~\mathrm{cm} の正方形であり、高さが
b~\mathrm{cm}
であるような直方体型の水筒を持っています。(水筒の厚みは無視できます。)この水筒の中に体積
x~\mathrm{cm}^3 の水を入れ、底面の正方形の 1
辺を軸として、この水筒を徐々に傾けます。水を溢れさせずに水筒を傾けることができる最大の角度を求めてください。
制約入力は全て整数1 ≤ a \leq 1001 ≤ b \leq 1001 ≤ x ≤
a^2b入力入力は以下の形式で標準入力から与えられる。a b
x出力水を溢れさせずに水筒を傾けることができる最大の角度を度数法で出力せよ。出力は、ジャッジの出力との絶対誤差または相対誤差が
10^{-6} 以下のとき正解と判定される。
// ソースコードの引用元 : https://atcoder.jp/contests/abc144/submissions/8187684
// 提出ID : 8187684
// 問題ID : abc144_d
// コンテストID : abc144
// ユーザID : xryuseix
// コード長 : 1812
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

  double a, b, x;
  cin >> a >> b >> x;
  double s = x / a;
  if (s >= a * b / 2) {
    double h = ((a * b - s) * 2) / a;
    printf("%.7f\n", atan2(h, a) / (2 * M_PI) * 360);
  } else {
    double h = s * 2 / b;
    printf("%.7f\n", atan2(b, h) / (2 * M_PI) * 360);
  }
}
