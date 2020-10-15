/*
問題文の引用元：https://atcoder.jp/contests/abc148/tasks/abc148_e
E - Double FactorialEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 0 以上の整数 n に対し、 f(n) を次のように定義します。f(n) = 1 (n < 2
のとき)f(n) = n f(n-2) (n ≥ 2 のとき)整数 N が与えられます。f(N) を 10
進法で表記した時に末尾に何個の 0 が続くかを求めてください。
制約0 ≤ N ≤ 10^{18}入力入力は以下の形式で標準入力から与えられる。N出力f(N) を 10
進法で表記した時の末尾の 0 の個数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc148/submissions/9085294
// 提出ID : 9085294
// 問題ID : abc148_e
// コンテストID : abc148
// ユーザID : xryuseix
// コード長 : 2425
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

int main(void) {

  ll n;
  cin >> n;
  ll tmp = n;
  ll ans = 0;
  if (tmp % 2 == 1) {
    fin(0);
    return 0;
  }
  while (tmp > 0) {
    ans += tmp / 5;
    tmp /= 5;
  }
  // ll five=0;
  // ll a=50,d=100;
  // rep(i,100000){
  //     five+=(n+a)/(double)d;
  //     if(!i%2){
  //         a*=5;
  //         d*=5;
  //     } else {
  //         a*=2;
  //         d*=2;
  //     }
  //     if(n<d)break;
  // }
  // ll two=0;
  // tmp=n;
  // while(tmp>0){
  //     two+=tmp/2;
  //     tmp/=2;
  // }
  // ans-=(n+10-5)/10;
  // ans-=(n+50-25)/50;
  // ans-=(n+250-125)/250;
  ll a = 5;
  rep(i, 100) {
    ans -= (n - a + 2 * a) / (a * 2);
    a *= 5;
    if (a > n)
      break;
    // fin(ans);
  }

  fin(ans);
}
