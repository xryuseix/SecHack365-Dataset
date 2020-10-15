/*
問題文の引用元：https://atcoder.jp/contests/arc102/tasks/arc102_a
C - Triangular RelationshipEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 整数 N,K が与えられます。N 以下の正の整数の組 (a,b,c)
であって、a+b,b+c,c+a がすべて K
の倍数であるようなものの個数を求めてください。ただし、a,b,c
の順番を入れ替えただけの組も異なるものとして数えます。また、a,b,c
の中に同じものがあっても構いません。
制約1 \leq N,K \leq 2\times 10^5N,K
は整数である入力入力は以下の形式で標準入力から与えられる。N K出力N
以下の正の整数の組 (a,b,c) であって、a+b,b+c,c+a がすべて K
の倍数であるようなものの個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc102/submissions/8075828
// 提出ID : 8075828
// 問題ID : arc102_a
// コンテストID : arc102
// ユーザID : xryuseix
// コード長 : 1725
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

  ll n, k;
  cin >> n >> k;
  if (k % 2 == 1) {
    cout << (n / k) * (n / k) * (n / k) << endl;
  } else {
    ll x = (n / k);
    ll y = (n + (k / 2)) / k;
    cout << x *x *x + y *y *y << endl;
  }
}
