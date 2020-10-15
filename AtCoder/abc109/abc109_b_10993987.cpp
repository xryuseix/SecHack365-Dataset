/*
問題文の引用元：https://atcoder.jp/contests/abc109/tasks/abc109_b
B - ShiritoriEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋くんは今日も 1
人でしりとりの練習をしています。しりとりとは以下のルールで遊ばれるゲームです。はじめ、好きな単語を発言する以降、次の条件を満たす単語を発言することを繰り返すその単語はまだ発言していない単語であるその単語の先頭の文字は直前に発言した単語の末尾の文字と一致する高橋くんは、10
秒間にできるだけ多くの単語を発言する練習をしています。高橋くんが発言した単語の個数
N と i 番目に発言した単語 W_i
が与えられるので、どの発言もしりとりのルールを守っていたかを判定してください。
制約N は 2 \leq N \leq 100 を満たす整数であるW_i は英小文字からなる長さ 1 以上
10
以下の文字列である入力入力は以下の形式で標準入力から与えられる。NW_1W_2:W_N出力高橋くんのどの発言もしりとりのルールを守っていたなら
Yes、そうでなければ No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc109/submissions/10993987
// 提出ID : 10993987
// 問題ID : abc109_b
// コンテストID : abc109
// ユーザID : xryuseix
// コード長 : 2199
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

  set<string> s;
  int n;
  cin >> n;
  vs v(n);
  rep(i, n) {
    cin >> v[i];
    if (s.count(v[i]) == 1) {
      fin("No");
      return 0;
    }
    s.insert(v[i]);
  }
  rep(i, n - 1) {
    if (v[i][v[i].size() - 1] != v[i + 1][0]) {
      fin("No");
      return 0;
    }
  }
  fin("Yes");
}
