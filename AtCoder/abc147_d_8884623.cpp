/*
引用元：https://atcoder.jp/contests/abc147/tasks/abc147_d
D - Xor Sum 4Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc147/submissions/8884623
// 提出ID : 8884623
// 問題ID : abc147_d
// コンテストID : abc147
// ユーザID : xryuseix
// コード長 : 2210
// 実行時間 : 564



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

int main(void) {

  ll n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];

  vs a(n);

  rep(i, n) {
    string s = "";
    while (v[i] > 0) {
      s += '0' + v[i] % 2;
      v[i] /= 2;
    }
    while (s.size() <= 61) {
      s += '0';
    }
    // reverse(all(s));
    a[i] = s;
  }

  ll ans = 0;

  // rep(i,n){
  //     cout<<a[i]<<endl;
  // }

  rep(i, a[0].size()) {
    ll zero = 0, iti = 0;
    rep(j, n) {
      if (a[j][i] == '0')
        zero++;
      else
        iti++;
    }
    ans += ((zero * iti % MOD) * ((ll)pow(2, i) % MOD)) % MOD;
    ans %= MOD;
  }
  fin(ans);
}
