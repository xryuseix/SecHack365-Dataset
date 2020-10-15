/*
問題文の引用元：https://atcoder.jp/contests/abc146/tasks/abc146_c
C - Buy an IntegerEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 高橋くんは整数を 1 つ買いに整数屋さんに行きました。整数屋さんには 1
以上 10^9 以下の整数が売られていて、整数 N を買うためには A \times N + B \times
d(N) 円が必要です。ここで、d(N) は N の十進表記での桁数です。高橋くんの所持金が
X
円のとき、高橋くんの買うことのできる最も大きい整数を求めてください。ただし、買うことのできる整数が
1 つもない場合は 0 を出力してください。
制約入力は全て整数である。1 \leq A \leq 10^91 \leq B \leq 10^91 \leq X \leq
10^{18}入力入力は以下の形式で標準入力から与えられる。A B
X出力高橋くんの買うことのできる最も大きい整数を出力せよ。ただし、買うことのできる整数が
1 つもない場合は 0 を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc146/submissions/8619152
// 提出ID : 8619152
// 問題ID : abc146_c
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 2065
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
  };
};
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int digit(ll n) {
  int res = 0;
  while (n > 0) {
    n /= 10;
    res++;
  }
  return res;
}

int main(void) {

  ll a, b, x;
  cin >> a >> b >> x;
  for (int i = 1; i <= 10; i++) {
    ll calc = (x - b * i) / a;
    calc = min((ll)1e9, calc);
    if (a * calc + b * digit(calc) <= x) {
      fin(calc);
      return 0;
    }
  }
  ll ans = 0;
  for (int i = 10000; i >= 0; i--) {
    if (a * i + b * digit(i) <= x) {
      fin(i);
      return 0;
    }
  }

  fin(0);
}
