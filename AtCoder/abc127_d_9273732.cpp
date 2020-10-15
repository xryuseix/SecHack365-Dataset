/*
引用元：https://atcoder.jp/contests/abc127/tasks/abc127_d
D - Integer CardsEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc127/submissions/9273732
// 提出ID : 9273732
// 問題ID : abc127_d
// コンテストID : abc127
// ユーザID : xryuseix
// コード長 : 2477
// 実行時間 : 200



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

map<ll, ll> ma;

int main(void) {

  ll n, m;
  cin >> n >> m;
  vll v(n);
  rep(i, n) cin >> v[i];
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    ma[b] += a;
  }
  rep(i, n) { ma[v[i]]++; }
  vector<pair<ll, ll>> p;
  for (auto it = ma.begin(); it != ma.end(); it++) {
    p.push_back(mp(it->first, it->second));
  }
  Rort(p);
  ll ans = 0;
  int pos = 0;
  // rep(i,p.size())cout<<p[i].first<<" "<<p[i].second<<endl;
  while (n > 0) {
    if (n >= p[pos].second) {
      // cout<<"AAA:"<<p[pos].first*p[pos].second<<endl;
      ans += p[pos].first * p[pos].second;
      n -= p[pos].second;
      pos++;
      // cout<<"n"<<n<<endl;
    } else {
      // cout<<"BBB:"<<p[pos].first*n<<endl;
      ans += p[pos].first * n;
      break;
    }
  }
  fin(ans);
}
