/*
問題文の引用元：https://atcoder.jp/contests/abc034/tasks/abc034_c
C - 経路Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 横 W x 縦 H のグリッドがあります。左から i 番目、下から j
番目のマス目には (i, j) という番号がついています。高橋君は、マス目 (i, j) から
(i+1, j) または (i, j+1) に進むことができます。高橋君が (1, 1) から (W, H)
まで行く経路の個数を 1,000,000,007
で割ったあまりを求めてください。入力入力は以下の形式で標準入力から与えられる。W
H2 ≤ W, H ≤ 10^5 をみたす。部分点この問題には部分点が設定されている。満点は 101
点である。W, H ≤ 10 を満たすデータセットに正解した場合は、50 点が与えられる。W,
H ≤ 1000 を満たすデータセットに正解した場合は、上記の点数とは別に 50
点が与えられる。出力高橋君が (1, 1) から (W, H) まで行く経路の個数を
1,000,000,007 で割ったあまりを出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc034/submissions/7686299
// 提出ID : 7686299
// 問題ID : abc034_c
// コンテストID : abc034
// ユーザID : xryuseix
// コード長 : 2076
// 実行時間 : 3



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

// (a/b)%P の場合は，(a%P)*modinv(b)%P とする
ll modinv(ll a) {
  ll b = P, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= P;
  if (u < 0)
    u += P;
  return u;
}

ll kai(ll n) {
  ll res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
    res %= P;
  }
  return res;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int w, h;
  cin >> w >> h;
  w--;
  h--;
  ll tmp = kai(w) * kai(h) % P;
  fin(kai(w + h) % P * modinv(tmp) % P);

  //////////////////////////////////////////////////////
  return 0;
}
