/*
問題文の引用元：https://atcoder.jp/contests/agc009/tasks/agc009_a
A - Multiple ArrayEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : N 項からなる数列 A_1,...,A_N があり、N 個のボタンがあります。i(1 ≦ i ≦
N) 個目のボタンを押すと、数列 A の 1 項目から i 項目までの値が 1
ずつ増加します。数列 B_1,...,B_N
が与えられます。高橋君は、これらのボタンを何回か押して、すべての i に対し、A_i
が B_i
の倍数になるようにします。高橋君がボタンを押す回数の最小値を求めてください。
制約入力はすべて整数である。1 ≦ N ≦ 10^50 ≦ A_i ≦ 10^9(1 ≦ i ≦ N)1 ≦ B_i ≦
10^9(1 ≦ i ≦ N)入力入力は以下の形式で標準入力から与えられる。NA_1 B_1:A_N
B_N出力高橋君がボタンを押す回数の最小値を表す整数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc009/submissions/8198936
// 提出ID : 8198936
// 問題ID : agc009_a
// コンテストID : agc009
// ユーザID : xryuseix
// コード長 : 1997
// 実行時間 : 86



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

ll add(ll a, ll b) {
  if (a == 0) {
    return 0;
  } else if (a <= b) {
    return b - a;
  } else if (a % b == 0) {
    return 0;
  } else {
    // 9 4;
    return b - (a - a / b * b);
  }
}

int main(void) {

  int n;
  cin >> n;
  vll a(n), b(n);
  rep(i, n) { cin >> a[i] >> b[i]; }
  ll ans = 0;

  for (int i = n - 1; i >= 0; i--) {
    a[i] += ans;
    ll tmp = add(a[i], b[i]);
    ans += tmp;
    a[i] += tmp;
  }
  fin(ans);
}
