/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-2-final/tasks/nikkei2019_2_final_a
A - Count TripletsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は A_1, A_2, \cdots, A_N の N 要素からなる整数列 A
を持っています。A_i < A_j > A_k を満たす (i, j, k) (1 \leq i < j < k \leq N)
の組の個数を求めてください。
制約3 \leq N \leq 50000 \leq A_i \leq
10^9入力は全て整数である入力入力は以下の形式で標準入力から与えられる。NA_1 A_2
\cdots A_N出力A_i < A_j > A_k を満たす (i, j, k) (1 \leq i < j < k \leq N)
の組の個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-2-final/submissions/8965563
// 提出ID : 8965563
// 問題ID : nikkei2019_2_final_a
// コンテストID : nikkei2019-2-final
// ユーザID : xryuseix
// コード長 : 1979
// 実行時間 : 21



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
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll left = 0, right = 0;
    for (int j = 0; j < i; j++) {
      if (a[j] < a[i])
        left++;
    }
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j])
        right++;
    }
    ans += left * right;
    // cout<<i<<" "<<left<<" "<<right<<endl;
  }
  fin(ans);
}
