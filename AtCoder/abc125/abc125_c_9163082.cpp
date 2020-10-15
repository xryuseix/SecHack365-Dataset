/*
問題文の引用元：https://atcoder.jp/contests/abc125/tasks/abc125_c
C - GCD on BlackboardEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 個の整数 A_1, A_2, ..., A_N
が黒板に書かれています。あなたはこの中から整数を 1 つ選んで、1 以上 10^9
以下の好きな整数に書き換えます。元の整数と同じ整数に書き換えても構いません。書き換えた後の
N 個の整数の最大公約数の最大値を求めてください。
制約入力は全て整数である。2 \leq N \leq 10^51 \leq A_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力書き換えた後の N 個の整数の最大公約数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc125/submissions/9163082
// 提出ID : 9163082
// 問題ID : abc125_c
// コンテストID : abc125
// ユーザID : xryuseix
// コード長 : 3825
// 実行時間 : 164



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

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

class Monoid {
public:
  // 単位元
  int unit;

  Monoid() { unit = 0; }

  // 演算関数
  int calc(int a, int b) { return gcd(max(a, b), min(a, b)); }
};

class SegmentTree {
public:
  // セグメント木の葉の要素数
  int n;

  // セグメント木
  vector<int> tree;

  // モノイド
  Monoid mono;

  SegmentTree(vi &v) {
    n = 1 << (int)ceil(log2(v.size()));
    tree = vector<int>(n << 1);
    for (int i = 0; i < v.size(); i++) {
      update(i, v[i]);
    }
    for (int i = v.size(); i < n; i++) {
      update(i, mono.unit);
    }
  }

  // k番目の値(0-indexed)をxに変更
  void update(int k, int x) {
    k += n;
    tree[k] = x;
    for (k = k >> 1; k > 0; k >>= 1) {
      tree[k] = mono.calc(tree[k << 1 | 0], tree[k << 1 | 1]);
    }
  }

  // [l, r)の最小値(0-indexed)を求める．
  int query(int l, int r) {
    int res = mono.unit;
    l += n;
    r += n;
    while (l < r) {
      if (l & 1) {
        res = mono.calc(res, tree[l++]);
      }
      if (r & 1) {
        res = mono.calc(res, tree[--r]);
      }
      l >>= 1;
      r >>= 1;
    }
    return res;
  }

  void show() {
    int ret = 2;
    for (int i = 1; i < 2 * n; i++) {
      cout << tree[i] << " ";
      if (i == ret - 1) {
        cout << endl;
        ret <<= 1;
      }
    }
    cout << endl;
  }
};

int main(void) {

  int n;
  scanf("%d", &n);

  vi v(n);

  rep(i, n) cin >> v[i];
  SegmentTree st(v);

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      st.update(0, v[1]);
      // st.show();
      ans = max(ans, st.query(0, n));
      st.update(0, v[0]);
    } else {
      st.update(i, v[0]);
      // st.show();
      ans = max(ans, st.query(0, n));
      st.update(i, v[i]);
    }
  }
  printf("%d\n", ans);
}
