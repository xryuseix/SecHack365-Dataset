/*
問題文の引用元：https://atcoder.jp/contests/abc142/tasks/abc142_d
D - Disjoint Set of Common DivisorsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 正整数 A, B が与えられます。A と B
の正の公約数の中からいくつかを選びます。ただし、選んだ整数の中のどの異なる 2
つの整数についても互いに素でなければなりません。最大でいくつ選べるでしょうか。公約数とは整数
d が整数 x と整数 y の公約数であるとは、d が x と y
をともに割り切ることをいいます。互いに素とは整数 x, y が互いに素であるとは、x, y
の正の公約数が 1 のみであることをいいます。割り切るとは整数 x が整数 y
を割り切るとは、y = \alpha x なる整数 \alpha が存在することをいいます。
制約入力は全て整数である。1 \leq A, B \leq
10^{12}入力入力は以下の形式で標準入力から与えられる。A
B出力条件を満たすように選べる整数の個数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc142/submissions/7778753
// 提出ID : 7778753
// 問題ID : abc142_d
// コンテストID : abc142
// ユーザID : xryuseix
// コード長 : 2558
// 実行時間 : 26



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

bool isPrime(ll x) {
  ll i;
  if (x < 2)
    return 0;
  else if (x == 2)
    return 1;
  if (x % 2 == 0)
    return 0;
  for (i = 3; i * i <= x; i += 2)
    if (x % i == 0)
      return 0;
  return 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll a, b;
  cin >> a >> b;
  vll va = enum_div(a), vb = enum_div(b);

  va.pb(a);
  vb.pb(b);

  set<ll> sb;
  rep(i, vb.size()) sb.insert(vb[i]);

  ll ans = 0;

  // for(int i=0;i<va.size();i++){
  //     cout<<va[i]<<" ";
  // }
  // cout<<endl;

  // for(int i=0;i<vb.size();i++){
  //     cout<<vb[i]<<" ";
  // }
  // cout<<endl;

  for (ll i = 0; i < va.size(); i++) {
    if (isPrime(va[i]) && sb.find(va[i]) != sb.end()) {
      ans++;
    }
  }

  fin(ans + 1);

  //////////////////////////////////////////////////////
  return 0;
}
