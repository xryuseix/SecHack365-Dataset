/*
問題文の引用元：https://atcoder.jp/contests/abc057/tasks/abc057_c
C - Digits in Multiplication
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 整数 N が与えられます。  ここで、2 つの正の整数 A,B に対して、F(A,B)
を「10 進表記における、A の桁数と B の桁数のうち大きい方」と定義します。
例えば、F(3,11) の値は、3 は 1 桁、11 は 2 桁であるため、F(3,11)=2 となります。
2 つの正の整数の組 (A,B) が N=A×B を満たすように動くとき、F(A,B)
の最小値を求めてください。
制約1≦N≦10^{10}N
は整数である。入力入力は以下の形式で標準入力から与えられる。N出力2
つの正の整数の組 (A,B) が N=A×B を満たすように動くときの F(A,B)
の最小値を出力せよ。



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

vector<ll> enum_div(ll n) {
  vector<ll> ret;
  for (ll i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i != 1 && i * i != n) {
        ret.push_back(n / i);
      }
    }
  }
  return ret;
}

int main(void) {

  ll n;
  cin >> n;
  vll v = enum_div(n);

  ll ans = LLINF;
  rep(i, v.size()) {
    ll a = v[i];
    ll b = n / v[i];
    // cout<<a<<" "<<b<<endl;
    int dig1 = 0;
    int dig2 = 0;
    while (a > 0) {
      dig1++;
      a /= 10;
    }
    while (b > 0) {
      dig2++;
      b /= 10;
    }
    ans = min(ans, (ll)max(dig1, dig2));
  }
  fin(ans);
}
