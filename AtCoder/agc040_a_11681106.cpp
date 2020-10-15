/*
引用元：https://atcoder.jp/contests/agc040/tasks/agc040_a
A - ><Editorial
// ソースコードの引用元 :
https://atcoder.jp/contests/agc040/submissions/11681106
// 提出ID : 11681106
// 問題ID : agc040_a
// コンテストID : agc040
// ユーザID : xryuseix
// コード長 : 3073
// 実行時間 : 37



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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
#define endl '\n';
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
  string s;
  cin >> s;
  if (s[0] == '<')
    s = '>' + s;
  else
    s = '<' + s;
  if (s[s.size() - 1] == '<')
    s = s + '>';
  else
    s = s + '<';
  vi v(s.size() + 1, INF);
  rep(i, s.size() - 1) {
    if (s[i] == '>' && s[i + 1] == '<')
      v[i + 1] = 0;
  }
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == 0) {
      while (i < v.size() && s[i] == '<') {
        i++;
        if (v[i] == INF || v[i] < v[i - 1] + 1)
          v[i] = v[i - 1] + 1;
        else
          break;
      }
    }
  }
  for (int i = v.size() - 1; i >= 0; i--) {
    if (v[i] == 0) {
      while (i >= 0 && s[i - 1] == '>') {
        i--;
        if (v[i] == INF || v[i] < v[i + 1] + 1)
          v[i] = v[i + 1] + 1;
        else
          break;
      }
    }
  }
  ll ans = 0;
  for (int i = 1; i < v.size() - 1; i++)
    ans += v[i];
  // rep(i,v.size())cout<<v[i]<<" ";
  // cout<<endl;
  fin(ans);
}
