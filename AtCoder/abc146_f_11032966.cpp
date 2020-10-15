/*
引用元：https://atcoder.jp/contests/abc146/tasks/abc146_f
F - SugorokuEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc146/submissions/11032966
// 提出ID : 11032966
// 問題ID : abc146_f
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 2699
// 実行時間 : 14



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("Yes") : fin("No"); }
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

int main() {
  vi ans;
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int pos = n;
  while (pos > 0) {
    // fin(pos);
    bool ch = 0;
    for (int i = k; i > 0 && pos - i >= 0; i--) {
      // cout<<pos<<" "<<s[pos-i]<<endl;
      if (s[pos - i] == '0') {
        ch = 1;
        pos -= i;
        ans.pb(i);
        break;
      }
    }
    if (!ch) {
      if (pos - k <= 0) {
        ans.pb(pos);
        break;
      } else {
        fin(-1);
        return 0;
      }
    }
  }
  reverse(all(ans));
  rep(i, ans.size()) {
    if (!i)
      cout << ans[i];
    else
      cout << " " << ans[i];
  }
  cout << endl;
}
