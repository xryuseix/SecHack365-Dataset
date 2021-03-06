/*
引用元：https://atcoder.jp/contests/abc136/tasks/abc136_e
E - Max GCDEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc136/submissions/6716635
// 提出ID : 6716635
// 問題ID : abc136_e
// コンテストID : abc136
// ユーザID : xryuseix
// コード長 : 2427
// 実行時間 : 22



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, k;
  cin >> n >> k;
  vi a(n);
  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }
  Sort(a);
  vector<ll> yakusu = enum_div(sum);
  yakusu.push_back(sum);
  ll ans = 1;
  for (int i = 0; i < yakusu.size(); i++) {
    ll need;

    vll r(n);
    rep(j, n) r[j] = a[j] % yakusu[i];
    Sort(r);
    ll B = 0;
    rep(j, n) B += yakusu[i] - r[j];
    ll A = 0;
    need = LLINF;
    rep(j, n) {
      A += r[j];
      B -= yakusu[i] - r[j];
      need = min(need, max(A, B));
    }
    if (need <= k)
      ans = max(ans, yakusu[i]);
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
