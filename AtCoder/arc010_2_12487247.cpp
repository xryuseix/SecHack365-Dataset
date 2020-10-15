/*
引用元：https://atcoder.jp/contests/arc010/tasks/arc010_2
B - 超大型連休Editorial
// ソースコードの引用元 :
https://atcoder.jp/contests/arc010/submissions/12487247
// 提出ID : 12487247
// 問題ID : arc010_2
// コンテストID : arc010
// ユーザID : xryuseix
// コード長 : 3950
// 実行時間 : 2



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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
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

int main() {

  int n;
  cin >> n;
  vvi v(12);
  set<int> s{4, 6, 9, 11};
  set<pair<int, int>> S;
  rep(i, n) {
    string str;
    cin >> str;
    int a, b;
    rep(j, str.size()) {
      if (str[j] == '/') {
        a = STLL(str.substr(0, j));
        b = STLL(str.substr(j + 1));
        break;
      }
    }
    S.insert(mp(a, b));
  }
  // irep(i,S)cout<<(*i).fi<<" "<<(*i).se<<endl;
  int week = 0;
  for (int m = 1; m <= 12; m++) {
    for (int d = 1; d <= 31; d++) {
      if (d == 31 && s.count(m))
        continue;
      if (d >= 30 && m == 2)
        continue;
      v[m - 1].pb(week == 6 || week == 0);
      week++;
      week %= 7;
    }
  }
  // dump(v[0]);
  irep(i, S) {
    int m = (*i).first, d = (*i).second;
    while (1) {
      if (!v[m - 1][d - 1]) {
        v[m - 1][d - 1] = 1;
        break;
      } else {
        d++;
        if (s.count(m) && d == 31) {
          d = 1;
          m++;
        } else if (d >= 30 && m == 2) {
          d = 1;
          m++;
        } else if (d > 31) {
          d = 1;
          m++;
        }
        if (m > 12)
          break;
      }
    }
  }
  // dump(v[0]);

  vi w;
  rep(i, 12) { rep(j, v[i].size()) w.pb(v[i][j]); }
  int ans = 0;
  rep(i, w.size()) {
    int j = i;
    while (j < w.size() && w[j] == 1)
      j++;
    chmax(ans, j - i);
    i = j;
  }
  fin(ans);
}
