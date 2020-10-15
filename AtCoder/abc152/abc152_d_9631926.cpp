/*
問題文の引用元：https://atcoder.jp/contests/abc152/tasks/abc152_d
D - Handstand 2
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 正の整数 N が与えられます。N 以下の正の整数の組 (A,B)
であって、次の条件を満たすものの個数を求めてください。  A,B を先頭に 0
のつかない 10 進数表記で表したときに、 A の末尾の桁が B の先頭の桁に等しく、 A
の先頭の桁が B の末尾の桁に等しい
制約1 \leq N \leq 2 \times
10^5入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。
N出力答えを出力せよ。



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

ll calc(int l, int r, int n) {
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int tmp = i;
    bool ch = true;
    if (i % 10 != r)
      ch = false;
    while (tmp / 10 > 0) {
      tmp /= 10;
    }
    if (tmp == l && ch)
      ans++;
  }
  return ans;
}

int main(void) {

  itn n;
  cin >> n;

  ll ans = 0;
  if (n < 10) {
    fin(n);
    return 0;
  }
  string s = "";
  int tmp = n;
  while (tmp > 0) {
    s += tmp % 10 + '0';
    tmp /= 10;
  }
  reverse(all(s));
  for (int l = 1; l < 10; l++) {
    for (int r = 1; r < 10; r++) {
      // cout<<l<<" "<<r<<" "<<calc(l,r,n)<<endl;
      ans += calc(l, r, n) * calc(r, l, n);
    }
  }
  fin(ans);
}
