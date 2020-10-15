/*
引用元：https://atcoder.jp/contests/abc157/tasks/abc157_d
D - Friend SuggestionsEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc157/submissions/10455485
// 提出ID : 10455485
// 問題ID : abc157_d
// コンテストID : abc157
// ユーザID : xryuseix
// コード長 : 3967
// 実行時間 : 183



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

class UnionFind {
public:
  // 親の番号を格納する。親だった場合は-(その集合のサイズ)
  vector<int> Parent;

  UnionFind(int N) { Parent = vector<int>(N, -1); }

  // Aがどのグループに属しているか調べる
  int root(int A) {
    if (Parent[A] < 0)
      return A;
    return Parent[A] = root(Parent[A]);
  }

  // 自分のいるグループの頂点数を調べる
  int size(int A) {
    return -Parent[root(A)]; //親をとってきたい]
  }

  // AとBをくっ付ける
  bool connect(int A, int B) {
    // AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
    A = root(A);
    B = root(B);
    if (A == B) {
      //すでにくっついてるからくっ付けない
      return false;
    }

    // 大きい方(A)に小さいほう(B)をくっ付ける
    // 大小が逆だったらひっくり返す
    if (size(A) < size(B)) {
      swap(A, B);
    }

    // Aのサイズを更新する
    Parent[A] += Parent[B];
    // Bの親をAに変更する
    Parent[B] = A;

    return true;
  }
};

int main(void) {

  int n, m, k;
  cin >> n >> m >> k;
  UnionFind uni(n);
  vvi v(n);
  vvi w(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    v[a].pb(b);
    v[b].pb(a);
    uni.connect(a, b);
  }
  rep(i, k) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    w[a].pb(b);
    w[b].pb(a);
  }
  vector<map<int, int>> ma(n);
  rep(i, n) {
    rep(j, w[i].size()) {
      int root = uni.root(w[i][j]);
      if (root < 0) {
        root = w[i][j];
      }
      ma[i][root]++;
    }
  }
  rep(i, n) {
    int M = uni.size(i);
    int N = v[i].size();
    int ans = M - N - 1;
    int root = uni.root(i);
    if (root < 0) {
      root = i;
    }
    ans -= ma[i][root];
    if (i == 0) {
      cout << ans;
    } else {
      cout << " " << ans;
    }
  }
  cout << endl;
}
