/*
引用元：https://atcoder.jp/contests/abc157/tasks/abc157_e
E - Simple String QueriesEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc157/submissions/10470244
// 提出ID : 10470244
// 問題ID : abc157_e
// コンテストID : abc157
// ユーザID : xryuseix
// コード長 : 4230
// 実行時間 : 106



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
#include <cassert>
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
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

class Monoid {
public:
  // 単位元
  bitset<26> unit;

  Monoid() {
    // 単位元
    unit = bitset<26>(0);
  }

  // 演算関数
  bitset<26> calc(bitset<26> a, bitset<26> b) { return a | b; }
};

class SegmentTree {
public:
  // セグメント木の葉の要素数
  int n;

  // セグメント木
  vector<bitset<26>> tree;

  // モノイド
  Monoid mono;

  SegmentTree(vector<bitset<26>> &v) {
    n = 1 << (int)ceil(log2(v.size()));
    tree = vector<bitset<26>>(n << 1);
    for (int i = 0; i < v.size(); i++) {
      update(i, v[i]);
    }
    for (int i = v.size(); i < n; i++) {
      update(i, mono.unit);
    }
  }

  // k番目の値(0-indexed)をxに変更
  void update(int k, bitset<26> &x) {
    k += n;
    tree[k] = x;
    for (k = k >> 1; k > 0; k >>= 1) {
      tree[k] = mono.calc(tree[k << 1 | 0], tree[k << 1 | 1]);
    }
  }

  // [l, r)の最小値(0-indexed)を求める．
  int query(int l, int r) {
    bitset<26> res = mono.unit;
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
    return res.count();
  }
  void show() {
    int ret = 2;
    for (int i = 1; i < 2 * n; i++) {
      cout << tree[i].count() << " ";
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
  string s;
  cin >> n >> s;
  int q;
  vector<bitset<26>> v(n);
  rep(i, n) {
    bitset<26> bs;
    bs[s[i] - 'a'] = 1;
    v[i] = bs;
    // cout<<bs<<endl;
  }
  SegmentTree st(v);
  int mode, iq, l, r;
  char c;
  scanf("%d", &q);
  // st.show();
  rep(_, q) {
    int mode;
    scanf("%d", &mode);
    if (mode == 1) {
      scanf("%d %c", &iq, &c);
      iq--;
      bitset<26> bs;
      bs[c - 'a'] = 1;
      st.update(iq, bs);
    }
    if (mode == 2) {
      scanf("%d %d", &l, &r);
      l--;
      printf("%d\n", st.query(l, r));
    }
  }
}
