/*
引用元：https://atcoder.jp/contests/abc174/tasks/abc174_f
F - Range Set Query
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
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
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define fi first
#define se second
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 998244353; // 1000000007;
constexpr ld EPS = 1e-11;

template <typename T> class Sum {
public:
  // 単位元
  T unit;

  Sum(void) {
    // 単位元
    unit = 0;
  }

  // 演算関数
  T calc(T a, T b) { return a + b; }
};

template <typename T> struct Min {
public:
  // 単位元
  T unit;

  Min(void) {
    // 単位元
    unit = INF;
  }

  // 演算関数
  T calc(T a, T b) { return min(a, b); }
};

template <typename T, class MONOID> class SegmentTree {
public:
  // セグメント木の葉の要素数
  int n;

  // セグメント木
  vector<T> tree;

  // モノイド
  MONOID mono;

  SegmentTree(vector<T> &v)
      : n(1 << (int)ceil(log2(v.size()))), tree(vector<T>(n << 1)) {
    for (int i = 0; i < v.size(); ++i) {
      update(i, v[i]);
    }
    for (int i = v.size(); i < n; ++i) {
      update(i, mono.unit);
    }
  }

  // k番目の値(0-indexed)をxに変更
  void update(int k, T x) {
    k += n;
    tree[k] += x;
    for (k = k >> 1; k > 0; k >>= 1) {
      tree[k] = mono.calc(tree[k << 1 | 0], tree[k << 1 | 1]);
    }
  }

  // [l, r)の最小値(0-indexed)を求める．
  T query(int l, int r) {
    T res = mono.unit;
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

  T operator[](int k) {
    // st[i]で添字iの要素の値を返す
    if (k - n >= 0 || k < 0) {
      return -INF;
    }
    return tree[tree.size() - n + k];
  }

  void show(void) {
    int ret = 2;
    for (int i = 1; i < 2 * n; ++i) {
      if (tree[i] == mono.unit)
        cout << "UNIT ";
      else
        cout << tree[i] << " ";
      if (i == ret - 1) {
        cout << endl;
        ret <<= 1;
      }
    }
    cout << endl;
  }
};
template <class T> void lambdaSort1(vector<T> &v) {
  sort(all(v), [](auto const &l, auto const &r) {
    return l.fi.se < r.fi.se; // このbool式が成り立つ時入れ替える
  });
}
template <class T> void lambdaSort2(vector<T> &v) {
  sort(all(v), [](auto const &l, auto const &r) {
    return l.se.fi < r.se.fi; // このbool式が成り立つ時入れ替える
  });
}

int main() {

  int n, q;
  cin >> n >> q;
  vi c(n);
  rep(i, n) {
    cin >> c[i];
    c[i]--;
  }
  vector<pair<pair<int, int>, pair<int, int>>> que(q);
  rep(i, q) {
    cin >> que[i].first.first >> que[i].first.second;
    que[i].first.first--;
    que[i].first.second--;
    que[i].second.first = i;
  }

  lambdaSort1(que);
  vi lastappended(1e6, -1);
  vi v(n, 0);
  SegmentTree<int, Sum<int>> bit(v);
  int r = 0;

  // cout<<"++++++++"<<endl;
  // rep(i,q){
  //     cout<<que[i].fi.fi<<" "<<que[i].fi.se<<" "<<que[i].se.fi<<"
  //     "<<que[i].se.se<<endl;
  // }
  // cout<<"======"<<endl;

  for (int i = 0; i < q; i++) {
    while (r <= que[i].fi.se) {
      // cout<<"last"<<lastappended[c[r]]<<" "<<c[r]<<endl;
      if (lastappended[c[r]] >= 0)
        bit.update(lastappended[c[r]], -1);
      lastappended[c[r]] = r;
      bit.update(r, 1);
      r++;
      // cout<<i<<" "<<r<<endl;
    }
    // rep(j,10)cout<<lastappended[j]<<" ";
    // cout<<endl;
    // bit.show();
    // break;
    que[i].second.second = bit.query(que[i].fi.fi, que[i].fi.se + 1);
    // cout<<i<<" "<<que[i].second.second<<endl;
  }
  lambdaSort2(que);
  rep(i, q) { cout << que[i].se.se << endl; }
}
