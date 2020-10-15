/*
引用元：https://atcoder.jp/contests/abc119/tasks/abc119_d
D - Lazy FaithEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc119/submissions/8191808
// 提出ID : 8191808
// 問題ID : abc119_d
// コンテストID : abc119
// ユーザID : xryuseix
// コード長 : 3794
// 実行時間 : 393



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

// vector vの中のn以下の数で最大のものを返す
int bs(vector<ll> &v, ll x) {
  int ok = -1; //これがx以下
  int ng = v.size(); // x以上
  // 問題によってokとngを入れ替える
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (v[mid] <= x)
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main(void) {

  ll a, b, q;
  cin >> a >> b >> q;
  vll s(a), t(b), x(q);
  rep(i, a) cin >> s[i];
  rep(i, b) cin >> t[i];
  rep(i, q) cin >> x[i];

  for (int i = 0; i < q; i++) {
    ll ans = LLINF;
    {
      int ls = bs(s, x[i]);
      int rs = bs(s, x[i]) + 1;

      if (ls >= 0) {
        int lt = bs(t, s[ls]);
        int rt = bs(t, s[ls]) + 1;
        if (lt >= 0) {
          ll diff = abs(x[i] - s[ls]) + abs(s[ls] - t[lt]);
          ans = min(ans, diff);
        }
        if (rt < b) {
          ll diff = abs(x[i] - s[ls]) + abs(s[ls] - t[rt]);
          ans = min(ans, diff);
        }
      }
      if (rs < a) {
        int lt = bs(t, s[rs]);
        int rt = bs(t, s[rs]) + 1;
        if (lt >= 0) {
          ll diff = abs(x[i] - s[rs]) + abs(s[rs] - t[lt]);
          ans = min(ans, diff);
        }
        if (rt < b) {
          ll diff = abs(x[i] - s[rs]) + abs(s[rs] - t[rt]);
          ans = min(ans, diff);
        }
      }
    }

    {
      int lt = bs(t, x[i]);
      int rt = bs(t, x[i]) + 1;
      if (lt >= 0) {
        int ls = bs(s, t[lt]);
        int rs = bs(s, t[lt]) + 1;
        if (ls >= 0) {
          ll diff = abs(x[i] - t[lt]) + abs(s[ls] - t[lt]);
          ans = min(ans, diff);
        }
        if (rs < a) {
          ll diff = abs(x[i] - t[lt]) + abs(s[rs] - t[lt]);
          ans = min(ans, diff);
        }
      }
      if (rt < b) {
        int ls = bs(s, t[rt]);
        int rs = bs(s, t[rt]) + 1;
        if (ls >= 0) {
          ll diff = abs(x[i] - t[rt]) + abs(s[ls] - t[rt]);
          ans = min(ans, diff);
        }
        if (rs < a) {
          ll diff = abs(x[i] - t[rt]) + abs(s[rs] - t[rt]);
          ans = min(ans, diff);
        }
      }
    }
    fin(ans);
  }
}
