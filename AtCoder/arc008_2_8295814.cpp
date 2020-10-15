/*
引用元：https://atcoder.jp/contests/arc008/tasks/arc008_2
B - 謎のたこ焼きおじさんEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/arc008/submissions/8295814
// 提出ID : 8295814
// 問題ID : arc008_2
// コンテストID : arc008
// ユーザID : xryuseix
// コード長 : 2142
// 実行時間 : 1



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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  map<char, int> m1, m2;
  rep(i, 26) {
    m1[i + 'A'] = 0;
    m2[i + 'A'] = 0;
  }
  rep(i, n) { m1[s[i]]++; }
  rep(i, m) { m2[t[i]]++; }
  ll ans = 0;
  for (auto it = m1.begin(); it != m1.end(); it++) {
    // cout<<it->first<<endl;
    ll a = it->second;
    if (a == 0)
      continue;
    ll b = m2[it->first];
    if (b == 0) {
      cout << -1 << endl;
      return 0;
    }
    ans = max(ans, (ll)ceil((double)a / b));
  }
  fin(ans);
}
