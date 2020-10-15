/*
問題文の引用元：https://atcoder.jp/contests/caddi2018/tasks/caddi2018_b
D - HarlequinEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 一本のりんごの木があり、N 色のりんごが実っています。これらのりんごの N
種類の色には 1 から N までの番号が振られており、i 番の色のりんごは a_i
個あります。あなたとダックスフンドのルンルンは、以下の行動を交互に行います
(あなたから始めます)。木から 1
個以上のりんごを選んで食べる。ただし、一度に選ぶりんごは全て異なる色でなければならない。木から最後のりんごを食べた者を勝者とします。あなたとルンルンがともに最善を尽くすとき、どちらが勝つでしょうか？
制約1 ≤ N ≤ 10^51 ≤ a_i ≤
10^9入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。Na_1a_2:a_N出力あなたが勝つなら
first、ルンルンが勝つなら second と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/caddi2018/submissions/10499397
// 提出ID : 10499397
// 問題ID : caddi2018_b
// コンテストID : caddi2018
// ユーザID : xryuseix
// コード長 : 2002
// 実行時間 : 58



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

  int n;
  cin >> n;
  rep(i, n) {
    int k;
    cin >> k;
    if (k % 2 == 1) {
      fin("first");
      return 0;
    }
  }
  fin("second");
}
