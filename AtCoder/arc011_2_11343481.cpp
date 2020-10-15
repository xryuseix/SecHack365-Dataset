/*
引用元：https://atcoder.jp/contests/arc011/tasks/arc011_2
B - ルイス・キャロルの記憶術Editorial
// ソースコードの引用元 :
https://atcoder.jp/contests/arc011/submissions/11343481
// 提出ID : 11343481
// 問題ID : arc011_2
// コンテストID : arc011
// ユーザID : xryuseix
// コード長 : 2874
// 実行時間 : 3



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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

map<char, int> m;

string calc(string s) {
  string res = "";
  rep(i, s.size()) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += ('a' - 'A');
    }
    if (m.count(s[i]) == 0)
      continue;
    res += '0' + m[s[i]];
  }
  return res;
}

int main() {

  m['b'] = 1;
  m['c'] = 1;
  m['t'] = 3;
  m['j'] = 3;
  m['l'] = 5;
  m['v'] = 5;
  m['p'] = 7;
  m['m'] = 7;
  m['n'] = 9;
  m['g'] = 9;
  m['d'] = 2;
  m['w'] = 2;
  m['f'] = 4;
  m['q'] = 4;
  m['s'] = 6;
  m['x'] = 6;
  m['h'] = 8;
  m['k'] = 8;
  m['z'] = 0;
  m['r'] = 0;

  int n;
  cin >> n;
  vs ans;
  rep(i, n) {
    string s;
    cin >> s;
    s = calc(s);
    if (s.size() > 0)
      ans.pb(s);
  }
  rep(i, ans.size()) { cout << ((!i) ? "" : " ") << ans[i]; }
  cout << endl;
}
