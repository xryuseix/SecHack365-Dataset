/*
問題文の引用元：https://atcoder.jp/contests/arc040/tasks/arc040_c
C - Z塗り
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : イカの高橋君は床を塗るのが大好きです。床は N \times N
のマス目状に区切られており、すでにいくつかのマスは塗られています。i 行目 j
列目のマスをマス (i,j)
と呼ぶことにします。高橋君は特殊なインク発射装置を用いて床を塗ろうとしています。この装置を使うと、以下のように床を塗ることができます。任意の整数
r, c を入力して装置のボタンを押すと、「i = r かつ j ≦ c」または「i = r+1 かつ j
≧ c」を満たすようなすべてのマス (i,j)
を塗ることができる。高橋君は、全てのマスをこの装置で塗ろうと思っています。このとき、装置を使う必要のある回数の最小値を求めてください。入力入力はイカの形式で標準入力から与えられる。NS_1S_2:S_N1
行目には、マス目の 1 辺の個数を表す整数 N (1 ≦ N ≦ 100) が与えられる。2
行目からの N 行には、マス目の情報が与えられる。このうち i (1 ≦ i ≦ N)
行目には、長さ N の文字列 S_i が与えられる。このうち j (1 ≦ j ≦ N)
文字目は、マス (i,j) の情報を以下のように表す。.
の場合：このマスがまだ塗られていないことを表す。o
の場合：このマスがすでに塗られていることを表す。出力装置を使う回数の最小値を 1
行に出力せよ。出力の末尾に改行を入れること。



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

  int n;
  cin >> n;
  vs v(n);
  rep(i, n) cin >> v[i];
  int x = v[0].size() - 1, y = 0;
  int ans = 0;
  while (y < n) {
    if (v[y][x] == '.') {
      x--;
      y += 1;
      ans++;
      if (x < 0) {
        x = n - 1;
        y++;
      }
    } else {
      x--;
      if (x < 0) {
        y++;
        x = n - 1;
      }
    }
  }
  fin(ans);
}
