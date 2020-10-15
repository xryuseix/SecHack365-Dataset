/*
問題文の引用元：https://atcoder.jp/contests/abc149/tasks/abc149_b
B - Greedy TakahashiEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は A 枚、青木君は B
枚のクッキーを持っています。高橋君は以下の行動を K
回繰り返します。もし高橋君がクッキーを 1
枚以上持っているなら、高橋君のクッキーを 1
枚食べる。そうでなく、もし青木君がクッキーを 1
枚以上持っているなら、青木君のクッキーを 1
枚食べる。高橋君も青木君もクッキーを持っていないなら、何もしない。高橋君と青木君が最終的に持っているクッキーの枚数をそれぞれ求めてください。
制約0 \leq A \leq 10^{12}0 \leq B \leq 10^{12}0 \leq K \leq
10^{12}入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。A
B K出力高橋君と青木君のそれぞれが最終的に持っているクッキーの枚数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc149/submissions/9208934
// 提出ID : 9208934
// 問題ID : abc149_b
// コンテストID : abc149
// ユーザID : xryuseix
// コード長 : 1827
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

  // string s,t;
  // cin>>s>>t;
  // cout<<t<<s<<endl;
  ll a, b, k;
  cin >> a >> b >> k;
  a -= k;
  k = max(-a, 0LL);
  a = max(a, 0LL);
  b = max(0LL, b - k);
  cout << a << " " << b << endl;
}
