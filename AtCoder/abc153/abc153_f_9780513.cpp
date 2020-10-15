/*
問題文の引用元：https://atcoder.jp/contests/abc153/tasks/abc153_f
F - Silver Fox vs Monster
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : ギンギツネは N 体のモンスターと戦っています。モンスターは 1
列に並んでおり、数直線上にいるとみなすことができます。i 番目のモンスターは座標
X_i にいて、体力は H_i
です。ギンギツネは爆弾を使ってモンスターを攻撃することができます。座標 x
で爆弾を使うと、座標が x-D 以上 x+D 以下の範囲にいる全てのモンスターの体力を A
減らすことができます。爆弾を使う以外の方法でモンスターの体力を減らすことはできません。全てのモンスターの体力を
0
以下にすればギンギツネの勝ちです。ギンギツネがモンスターに勝つまでに爆弾を使う回数の最小値を求めてください。
制約1 \leq N \leq 2 \times 10^50 \leq D \leq 10^91 \leq A \leq 10^90 \leq X_i
\leq 10^91 \leq H_i \leq 10^9X_i
は相異なる。入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。N
D AX_1 H_1:X_N
H_N出力ギンギツネがモンスターに勝つまでに爆弾を使う回数の最小値を出力せよ。



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

// vector vの中のn以下の数で最大のものを返す
ll bs(vector<pair<ll, ll>> &v, ll x) {
  ll ok = -1; //これがx以下
  ll ng = v.size(); // x以上
  // 問題によってokとngを入れ替える
  while (abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    if (v[mid].first <= x)
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main(void) {

  ll n, d, a;
  cin >> n >> d >> a;
  vector<pair<ll, ll>> v(n);
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    v[i] = mp(a, b);
  }
  Sort(v);
  vll imos(n + 1, 0);
  vll csum(n + 1, 0);
  ll ans = 0;
  rep(i, n) {
    if (i > 0)
      csum[i] = csum[i - 1] + imos[i - 1];
    ll l = v[i].first, r = v[i].first + 2 * d;
    l = bs(v, l);
    r = bs(v, r);
    ll minus =
        ceil(max((v[i].second - (csum[i] + imos[i])), 0LL) / (double)a) * a;
    ans += minus / a;
    imos[l] += minus;
    imos[r + 1] -= minus;
    // cout << l << " " << r << " " << minus << " " << csum[i] << endl;
  }
  // rep(i,n+1)cout<<imos[i]<<" ";
  // cout<<endl;
  fin(ans);
}
