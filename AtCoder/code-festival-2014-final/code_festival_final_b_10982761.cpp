/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_b
B - 暗算ゲームEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は、一桁の暗算が大好きです。数字の列を使って、暗算の練習をしています。高橋君は、奇数番目の数字が表す数を足し、偶数番目の数字が表す数を引く、という計算を繰り返します。例えば、13458という数字の列が与えられたら、1-3+4-5+8を計算します。高橋君のために、この計算の結果を出力するプログラムを作成してください。入力入力は以下の形式で標準入力から与えられる。S1
行目には、高橋君が計算に使用する数字の列 S (1≦|S|≦1000) が与えられる。S
に含まれる文字は、0から9までの数字のどれかであることが保障されている。出力
問題文 :
で指定された計算の結果を一行で出力せよ。出力の最後には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2014-final/submissions/10982761
// 提出ID : 10982761
// 問題ID : code_festival_final_b
// コンテストID : code-festival-2014-final
// ユーザID : xryuseix
// コード長 : 2072
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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
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

int main() {

  int ans = 0;
  int mode = 0;
  string s;
  cin >> s;
  ans += s[0] - '0';
  rep(i, s.size() - 1) {
    int num = s[i + 1] - '0';
    if (mode == 0)
      ans -= num;
    else
      ans += num;
    mode = 1 - mode;
  }
  fin(ans);
}
