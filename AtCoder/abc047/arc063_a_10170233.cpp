/*
問題文の引用元：https://atcoder.jp/contests/abc047/tasks/arc063_a
C - 1D Reversi
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
きつねの次郎と三郎が一次元リバーシで遊んでいます。一次元リバーシでは、盤面には白か黒の石が一列に並んだ状態となっており、列の右端か左端に新たに石を打っていきます。通常のリバーシと同じように、たとえば白の石を打つことで黒の石を挟むと、挟まれた黒の石は白い石に変わります。ゲームの途中で三郎に急用ができて帰ってしまうことになりました。このとき、盤面の状態は文字列
S で表されます。石は |S| (文字列の長さ) 個並んでおり、左から i (1 ≦ i ≦ |S|)
個目の石の色は、S の i 文字目が B のとき黒、W
のとき白です。次郎は現在の盤面に対して、できるだけ少ない個数の石を新たに打つことで全ての石を同じ色にしようと考えました。最小で何個の石を打てばよいかを求めてください。
制約1 ≦ |S| ≦ 10^5S に含まれる文字は B または W
のいずれかである入力入力は以下の形式で標準入力から与えられる。S出力全ての石を同じ色にするために打つ必要のある石の個数の最小値を出力せよ。



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
#define STI(s) atoi(s.c_str())
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

int main(void) {

  int ans = 0;
  string s;
  cin >> s;
  rep(i, s.size() - 1) {
    if (s[i] != s[i + 1])
      ans++;
  }
  fin(ans);
}
