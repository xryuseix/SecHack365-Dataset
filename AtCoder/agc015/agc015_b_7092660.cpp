/*
問題文の引用元：https://atcoder.jp/contests/agc015/tasks/agc015_b
B - EvilatorEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : すけぬ君は、N 階建てのビルを建てました。ビルにはエレベーターが 1
基あり、すべての階に止まります。すけぬ君は、各階に上下の方向ボタンを設置しましたが、うっかりしていたため、どの階にも上向きか下向きの片方のボタンしかありません。そのため、どの階からも上か下のどちらかにしか進むことができません。S_i
が U のとき i 階には上向きのボタンしかなく、上にしか進めないことを、D
のとき下向きのボタンしかなく、下にしか進めないことを表します。ある階から目的の階へと移動したい住民は、仕方がないので必要があれば他の階を経由して目的の階へと向かうことにしました。全ての階の順序対
(i,j) についての、i 階から j
階へ行くときのエレベーターに乗る回数の最小値の合計を求めてください。
制約2 ≦ |S| ≦ 10^5S_i は U または D であるS_1 は U であるS_{|S|} は D
である入力入力は以下の形式で標準入力から与えられる。S_1S_2...S_{|S|}出力全ての階の順序対
(i,j) についての、i 階から j
階へ行くときのエレベーターに乗る回数の最小値の合計を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc015/submissions/7092660
// 提出ID : 7092660
// 問題ID : agc015_b
// コンテストID : agc015
// ユーザID : xryuseix
// コード長 : 1741
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

  string s;
  cin >> s;
  ll ans = 0;
  ll n = s.length();
  for (int i = 0; i < n; i++) {
    if (s[i] == 'U') {
      ans += i * 2 + (n - i - 1);
    } else {
      ans += i + (n - i - 1) * 2;
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
